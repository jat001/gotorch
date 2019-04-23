#ifdef __cplusplus
#include <torch/extension.h>
extern "C" {
#endif

#ifdef __cplusplus
    typedef torch::Tensor Tensor;
#else
    typedef void* Tensor;
#endif

#ifdef __cplusplus
}
#endif
