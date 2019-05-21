package gotorch

/*
#include "tensor.h"
*/
import "C"
import (
    "unsafe"
)

type SliceHeader struct {
    Data uintptr
    Len  uint64
    Cap  uint64
}

type Tensor struct {
    p      C._Tensor
    device C.Device
    isCuda bool
}

func NewTensor(data []float64, sizes []uint64) (t *Tensor) {
    tensor := C.new_tensor((*C.double)(&data[0]), (*C.ulong)(&sizes[0]), C.ulong(len(sizes)))
    t = &Tensor{
        p:      tensor.p,
        device: tensor.device,
        isCuda: bool(tensor.is_cuda),
    }
    return
}

func (t *Tensor) Tensor2Array() (data []float64, sizes []uint64) {
    array := C.tensor2array(&t.p)

    sizesLength := uint64(array.sizes_length)
    sizesHeader := &SliceHeader{
        Data: uintptr(unsafe.Pointer(array.sizes)),
        Len:  sizesLength,
        Cap:  sizesLength,
    }
    sizes = *(*[]uint64)(unsafe.Pointer(sizesHeader))

    var dataLength uint64 = 1
    for _, s := range sizes {
        dataLength *= s
    }
    dataHeader := &SliceHeader{
        Data: uintptr(unsafe.Pointer(array.data)),
        Len:  dataLength,
        Cap:  dataLength,
    }
    data = *(*[]float64)(unsafe.Pointer(dataHeader))

    return
}
