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

#include <inttypes.h>
#include <avr/io.h>
#include "clock.h"

/* wait time * 320 us */
void clockWait(uint8_t time) {

	uint8_t i;
	for (i = 0; i < time; i++) {
		uint8_t starttime = TIMERVALUE;
		while ((uint8_t) (TIMERVALUE - starttime) < CLOCK_T_320us) {
		}
	}
}
