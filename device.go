package gotorch

/*
#include <stdlib.h>
#include "device.h"
*/
import "C"
import "unsafe"

type Device struct {
	p C._Device
}

func NewDevice(deviceString string) (d *Device) {
	cString := C.CString(deviceString)
	defer C.free(unsafe.Pointer(cString))
	d = &Device{p: C.new_device(cString)}
	return
}

func (d *Device) deviceType() C._DeviceType {
	return C.device_type(d.p)
}

func (d *Device) deviceIndex() int16 {
	return int16(C.device_index(d.p))
}
