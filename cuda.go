package gotorch

/*
#include "cuda.h"
*/
import "C"

type CUDA struct{}

func (c *CUDA) DeviceCount() uint {
    return uint(C.device_count())
}

func (c *CUDA) IsAvailable() bool {
    return bool(C.is_available())
}

func (c *CUDA) CuDNNIsAvailable() bool {
    return bool(C.cudnn_is_available())
}
