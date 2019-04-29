#include <stdint.h>

#ifdef __cplusplus
#include <torch/extension.h>
extern "C" {
#endif

#ifdef __cplusplus
    typedef torch::Device _Device;
    typedef torch::DeviceType _DeviceType;
    typedef torch::DeviceIndex _DeviceIndex;
#else
    typedef void* _Device;
    typedef void* _DeviceType;
    typedef void* _DeviceIndex;
#endif

_Device new_device(const char* device_string);
_DeviceType device_type(_Device device);
int16_t device_index(_Device device);

#ifdef __cplusplus
}
#endif
