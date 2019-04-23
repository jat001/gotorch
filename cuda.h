#include <stdbool.h>

#ifdef __cplusplus
#include <torch/extension.h>
extern "C" {
#endif

    size_t device_count();
    bool is_available();
    bool cudnn_is_available();

#ifdef __cplusplus
}
#endif
