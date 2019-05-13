package main

import (
	"gotorch.ai/gotorch"
)

func main() {
	tensor := gotorch.NewTensor([]float64{
		3.27, 2.48, 9.45,
		5.12, 4.14, 6.17,
	}, []int64{2, 3})
	tensor.Tensor2Array()
}
