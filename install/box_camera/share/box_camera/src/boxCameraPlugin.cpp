#include <boxCamera/boxCameraPlugin.hpp>
#include <gazebo_ros/node.hpp>
#include <gazebo/transport/transport.hh>
#include <gazebo/sensors/sensors.hh>
// #include <cam_msgs/msg/Pixel.hpp>
#include <gazebo/common/common.hh>
// #include <std_msgs/msg/bool.hpp>
#include <rclcpp/rclcpp.hpp>
#include <cam_interface/msg/pixel.hpp>
#include <memory>

namespace gazebo {


    class BoxCameraPluginPrivate{

        public:
            gazebo::event::ConnectionPtr updateConnection;

            gazebo_ros::Node::SharedPtr ros_node_;

            gazebo::sensors::CameraSensorPtr _camerasensor;

            rclcpp::Node::SharedPtr ros_node;

            rclcpp::Publisher<cam_interface::msg::Pixel>::SharedPtr cam_publisher;
             
            void OnUpdate();

            void OnPower();

              
        
    };


    BoxCameraPlugin::BoxCameraPlugin(): impl_(std::make_unique<BoxCameraPluginPrivate>()){
        printf("Plugin Initialized !\n");

    }


    BoxCameraPlugin::~BoxCameraPlugin(){
    }

    void BoxCameraPlugin::Load(gazebo::sensors::SensorPtr _sensor, sdf::ElementPtr sdf){
        printf("Plugin Loaded !\n");
        //ROS Code
        if (!rclcpp::ok())
        {
            rclcpp::init(0, nullptr);
        }

        impl_->ros_node = std::make_shared<rclcpp::Node>("camera_plugin_node");
        impl_->cam_publisher = impl_->ros_node->create_publisher<cam_interface::msg::Pixel>("camera_topic", 10);
        
        impl_->_camerasensor = std::dynamic_pointer_cast<sensors::CameraSensor>(_sensor);

        if (!impl_->_camerasensor)
        {
            gzerr << "CameraPlugin requires a CameraSensor.\n";
            return;
        }

        impl_->OnPower();
        
    

    }

    void BoxCameraPluginPrivate::OnPower(){
        printf("Powered");

        this->updateConnection = this->_camerasensor->ConnectUpdated(std::bind(&BoxCameraPluginPrivate::OnUpdate,this));

    }

    void BoxCameraPluginPrivate::OnUpdate(){
        printf("Updating");
    }


    GZ_REGISTER_SENSOR_PLUGIN(BoxCameraPlugin)

}