// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from capella_ros_msg:msg/AtomizeSwitchCtrStu.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__FUNCTIONS_H_
#define CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "capella_ros_msg/msg/rosidl_generator_c__visibility_control.h"

#include "capella_ros_msg/msg/detail/atomize_switch_ctr_stu__struct.h"

/// Initialize msg/AtomizeSwitchCtrStu message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * capella_ros_msg__msg__AtomizeSwitchCtrStu
 * )) before or use
 * capella_ros_msg__msg__AtomizeSwitchCtrStu__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_msg
bool
capella_ros_msg__msg__AtomizeSwitchCtrStu__init(capella_ros_msg__msg__AtomizeSwitchCtrStu * msg);

/// Finalize msg/AtomizeSwitchCtrStu message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_msg
void
capella_ros_msg__msg__AtomizeSwitchCtrStu__fini(capella_ros_msg__msg__AtomizeSwitchCtrStu * msg);

/// Create msg/AtomizeSwitchCtrStu message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * capella_ros_msg__msg__AtomizeSwitchCtrStu__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_msg
capella_ros_msg__msg__AtomizeSwitchCtrStu *
capella_ros_msg__msg__AtomizeSwitchCtrStu__create();

/// Destroy msg/AtomizeSwitchCtrStu message.
/**
 * It calls
 * capella_ros_msg__msg__AtomizeSwitchCtrStu__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_msg
void
capella_ros_msg__msg__AtomizeSwitchCtrStu__destroy(capella_ros_msg__msg__AtomizeSwitchCtrStu * msg);

/// Check for msg/AtomizeSwitchCtrStu message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_msg
bool
capella_ros_msg__msg__AtomizeSwitchCtrStu__are_equal(const capella_ros_msg__msg__AtomizeSwitchCtrStu * lhs, const capella_ros_msg__msg__AtomizeSwitchCtrStu * rhs);

/// Copy a msg/AtomizeSwitchCtrStu message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_msg
bool
capella_ros_msg__msg__AtomizeSwitchCtrStu__copy(
  const capella_ros_msg__msg__AtomizeSwitchCtrStu * input,
  capella_ros_msg__msg__AtomizeSwitchCtrStu * output);

/// Initialize array of msg/AtomizeSwitchCtrStu messages.
/**
 * It allocates the memory for the number of elements and calls
 * capella_ros_msg__msg__AtomizeSwitchCtrStu__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_msg
bool
capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence__init(capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence * array, size_t size);

/// Finalize array of msg/AtomizeSwitchCtrStu messages.
/**
 * It calls
 * capella_ros_msg__msg__AtomizeSwitchCtrStu__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_msg
void
capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence__fini(capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence * array);

/// Create array of msg/AtomizeSwitchCtrStu messages.
/**
 * It allocates the memory for the array and calls
 * capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_msg
capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence *
capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence__create(size_t size);

/// Destroy array of msg/AtomizeSwitchCtrStu messages.
/**
 * It calls
 * capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_msg
void
capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence__destroy(capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence * array);

/// Check for msg/AtomizeSwitchCtrStu message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_msg
bool
capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence__are_equal(const capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence * lhs, const capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence * rhs);

/// Copy an array of msg/AtomizeSwitchCtrStu messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_msg
bool
capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence__copy(
  const capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence * input,
  capella_ros_msg__msg__AtomizeSwitchCtrStu__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_MSG__MSG__DETAIL__ATOMIZE_SWITCH_CTR_STU__FUNCTIONS_H_
