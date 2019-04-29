#ifdef __cplusplus
#include <torch/extension.h>
extern "C" {
#endif

#ifdef __cplusplus
    typedef torch::Tensor _Tensor;
#else
    typedef void* _Tensor;
#endif

#ifdef __cplusplus
}
#endif
