// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

CU_PFN_DECL(cuCtxCreate)
CU_PFN_DECL(cuCtxDestroy)
CU_PFN_DECL(cuCtxEnablePeerAccess)
CU_PFN_DECL(cuCtxGetCurrent)
CU_PFN_DECL(cuCtxGetDevice)
CU_PFN_DECL(cuCtxGetSharedMemConfig)
CU_PFN_DECL(cuCtxSetCurrent)
CU_PFN_DECL(cuCtxSetSharedMemConfig)
CU_PFN_DECL(cuCtxSynchronize)
CU_PFN_DECL(cuDeviceCanAccessPeer)
CU_PFN_DECL(cuDeviceGet)
CU_PFN_DECL(cuDeviceGetAttribute)
CU_PFN_DECL(cuDeviceGetCount)
CU_PFN_DECL(cuDeviceGetName)
CU_PFN_DECL(cuDeviceGetPCIBusId)
CU_PFN_DECL(cuDevicePrimaryCtxGetState)
CU_PFN_DECL(cuDevicePrimaryCtxRelease)
CU_PFN_DECL(cuDevicePrimaryCtxRetain)
CU_PFN_DECL(cuDevicePrimaryCtxSetFlags)
CU_PFN_DECL(cuDeviceTotalMem)
CU_PFN_DECL(cuDriverGetVersion)
CU_PFN_DECL(cuEventCreate)
CU_PFN_DECL(cuEventDestroy)
CU_PFN_DECL(cuEventElapsedTime)
CU_PFN_DECL(cuEventQuery)
CU_PFN_DECL(cuEventRecord)
CU_PFN_DECL(cuEventSynchronize)
CU_PFN_DECL(cuFuncGetAttribute)
CU_PFN_DECL(cuFuncSetCacheConfig)
CU_PFN_DECL(cuGetErrorName)
CU_PFN_DECL(cuGetErrorString)
CU_PFN_DECL(cuGraphAddMemcpyNode)
CU_PFN_DECL(cuGraphAddMemsetNode)
CU_PFN_DECL(cuGraphAddKernelNode)
CU_PFN_DECL(cuGraphCreate)
CU_PFN_DECL(cuGraphDestroy)
CU_PFN_DECL(cuGraphExecDestroy)
CU_PFN_DECL(cuGraphGetNodes)
CU_PFN_DECL(cuGraphInstantiate)
CU_PFN_DECL(cuGraphLaunch)
CU_PFN_DECL(cuInit)
CU_PFN_DECL(cuLaunchKernel)
CU_PFN_DECL(cuMemAlloc)
CU_PFN_DECL(cuMemAllocManaged)
CU_PFN_DECL(cuMemFree)
CU_PFN_DECL(cuMemFreeHost)
CU_PFN_DECL(cuMemGetAddressRange)
CU_PFN_DECL(cuMemGetInfo)
CU_PFN_DECL(cuMemHostAlloc)
CU_PFN_DECL(cuMemHostGetDevicePointer)
CU_PFN_DECL(cuMemHostRegister)
CU_PFN_DECL(cuMemHostUnregister)
CU_PFN_DECL(cuMemcpyDtoD)
CU_PFN_DECL(cuMemcpyDtoDAsync)
CU_PFN_DECL(cuMemcpyDtoH)
CU_PFN_DECL(cuMemcpyDtoHAsync)
CU_PFN_DECL(cuMemcpyHtoD)
CU_PFN_DECL(cuMemcpyHtoDAsync)
CU_PFN_DECL(cuMemsetD32)
CU_PFN_DECL(cuMemsetD32Async)
CU_PFN_DECL(cuMemsetD8)
CU_PFN_DECL(cuMemsetD8Async)
CU_PFN_DECL(cuModuleGetFunction)
CU_PFN_DECL(cuModuleGetGlobal)
CU_PFN_DECL(cuModuleLoadDataEx)
CU_PFN_DECL(cuModuleLoadFatBinary)
CU_PFN_DECL(cuModuleUnload)
CU_PFN_DECL(cuOccupancyMaxActiveBlocksPerMultiprocessor)
CU_PFN_DECL(cuOccupancyMaxPotentialBlockSize)
CU_PFN_DECL(cuPointerGetAttribute)
CU_PFN_DECL(cuStreamAddCallback)
CU_PFN_DECL(cuStreamCreate)
CU_PFN_DECL(cuStreamDestroy)
CU_PFN_DECL(cuStreamQuery)
CU_PFN_DECL(cuStreamSynchronize)
CU_PFN_DECL(cuStreamWaitEvent)