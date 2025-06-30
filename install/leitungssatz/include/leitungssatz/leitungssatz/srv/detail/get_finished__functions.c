// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leitungssatz:srv/GetFinished.idl
// generated code does not contain a copyright notice
#include "leitungssatz/srv/detail/get_finished__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
leitungssatz__srv__GetFinished_Request__init(leitungssatz__srv__GetFinished_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
leitungssatz__srv__GetFinished_Request__fini(leitungssatz__srv__GetFinished_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
leitungssatz__srv__GetFinished_Request__are_equal(const leitungssatz__srv__GetFinished_Request * lhs, const leitungssatz__srv__GetFinished_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
leitungssatz__srv__GetFinished_Request__copy(
  const leitungssatz__srv__GetFinished_Request * input,
  leitungssatz__srv__GetFinished_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

leitungssatz__srv__GetFinished_Request *
leitungssatz__srv__GetFinished_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leitungssatz__srv__GetFinished_Request * msg = (leitungssatz__srv__GetFinished_Request *)allocator.allocate(sizeof(leitungssatz__srv__GetFinished_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leitungssatz__srv__GetFinished_Request));
  bool success = leitungssatz__srv__GetFinished_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leitungssatz__srv__GetFinished_Request__destroy(leitungssatz__srv__GetFinished_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leitungssatz__srv__GetFinished_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leitungssatz__srv__GetFinished_Request__Sequence__init(leitungssatz__srv__GetFinished_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leitungssatz__srv__GetFinished_Request * data = NULL;

  if (size) {
    data = (leitungssatz__srv__GetFinished_Request *)allocator.zero_allocate(size, sizeof(leitungssatz__srv__GetFinished_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leitungssatz__srv__GetFinished_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leitungssatz__srv__GetFinished_Request__fini(&data[i - 1]);
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
leitungssatz__srv__GetFinished_Request__Sequence__fini(leitungssatz__srv__GetFinished_Request__Sequence * array)
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
      leitungssatz__srv__GetFinished_Request__fini(&array->data[i]);
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

leitungssatz__srv__GetFinished_Request__Sequence *
leitungssatz__srv__GetFinished_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leitungssatz__srv__GetFinished_Request__Sequence * array = (leitungssatz__srv__GetFinished_Request__Sequence *)allocator.allocate(sizeof(leitungssatz__srv__GetFinished_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leitungssatz__srv__GetFinished_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leitungssatz__srv__GetFinished_Request__Sequence__destroy(leitungssatz__srv__GetFinished_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leitungssatz__srv__GetFinished_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leitungssatz__srv__GetFinished_Request__Sequence__are_equal(const leitungssatz__srv__GetFinished_Request__Sequence * lhs, const leitungssatz__srv__GetFinished_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leitungssatz__srv__GetFinished_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leitungssatz__srv__GetFinished_Request__Sequence__copy(
  const leitungssatz__srv__GetFinished_Request__Sequence * input,
  leitungssatz__srv__GetFinished_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leitungssatz__srv__GetFinished_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leitungssatz__srv__GetFinished_Request * data =
      (leitungssatz__srv__GetFinished_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leitungssatz__srv__GetFinished_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leitungssatz__srv__GetFinished_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leitungssatz__srv__GetFinished_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
leitungssatz__srv__GetFinished_Response__init(leitungssatz__srv__GetFinished_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
leitungssatz__srv__GetFinished_Response__fini(leitungssatz__srv__GetFinished_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
leitungssatz__srv__GetFinished_Response__are_equal(const leitungssatz__srv__GetFinished_Response * lhs, const leitungssatz__srv__GetFinished_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
leitungssatz__srv__GetFinished_Response__copy(
  const leitungssatz__srv__GetFinished_Response * input,
  leitungssatz__srv__GetFinished_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

leitungssatz__srv__GetFinished_Response *
leitungssatz__srv__GetFinished_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leitungssatz__srv__GetFinished_Response * msg = (leitungssatz__srv__GetFinished_Response *)allocator.allocate(sizeof(leitungssatz__srv__GetFinished_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leitungssatz__srv__GetFinished_Response));
  bool success = leitungssatz__srv__GetFinished_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leitungssatz__srv__GetFinished_Response__destroy(leitungssatz__srv__GetFinished_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leitungssatz__srv__GetFinished_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leitungssatz__srv__GetFinished_Response__Sequence__init(leitungssatz__srv__GetFinished_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leitungssatz__srv__GetFinished_Response * data = NULL;

  if (size) {
    data = (leitungssatz__srv__GetFinished_Response *)allocator.zero_allocate(size, sizeof(leitungssatz__srv__GetFinished_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leitungssatz__srv__GetFinished_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leitungssatz__srv__GetFinished_Response__fini(&data[i - 1]);
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
leitungssatz__srv__GetFinished_Response__Sequence__fini(leitungssatz__srv__GetFinished_Response__Sequence * array)
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
      leitungssatz__srv__GetFinished_Response__fini(&array->data[i]);
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

leitungssatz__srv__GetFinished_Response__Sequence *
leitungssatz__srv__GetFinished_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leitungssatz__srv__GetFinished_Response__Sequence * array = (leitungssatz__srv__GetFinished_Response__Sequence *)allocator.allocate(sizeof(leitungssatz__srv__GetFinished_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leitungssatz__srv__GetFinished_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leitungssatz__srv__GetFinished_Response__Sequence__destroy(leitungssatz__srv__GetFinished_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leitungssatz__srv__GetFinished_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leitungssatz__srv__GetFinished_Response__Sequence__are_equal(const leitungssatz__srv__GetFinished_Response__Sequence * lhs, const leitungssatz__srv__GetFinished_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leitungssatz__srv__GetFinished_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leitungssatz__srv__GetFinished_Response__Sequence__copy(
  const leitungssatz__srv__GetFinished_Response__Sequence * input,
  leitungssatz__srv__GetFinished_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leitungssatz__srv__GetFinished_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leitungssatz__srv__GetFinished_Response * data =
      (leitungssatz__srv__GetFinished_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leitungssatz__srv__GetFinished_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leitungssatz__srv__GetFinished_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leitungssatz__srv__GetFinished_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
