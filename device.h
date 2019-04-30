#include <stdint.h>

#ifdef __cplusplus
#include <torch/extension.h>
extern "C" {
#endif

#ifdef __cplusplus
    typedef torch::Device _Device;
#else
    typedef void* _Device;
#endif

typedef struct Device {
    _Device p;
    const char* device_type;
    int16_t device_index;
} Device;

Device new_device(const char* device_string);

#ifdef __cplusplus
}
#endif
