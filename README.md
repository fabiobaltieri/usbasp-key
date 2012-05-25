USBASP KEY
==========

http://fabiobaltieri.com/2011/09/02/usb-key-avr-programmer/

This project is an AVR ISP programmer with USB interface in a compact usb
key PCB. The project is based on the original USBasp version of Thomas Fischl,
which can be found on:

http://www.fischl.de/usbasp/

License
-------

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

Contents
--------

    COPYING     text version of the GPL
    README      this file
    binaries/   pre-built firmware images in hex format
    firmware/   source directory for firmware files
    hardware/   source directory for the hardware design files

Firmware
--------

Building requires an avr-gcc toolchain, in the firmware/ directory, to build
run:

    make main.hex

Flashing the firmware on the device requires avrdude and a compatible hardware
programmer. Default configuration is stored at the beginning of the Makefile.
To program with the default configuration, run:

    make flash

Fuses can be configured running:

    make fuses

Hardware
--------

All hardware files (schematic, layout and libraries) are in CadSoft Eagle
format.
