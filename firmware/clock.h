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

#ifndef __clock_h_included__
#define	__clock_h_included__

#define TIMERVALUE      TCNT0
#define CLOCK_T_320us	60

#ifdef __AVR_ATmega8__
#define TCCR0B  TCCR0
#endif

/* set prescaler to 64 */
#define clockInit()  TCCR0B = (1 << CS01) | (1 << CS00);

/* wait time * 320 us */
void clockWait(uint8_t time);

#endif /* __clock_h_included__ */
