#include "tensor.h"

Tensor convert_tensor(_Tensor tensor) {
    return {
        tensor,
        convert_device(tensor.device()),
        tensor.is_cuda(),
    };
}

Tensor new_tensor(double data[], long sizes[], int lsizes) {
    std::vector<long> vsizes(sizes, sizes + lsizes);
    _Tensor tensor = torch::from_blob(data, vsizes, torch::kFloat64);
    return convert_tensor(tensor);
}

// TODO
void tensor2array(_Tensor *tensor) {
    std::cout << *tensor << std::endl;
}
