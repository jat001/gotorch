#include <stdint.h>

#ifdef __cplusplus
#include <torch/extension.h>
extern "C" {
#endif

#include "tensor.h"

#ifdef __cplusplus
typedef torch::nn::Module _Module;
typedef torch::nn::Linear _Linear;
#else
typedef void* _Module;
typedef void* _Linear;
#endif

typedef struct Linear {
    _Linear p;
    Tensor weight;
    Tensor bias;
} Linear;

Linear new_linear(int64_t in_features, int64_t out_features);

#ifdef __cplusplus
}
#endif
