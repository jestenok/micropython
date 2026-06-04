include("$(PORT_DIR)/boards/manifest.py")

require("bundle-networking")

# Bluetooth
require("aioble")

# USB HID combo (frozen so that on-device .mpy can't bring back default interface strings).
require("usb-device-mouse")
require("usb-device-keyboard")
