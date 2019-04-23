package gotorch

/*
#cgo pkg-config: python3
#cgo CXXFLAGS: --std=c++11 -D_GLIBCXX_USE_CXX11_ABI=0 -Ilibtorch/include/ -Ilibtorch/include/torch/csrc/api/include/
#cgo LDFLAGS: -Llibtorch/lib/ -lc10 -lcaffe2 -ltorch
 */
import "C"
