package main

import (
	"fmt"
	"gotorch.ai/gotorch"
)

func main() {
	tensor := gotorch.NewTensor([]float64{
		3.27, 2.48, 9.45,
		5.12, 4.14, 6.17,
	}, []uint64{2, 3})
	data, sizes := tensor.Tensor2Array()
	fmt.Println(data, sizes)
}
