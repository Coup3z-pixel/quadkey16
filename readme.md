# quadkey16 - A simple, programmable 4x4 macropad/keypad 

![quadkey](https://imgur.com/CA4XBqj)

A simple, 16-key keypad/macropad designed by Bond Tran, Sean Mclennan, and Leroy Hunter.

* Keyboard Maintainers: [Sean McLennan](https://github.com/coup3z-pixel), [Bond Tran](https://github.com/BlueOrcaz)
* Hardware Supported: Waveshare RP2040-Zero, Cherry MX Switches and Keycaps.
* Hardware Availability: [RP2040-Zero](https://www.amazon.com.au/dp/B09KZPCNPL?ref=ppx_yo2ov_dt_b_fed_asin_title), [3D Printer Parts](https://drive.google.com/drive/folders/1f1TSEj0fxLeqnaay50ArL8llVYELazPb?usp=sharing)
* Additional Documentation: [QMK Firmware Docs](https://docs.qmk.fm/)
Make example for this keyboard (after setting up your build environment):

    make quadkey16:default

Flashing example for this keyboard:

    make quadkey16:default:flash
    qmk flash -kb quadkey16 -km <keymap> 


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

How to enter the bootloader:
* **Physical boot button**: Hold the "Boot" Button on the RP2040-Zero and then plug it in.
* **Physical button**: In The macropad-v1 keymap, there is a key mapped to `QK_BOOT` at the bottom right.
