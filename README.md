trinketHidToggle
=====================================

A [Trinket](https://learn.adafruit.com/introducing-trinket/introduction) firmware that sets the tiny board as a [HID device](https://en.wikipedia.org/wiki/Human_interface_device), so it's possible to send and receive messages via USB.

The sketch implements a very simple protocol: sending data to the board toggles power to pin 1. Every time the pin state changes the Trinket sends back a 0 or 1, depending on the new pin status.

Dependencies
------------
[HID Serial Trinket](https://github.com/adafruit/rayshobby-hid-serial-trinket)

License
-------
GPL v.3
