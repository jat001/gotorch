#include <stdbool.h>

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

typedef struct Array {
    double *data;
    unsigned long *sizes;
    unsigned long sizes_length;
} Array;

Tensor convert_tensor(_Tensor tensor);
Tensor new_tensor(double data[], unsigned long sizes[], unsigned long sizes_length);
Array tensor2array(_Tensor *tensor);

#ifdef __cplusplus
}
#endif
