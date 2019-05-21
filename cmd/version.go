package main

import (
    "fmt"
    "gotorch.ai/gotorch"
)

func main() {
    fmt.Println("GoTorch Version:", gotorch.Version)
    fmt.Println("LibTorch Version:", gotorch.LibTorchVersion)
}
