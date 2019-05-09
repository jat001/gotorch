#include "tensor.h"

Tensor convert_tensor(_Tensor tensor) {
    return {
        tensor,
        convert_device(tensor.device()),
        tensor.is_cuda(),
    };
}

Tensor new_tensor(double* data, uint64_t sizes) {
    _Tensor tensor = torch::from_blob(data, sizes);
    return convert_tensor(tensor);
}
