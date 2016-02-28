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


/*! \file swap_ranges.h
 *  \brief Device interface to swap_ranges.
 */

#pragma once

#include <thrust/detail/device/generic/swap_ranges.h>

namespace thrust {
namespace detail {
namespace device {

template < typename ForwardIterator1,
         typename ForwardIterator2 >
ForwardIterator2 swap_ranges(ForwardIterator1 first1,
                             ForwardIterator1 last1,
                             ForwardIterator2 first2) {
    return thrust::detail::device::generic::swap_ranges(first1, last1, first2);
}

} // end namespace device
} // end namespace detail
} // end namespace thrust
