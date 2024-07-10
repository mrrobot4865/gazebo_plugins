#include <gazebo/gazebo.hh>
#include <gazebo/sensors/sensors.hh>
#include <gazebo/transport/transport.hh>
#include <gazebo/common/common.hh>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

namespace gazebo
{
  class CameraPlugin : public SensorPlugin
  {
  public:
    CameraPlugin() : SensorPlugin() {}

    virtual void Load(sensors::SensorPtr _sensor, sdf::ElementPtr _sdf)
    {
      // ROS2 initialization
      if (!rclcpp::ok())
      {
        rclcpp::init(0, nullptr);
      }

      // Create a ROS2 node
      this->ros_node = std::make_shared<rclcpp::Node>("camera_plugin_node");

      // Create a publisher
      this->publisher = this->ros_node->create_publisher<std_msgs::msg::String>("camera_topic", 10);

      // Create a timer to publish messages periodically
      this->timer = this->ros_node->create_wall_timer(
        std::chrono::milliseconds(100), std::bind(&CameraPlugin::OnUpdate, this));

      // Get the parent sensor
      this->parentSensor = std::dynamic_pointer_cast<sensors::CameraSensor>(_sensor);

      if (!this->parentSensor)
      {
        gzerr << "CameraPlugin requires a CameraSensor.\n";
        return;
      }

      // Connect to the sensor update event
      this->updateConnection = this->parentSensor->ConnectUpdated(std::bind(&CameraPlugin::OnUpdate, this));
    }

    // Called each time the sensor updates
    void OnUpdate()
    {
      if (!this->parentSensor)
      {
        return;
      }

      // Access camera data
      const unsigned char *image = this->parentSensor->ImageData();

      // Create and publish a message
      auto message = std_msgs::msg::String();
      message.data = "Camera data captured!";
      this->publisher->publish(message);

      // Spin the ROS node
      rclcpp::spin_some(this->ros_node);
    }

  private:
    sensors::CameraSensorPtr parentSensor;
    event::ConnectionPtr updateConnection;
    rclcpp::Node::SharedPtr ros_node;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher;
    rclcpp::TimerBase::SharedPtr timer;
  };

  // Register this plugin with the simulator
  GZ_REGISTER_SENSOR_PLUGIN(CameraPlugin)
}
