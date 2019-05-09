#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
#include <torch/extension.h>
extern "C" {
#endif

#include "device.h"
#include "tensor_options.h"

#ifdef __cplusplus
    typedef torch::Tensor _Tensor;
#else
    typedef void* _Tensor;
#endif

typedef struct Tensor {
    _Tensor p;
    Device device;
    bool is_cuda;
} Tensor;

Tensor convert_tensor(_Tensor tensor);
Tensor new_tensor(double* data, uint64_t sizes);

#ifdef __cplusplus
}
#endif
