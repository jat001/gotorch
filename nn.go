package gotorch

/*
#include "nn.h"
*/
import "C"

type Linear struct {
	p      C.Linear
	weight C.torch_Tensor
	bias   C.torch_Tensor
}

func NewLinear(inFeatures int64, outFeatures int64) Linear {
	liner := C.new_linear(C.int64_t(inFeatures), C.int64_t(outFeatures))
	return Linear{
		p:      liner,
		weight: liner.weight,
		bias:   liner.bias,
	}
}
