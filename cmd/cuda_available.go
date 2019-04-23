package main

import (
	"fmt"
	"gotorch.ai/gotorch"
)

func main() {
	cuda := gotorch.CUDA{}
	fmt.Println("Is CUDA available:", cuda.IsAvailable())
	fmt.Println("Is cuDNN available:", cuda.CuDNNIsAvailable())
	fmt.Println("Available CUDA devices:", cuda.DeviceCount())
}
