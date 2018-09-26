//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//
#pragma once

#include <armnn/Tensor.hpp>
#include <backends/ITensorHandle.hpp>

void CopyDataToITensorHandle(armnn::ITensorHandle* tensorHandle, const void* mem);

void CopyDataFromITensorHandle(void* mem, const armnn::ITensorHandle* tensorHandle);

void AllocateAndCopyDataToITensorHandle(armnn::ITensorHandle* tensorHandle, const void* mem);