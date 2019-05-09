package gotorch

/*
#include "tensor.h"
*/
import "C"

type Tensor struct {
	p      C._Tensor
	device C.Device
	isCuda bool
}

func NewTensor(data *float64, sizes uint64) (l *Tensor) {
	cData := C.double(*data)
	tensor := C.new_tensor(&cData, C.uint64_t(sizes))
	l = &Tensor{
		p:      tensor.p,
		device: tensor.device,
		isCuda: bool(tensor.is_cuda),
	}
	return
}
