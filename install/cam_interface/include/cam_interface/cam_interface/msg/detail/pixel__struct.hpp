// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cam_interface:msg/Pixel.idl
// generated code does not contain a copyright notice

#ifndef CAM_INTERFACE__MSG__DETAIL__PIXEL__STRUCT_HPP_
#define CAM_INTERFACE__MSG__DETAIL__PIXEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cam_interface__msg__Pixel __attribute__((deprecated))
#else
# define DEPRECATED__cam_interface__msg__Pixel __declspec(deprecated)
#endif

namespace cam_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pixel_
{
  using Type = Pixel_<ContainerAllocator>;

  explicit Pixel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->im_data.begin(), this->im_data.end(), 0.0f);
      this->name = "";
    }
  }

  explicit Pixel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : im_data(_alloc),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->im_data.begin(), this->im_data.end(), 0.0f);
      this->name = "";
    }
  }

  // field types and members
  using _im_data_type =
    std::array<float, 3>;
  _im_data_type im_data;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__im_data(
    const std::array<float, 3> & _arg)
  {
    this->im_data = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cam_interface::msg::Pixel_<ContainerAllocator> *;
  using ConstRawPtr =
    const cam_interface::msg::Pixel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cam_interface::msg::Pixel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cam_interface::msg::Pixel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cam_interface::msg::Pixel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cam_interface::msg::Pixel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cam_interface::msg::Pixel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cam_interface::msg::Pixel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cam_interface::msg::Pixel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cam_interface::msg::Pixel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cam_interface__msg__Pixel
    std::shared_ptr<cam_interface::msg::Pixel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cam_interface__msg__Pixel
    std::shared_ptr<cam_interface::msg::Pixel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pixel_ & other) const
  {
    if (this->im_data != other.im_data) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pixel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pixel_

// alias to use template instance with default allocator
using Pixel =
  cam_interface::msg::Pixel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cam_interface

#endif  // CAM_INTERFACE__MSG__DETAIL__PIXEL__STRUCT_HPP_
