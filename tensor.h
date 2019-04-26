#ifdef __cplusplus
#include <torch/extension.h>
extern "C" {
#endif

#ifdef __cplusplus
    typedef torch::Tensor torch_Tensor;
#else
    typedef void* torch_Tensor;
#endif

#ifdef __cplusplus
}
#endif
