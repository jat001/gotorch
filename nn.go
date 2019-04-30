package gotorch

/*
#include "nn.h"
*/
import "C"

type Linear struct {
	p      C._Linear
	weight C._Tensor
	bias   C._Tensor
}

func NewLinear(inFeatures int64, outFeatures int64) (l *Linear) {
	linear := C.new_linear(C.int64_t(inFeatures), C.int64_t(outFeatures))
	l = &Linear{
		p:      linear.p,
		weight: linear.weight,
		bias:   linear.bias,
	}
	return
}
