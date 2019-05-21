#include "tensor.h"

Tensor convert_tensor(_Tensor tensor) {
    return {
        tensor,
        convert_device(tensor.device()),
        tensor.is_cuda(),
    };
}

Tensor new_tensor(double data[], unsigned long sizes[], unsigned long sizes_length) {
    std::vector<long> vsizes(sizes, sizes + sizes_length);
    _Tensor tensor = torch::from_blob(data, vsizes, torch::kFloat64);
    return convert_tensor(tensor);
}

Array tensor2array(_Tensor* tensor) {
    double* data = tensor->view(-1).data<double>();
    std::vector<long> vsizes(tensor->sizes().vec());

    unsigned long* sizes = new unsigned long[vsizes.size()];
    std::copy(vsizes.data(), vsizes.data() + vsizes.size(), sizes);

    return {data, sizes, vsizes.size()};
}
