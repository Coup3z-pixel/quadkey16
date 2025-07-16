# quadkey16 - A simple, programmable 4x4 macropad/keypad 

![quadkey16](https://i.imgur.com/CA4XBqj.png)

A simple, 16-key keypad/macropad designed by Bond Tran, Sean Mclennan, and Leroy Hunter.

* Keyboard Maintainers: [Sean McLennan](https://github.com/coup3z-pixel), [Bond Tran](https://github.com/BlueOrcaz), Leroy Hunter
* Hardware Supported: Waveshare RP2040-Zero, Cherry MX Switches and Keycaps.
* Additional Documentation: [QMK Firmware Docs](https://docs.qmk.fm/)

## Parts Used
* [Akko Lubed Gateron Yellows](https://www.pccasegear.com/products/61320/gateron-yellow-switches-45-pack-lubricated-akko?srsltid=AfmBOoo7JGfnyN4vSXxlYt9I7lZkLv2MgxLIHMoxuTSh70V5ODySLDei)
* ABS Doubleshot Keycaps (From Glorious GMMK Compact)
* [Custom 3D Printed Case and Housing](https://drive.google.com/drive/folders/1f1TSEj0fxLeqnaay50ArL8llVYELazPb?usp=sharing)
* [Waveshare RP2040-Zero](https://www.amazon.com.au/dp/B09KZPCNPL?ref=ppx_yo2ov_dt_b_fed_asin_title)
* Blue Solid Core Wire
* [Tinned Copper Wire - 22AWG](https://www.jaycar.com.au/tinned-copper-wire-25-gram-pack/p/WW4032)
* [1N4148 Diodes](https://www.jaycar.com.au/1n914-1n4148-economical-diode-pack-pack-of-100/p/ZR1105?srsltid=AfmBOoowLDS8nKaRKPLjCG0x-9IIjasgqhMZvPRyiNdHI6v0benIcRJp)

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
