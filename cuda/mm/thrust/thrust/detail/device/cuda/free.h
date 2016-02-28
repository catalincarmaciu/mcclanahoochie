/*
 *  Copyright 2008-2010 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


/*! \file free.h
 *  \brief Defines the interface to free() on CUDA.
 */

#pragma once

#include <thrust/device_ptr.h>
#include <thrust/system_error.h>
#include <cuda_runtime_api.h>
#include <string>

namespace thrust {
namespace detail {
namespace device {
namespace cuda {

template<unsigned int DummyParameterToAvoidInstantiation>
void free(thrust::device_ptr<void> ptr) {
#if 0
    cudaError_t error = cudaFree(ptr.get());
    if (error) {
        throw thrust::system_error(error, thrust::cuda_category());
    } // end error
#endif
} // end free()

} // end namespace cuda
} // end namespace device
} // end namespace detail
} // end namespace thrust
