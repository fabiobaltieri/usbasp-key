/*
 * Copyright 2011 Fabio Baltieri (fabio.baltieri@gmail.com)
 *
 * Based on the original USBasp code written by
 *   Thomas Fischl <tfischl@gmx.de>, Copyright 2005
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 */

#ifndef __isp_h_included__
#define	__isp_h_included__

#ifndef uchar
#define	uchar	unsigned char
#endif

#define	ISP_OUT   PORTB
#define ISP_IN    PINB
#define ISP_DDR   DDRB
#define ISP_RST   PB2
#define ISP_MOSI  PB3
#define ISP_MISO  PB4
#define ISP_SCK   PB5

/* Prepare connection to target device */
void ispConnect();

/* Close connection to target device */
void ispDisconnect();

/* read an write a byte from isp using software (slow) */
uchar ispTransmit_sw(uchar send_byte);

/* read an write a byte from isp using hardware (fast) */
uchar ispTransmit_hw(uchar send_byte);

/* enter programming mode */
uchar ispEnterProgrammingMode();

/* read byte from eeprom at given address */
uchar ispReadEEPROM(unsigned int address);

/* write byte to flash at given address */
uchar ispWriteFlash(unsigned long address, uchar data, uchar pollmode);

uchar ispFlushPage(unsigned long address, uchar pollvalue);

/* read byte from flash at given address */
uchar ispReadFlash(unsigned long address);

/* write byte to eeprom at given address */
uchar ispWriteEEPROM(unsigned int address, uchar data);

/* pointer to sw or hw transmit function */
uchar (*ispTransmit)(uchar);

/* set SCK speed. call before ispConnect! */
void ispSetSCKOption(uchar sckoption);

#endif /* __isp_h_included__ */
