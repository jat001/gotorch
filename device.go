package gotorch

/*
#include <stdlib.h>
#include "device.h"
*/
import "C"
import "unsafe"

type Device struct {
	p           C._Device
	deviceType  string
	deviceIndex int16
}

func NewDevice(deviceString string) (d *Device) {
	cString := C.CString(deviceString)
	defer C.free(unsafe.Pointer(cString))

	device := C.new_device(cString)
	d = &Device{
		p:           device.p,
		deviceType:  C.GoString(device.device_type),
		deviceIndex: int16(device.device_index),
	}
	return
}
