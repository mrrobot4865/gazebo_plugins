// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cam_interface:msg/Pixel.idl
// generated code does not contain a copyright notice

#ifndef CAM_INTERFACE__MSG__DETAIL__PIXEL__BUILDER_HPP_
#define CAM_INTERFACE__MSG__DETAIL__PIXEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cam_interface/msg/detail/pixel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cam_interface
{

namespace msg
{

namespace builder
{

class Init_Pixel_name
{
public:
  explicit Init_Pixel_name(::cam_interface::msg::Pixel & msg)
  : msg_(msg)
  {}
  ::cam_interface::msg::Pixel name(::cam_interface::msg::Pixel::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cam_interface::msg::Pixel msg_;
};

class Init_Pixel_im_data
{
public:
  Init_Pixel_im_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pixel_name im_data(::cam_interface::msg::Pixel::_im_data_type arg)
  {
    msg_.im_data = std::move(arg);
    return Init_Pixel_name(msg_);
  }

private:
  ::cam_interface::msg::Pixel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cam_interface::msg::Pixel>()
{
  return cam_interface::msg::builder::Init_Pixel_im_data();
}

}  // namespace cam_interface

#endif  // CAM_INTERFACE__MSG__DETAIL__PIXEL__BUILDER_HPP_
