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

class Init_Pixel_data
{
public:
  explicit Init_Pixel_data(::cam_interface::msg::Pixel & msg)
  : msg_(msg)
  {}
  ::cam_interface::msg::Pixel data(::cam_interface::msg::Pixel::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cam_interface::msg::Pixel msg_;
};

class Init_Pixel_step
{
public:
  explicit Init_Pixel_step(::cam_interface::msg::Pixel & msg)
  : msg_(msg)
  {}
  Init_Pixel_data step(::cam_interface::msg::Pixel::_step_type arg)
  {
    msg_.step = std::move(arg);
    return Init_Pixel_data(msg_);
  }

private:
  ::cam_interface::msg::Pixel msg_;
};

class Init_Pixel_is_bigendian
{
public:
  explicit Init_Pixel_is_bigendian(::cam_interface::msg::Pixel & msg)
  : msg_(msg)
  {}
  Init_Pixel_step is_bigendian(::cam_interface::msg::Pixel::_is_bigendian_type arg)
  {
    msg_.is_bigendian = std::move(arg);
    return Init_Pixel_step(msg_);
  }

private:
  ::cam_interface::msg::Pixel msg_;
};

class Init_Pixel_encoding
{
public:
  explicit Init_Pixel_encoding(::cam_interface::msg::Pixel & msg)
  : msg_(msg)
  {}
  Init_Pixel_is_bigendian encoding(::cam_interface::msg::Pixel::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_Pixel_is_bigendian(msg_);
  }

private:
  ::cam_interface::msg::Pixel msg_;
};

class Init_Pixel_width
{
public:
  explicit Init_Pixel_width(::cam_interface::msg::Pixel & msg)
  : msg_(msg)
  {}
  Init_Pixel_encoding width(::cam_interface::msg::Pixel::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Pixel_encoding(msg_);
  }

private:
  ::cam_interface::msg::Pixel msg_;
};

class Init_Pixel_height
{
public:
  explicit Init_Pixel_height(::cam_interface::msg::Pixel & msg)
  : msg_(msg)
  {}
  Init_Pixel_width height(::cam_interface::msg::Pixel::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Pixel_width(msg_);
  }

private:
  ::cam_interface::msg::Pixel msg_;
};

class Init_Pixel_timestamp
{
public:
  Init_Pixel_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pixel_height timestamp(::cam_interface::msg::Pixel::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Pixel_height(msg_);
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
  return cam_interface::msg::builder::Init_Pixel_timestamp();
}

}  // namespace cam_interface

#endif  // CAM_INTERFACE__MSG__DETAIL__PIXEL__BUILDER_HPP_
