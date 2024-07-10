// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cam_interface:msg/Pixel.idl
// generated code does not contain a copyright notice

#ifndef CAM_INTERFACE__MSG__DETAIL__PIXEL__TRAITS_HPP_
#define CAM_INTERFACE__MSG__DETAIL__PIXEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cam_interface/msg/detail/pixel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cam_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pixel & msg,
  std::ostream & out)
{
  out << "{";
  // member: im_data
  {
    if (msg.im_data.size() == 0) {
      out << "im_data: []";
    } else {
      out << "im_data: [";
      size_t pending_items = msg.im_data.size();
      for (auto item : msg.im_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pixel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: im_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.im_data.size() == 0) {
      out << "im_data: []\n";
    } else {
      out << "im_data:\n";
      for (auto item : msg.im_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pixel & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cam_interface

namespace rosidl_generator_traits
{

[[deprecated("use cam_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cam_interface::msg::Pixel & msg,
  std::ostream & out, size_t indentation = 0)
{
  cam_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cam_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const cam_interface::msg::Pixel & msg)
{
  return cam_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cam_interface::msg::Pixel>()
{
  return "cam_interface::msg::Pixel";
}

template<>
inline const char * name<cam_interface::msg::Pixel>()
{
  return "cam_interface/msg/Pixel";
}

template<>
struct has_fixed_size<cam_interface::msg::Pixel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cam_interface::msg::Pixel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cam_interface::msg::Pixel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAM_INTERFACE__MSG__DETAIL__PIXEL__TRAITS_HPP_
