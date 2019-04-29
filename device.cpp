#include "device.h"

_Device new_device(const char* device_string) {
    return torch::Device(device_string);
}

_DeviceType device_type(_Device device) {
    return device.type();
}

int16_t device_index(_Device device) {
    return device.index();
}
