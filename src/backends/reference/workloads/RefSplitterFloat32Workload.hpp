﻿//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include <backends/Workload.hpp>
#include <backends/WorkloadData.hpp>

namespace armnn
{

class RefSplitterFloat32Workload : public Float32Workload<SplitterQueueDescriptor>
{
public:
    using Float32Workload<SplitterQueueDescriptor>::Float32Workload;
    virtual void Execute() const override;
};

} //namespace armnn
