// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leitungssatz:msg/VectorResolution.idl
// generated code does not contain a copyright notice
#include "leitungssatz/msg/detail/vector_resolution__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "leitungssatz/msg/detail/resolution__functions.h"

bool
leitungssatz__msg__VectorResolution__init(leitungssatz__msg__VectorResolution * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!leitungssatz__msg__Resolution__Sequence__init(&msg->data, 0)) {
    leitungssatz__msg__VectorResolution__fini(msg);
    return false;
  }
  return true;
}

void
leitungssatz__msg__VectorResolution__fini(leitungssatz__msg__VectorResolution * msg)
{
  if (!msg) {
    return;
  }
  // data
  leitungssatz__msg__Resolution__Sequence__fini(&msg->data);
}

bool
leitungssatz__msg__VectorResolution__are_equal(const leitungssatz__msg__VectorResolution * lhs, const leitungssatz__msg__VectorResolution * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!leitungssatz__msg__Resolution__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
leitungssatz__msg__VectorResolution__copy(
  const leitungssatz__msg__VectorResolution * input,
  leitungssatz__msg__VectorResolution * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!leitungssatz__msg__Resolution__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

leitungssatz__msg__VectorResolution *
leitungssatz__msg__VectorResolution__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leitungssatz__msg__VectorResolution * msg = (leitungssatz__msg__VectorResolution *)allocator.allocate(sizeof(leitungssatz__msg__VectorResolution), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leitungssatz__msg__VectorResolution));
  bool success = leitungssatz__msg__VectorResolution__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leitungssatz__msg__VectorResolution__destroy(leitungssatz__msg__VectorResolution * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leitungssatz__msg__VectorResolution__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leitungssatz__msg__VectorResolution__Sequence__init(leitungssatz__msg__VectorResolution__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leitungssatz__msg__VectorResolution * data = NULL;

  if (size) {
    data = (leitungssatz__msg__VectorResolution *)allocator.zero_allocate(size, sizeof(leitungssatz__msg__VectorResolution), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leitungssatz__msg__VectorResolution__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leitungssatz__msg__VectorResolution__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
leitungssatz__msg__VectorResolution__Sequence__fini(leitungssatz__msg__VectorResolution__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      leitungssatz__msg__VectorResolution__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

leitungssatz__msg__VectorResolution__Sequence *
leitungssatz__msg__VectorResolution__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leitungssatz__msg__VectorResolution__Sequence * array = (leitungssatz__msg__VectorResolution__Sequence *)allocator.allocate(sizeof(leitungssatz__msg__VectorResolution__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leitungssatz__msg__VectorResolution__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leitungssatz__msg__VectorResolution__Sequence__destroy(leitungssatz__msg__VectorResolution__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leitungssatz__msg__VectorResolution__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leitungssatz__msg__VectorResolution__Sequence__are_equal(const leitungssatz__msg__VectorResolution__Sequence * lhs, const leitungssatz__msg__VectorResolution__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leitungssatz__msg__VectorResolution__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leitungssatz__msg__VectorResolution__Sequence__copy(
  const leitungssatz__msg__VectorResolution__Sequence * input,
  leitungssatz__msg__VectorResolution__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leitungssatz__msg__VectorResolution);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leitungssatz__msg__VectorResolution * data =
      (leitungssatz__msg__VectorResolution *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leitungssatz__msg__VectorResolution__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leitungssatz__msg__VectorResolution__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leitungssatz__msg__VectorResolution__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
