// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "Raspberry Pi Pico 2 W"

// USB identification (spoofed as a generic SINO WEALTH gaming combo).
#define MICROPY_HW_USB_VID                      (0x258A) // SINO WEALTH
#define MICROPY_HW_USB_PID                      (0x1006) // Wired gaming KB/Mouse combo
#define MICROPY_HW_USB_MANUFACTURER_STRING      "SINO WEALTH"
#define MICROPY_HW_USB_PRODUCT_FS_STRING        "USB Gaming KB Mouse"

// Disable USB CDC (no virtual COM port exposed to the host).
#define MICROPY_HW_USB_CDC                      (0)

// Enable networking.
#define MICROPY_PY_NETWORK 1
#define MICROPY_PY_NETWORK_HOSTNAME_DEFAULT     "Pico2W"

// CYW43 driver configuration.
#define CYW43_USE_SPI (1)
#define CYW43_LWIP (1)
#define CYW43_GPIO (1)
#define CYW43_SPI_PIO (1)

// For debugging mbedtls - also set
// Debug level (0-4) 1=warning, 2=info, 3=debug, 4=verbose
// #define MODUSSL_MBEDTLS_DEBUG_LEVEL 1

#define MICROPY_HW_PIN_EXT_COUNT    CYW43_WL_GPIO_COUNT

int mp_hal_is_pin_reserved(int n);
#define MICROPY_HW_PIN_RESERVED(i) mp_hal_is_pin_reserved(i)
