// Copyright (c) 2018 The Particl Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PARTICL_USBDEVICE_TREZORDEVICE_H
#define PARTICL_USBDEVICE_TREZORDEVICE_H

#include <usbdevice/usbdevice.h>

namespace usb_device {

class CTrezorDevice : public CUSBDevice
{
public:
    CTrezorDevice(const DeviceType *pType_, const char *cPath_, const char *cSerialNo_, int nInterface_)
        : CUSBDevice(pType_, cPath_, cSerialNo_, nInterface_) {};

    int Open() override;
    int Close() override;

    int GetFirmwareVersion(std::string &sFirmware, std::string &sError) override;

};

} // usb_device

#endif // PARTICL_USBDEVICE_TREZORDEVICE_H
