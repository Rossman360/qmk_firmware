# AE-710

![AE-710](https://i.imgur.com/K9RUezh.jpg)

This is a port of the Nakajima AE-710 (I think) to QMK using an Elite-C.
LEDs do not work.
Left and right shift must have the same functionality because they use the same matrix position.

The way I connected the pins is as follows:
    Y6 -> D3 #
    Y5 -> D2 #
Y4 -> D1
Y3 -> D0
Y2 -> D4
Y1 -> C6
Y0 -> D7
Y7 -> E6
Y8 -> B4
B -> B5
A -> B7 (This is for both shift keys)
L -> D5 (This is for caps lock)

+5V -> C7
A7 -> F4
A6 -> F5
A5 -> F6
A4 -> F7
A3 -> B1
A2 -> B3
A1 -> B2
A0 -> B6

* Keyboard Maintainer: [Rossman360](https://github.com/rossman360)
* Hardware Supported: Rebound rev1 rev2 or rev3; Pro Micro or Elite-C
* Hardware Availability: [Montsinger.net](https://montsinger.net)

Make example for this keyboard (after setting up your build environment):

    make montsinger/ae_710:default # 

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs)
