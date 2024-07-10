#ifndef BOX_CAMERA_PLUGIN_HPP_
#define BOX_CAMERA_PLUGIN_HPP_

#include <gazebo/common/Plugin.hh>

namespace gazebo {


    class BoxCameraPluginPrivate;

    class BoxCameraPlugin : public gazebo::SensorPlugin
    {

        public:
            BoxCameraPlugin();

            virtual ~BoxCameraPlugin();


            virtual void Load(gazebo::sensors::SensorPtr _sensor, sdf::ElementPtr sdf) override;
            // void Load(sensors::SensorPtr _sensor, sdf::ElementPtr /*_sdf*/) 

        private:
            std::unique_ptr<BoxCameraPluginPrivate> impl_;
            



    };

#endif
}