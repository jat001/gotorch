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

func NewTensor(data []float64, sizes []int64) (t *Tensor) {
	tensor := C.new_tensor((*C.double)(&data[0]), (*C.long)(&sizes[0]), C.int(len(sizes)))
	t = &Tensor{
		p:      tensor.p,
		device: tensor.device,
		isCuda: bool(tensor.is_cuda),
	}
	return
}

func (t *Tensor) Tensor2Array() {
	C.tensor2array(&t.p)
}
