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
      this->timestamp = 0ll;
      this->height = 0ul;
      this->width = 0ul;
      this->encoding = "";
      this->is_bigendian = 0;
      this->step = 0ul;
    }
  }

  explicit Pixel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : encoding(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->height = 0ul;
      this->width = 0ul;
      this->encoding = "";
      this->is_bigendian = 0;
      this->step = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _height_type =
    uint32_t;
  _height_type height;
  using _width_type =
    uint32_t;
  _width_type width;
  using _encoding_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _encoding_type encoding;
  using _is_bigendian_type =
    uint8_t;
  _is_bigendian_type is_bigendian;
  using _step_type =
    uint32_t;
  _step_type step;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__encoding(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->encoding = _arg;
    return *this;
  }
  Type & set__is_bigendian(
    const uint8_t & _arg)
  {
    this->is_bigendian = _arg;
    return *this;
  }
  Type & set__step(
    const uint32_t & _arg)
  {
    this->step = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
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
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->encoding != other.encoding) {
      return false;
    }
    if (this->is_bigendian != other.is_bigendian) {
      return false;
    }
    if (this->step != other.step) {
      return false;
    }
    if (this->data != other.data) {
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
