# GoTorch
Pytorch in Go, using LibTorch.

## Build
Donwload [LibTorch](https://pytorch.org/get-started/locally/) and extract it to the
 project directory.

## Test
```shell
LD_LIBRARY_PATH=libtorch/lib/ go run cmd/cuda_available.go
```
