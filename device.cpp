#include "device.h"

Device convert_device(_Device device) {
    return {
        device,
        torch::DeviceTypeName(device.type(), true).c_str(),
        device.index(),
    };
}

Device new_device(const char* device_string) {
    _Device device = torch::Device(device_string);
    return convert_device(device);
}
