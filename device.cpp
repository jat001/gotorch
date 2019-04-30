#include "device.h"

Device new_device(const char* device_string) {
    _Device device = torch::Device(device_string);
    return {
        device,
        torch::DeviceTypeName(device.type(), true).c_str(),
        device.index(),
    };
}
