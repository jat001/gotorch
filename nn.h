#include <stdint.h>

#ifdef __cplusplus
#include <torch/extension.h>
extern "C" {
#endif

#include "tensor.h"

#ifdef __cplusplus
    typedef torch::nn::Module torch_Module;
    typedef torch::nn::Linear torch_Linear;
#else
    typedef void* torch_Module;
    typedef void* torch_Linear;
#endif

typedef struct Linear {
    torch_Linear liner;
    torch_Tensor weight;
    torch_Tensor bias;
} Linear;

Linear new_linear(int64_t in_features, int64_t out_features);

#ifdef __cplusplus
}
#endif
