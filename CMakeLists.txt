cmake_minimum_required(VERSION 3.8 FATAL_ERROR)
project(gotorch)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_PREFIX_PATH libtorch/)
set(TORCH_CUDA_ARCH_LIST Common)

find_package(Torch REQUIRED)
