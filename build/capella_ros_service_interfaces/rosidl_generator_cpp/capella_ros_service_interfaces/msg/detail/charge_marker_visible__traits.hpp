// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capella_ros_service_interfaces:msg/ChargeMarkerVisible.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_MARKER_VISIBLE__TRAITS_HPP_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_MARKER_VISIBLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capella_ros_service_interfaces/msg/detail/charge_marker_visible__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace capella_ros_service_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChargeMarkerVisible & msg,
  std::ostream & out)
{
  out << "{";
  // member: marker_visible
  {
    out << "marker_visible: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_visible, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargeMarkerVisible & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: marker_visible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_visible: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_visible, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargeMarkerVisible & msg, bool use_flow_style = false)
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

}  // namespace capella_ros_service_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use capella_ros_service_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const capella_ros_service_interfaces::msg::ChargeMarkerVisible & msg,
  std::ostream & out, size_t indentation = 0)
{
  capella_ros_service_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capella_ros_service_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const capella_ros_service_interfaces::msg::ChargeMarkerVisible & msg)
{
  return capella_ros_service_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<capella_ros_service_interfaces::msg::ChargeMarkerVisible>()
{
  return "capella_ros_service_interfaces::msg::ChargeMarkerVisible";
}

template<>
inline const char * name<capella_ros_service_interfaces::msg::ChargeMarkerVisible>()
{
  return "capella_ros_service_interfaces/msg/ChargeMarkerVisible";
}

template<>
struct has_fixed_size<capella_ros_service_interfaces::msg::ChargeMarkerVisible>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<capella_ros_service_interfaces::msg::ChargeMarkerVisible>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<capella_ros_service_interfaces::msg::ChargeMarkerVisible>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__CHARGE_MARKER_VISIBLE__TRAITS_HPP_
