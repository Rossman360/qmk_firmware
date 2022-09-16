# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
<<<<<<< HEAD
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
MIDI_ENABLE = no            # MIDI support
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output on port C6
=======
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
>>>>>>> 799046fd9de389f15651d121d64f5be373e7dffe
ENCODER_ENABLE = yes

LAYOUTS = ortho_4x12
LAYOUTS_HAS_RGB = no

# Disable unsupported hardware
RGBLIGHT_SUPPORTED = yes
AUDIO_SUPPORTED = no
BACKLIGHT_SUPPORTED = no
