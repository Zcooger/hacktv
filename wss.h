/* hacktv - Analogue video transmitter for the HackRF                    */
/*=======================================================================*/
/* Copyright 2018 Philip Heron <phil@sanslogic.co.uk>                    */
/*                                                                       */
/* This program is free software: you can redistribute it and/or modify  */
/* it under the terms of the GNU General Public License as published by  */
/* the Free Software Foundation, either version 3 of the License, or     */
/* (at your option) any later version.                                   */
/*                                                                       */
/* This program is distributed in the hope that it will be useful,       */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of        */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         */
/* GNU General Public License for more details.                          */
/*                                                                       */
/* You should have received a copy of the GNU General Public License     */
/* along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef _WSS_H
#define _WSS_H

#include <stdint.h>
#include "video.h"

typedef struct {
	vid_t *vid;
	uint8_t code;
	int16_t *lut;
	uint8_t vbi[18];
} wss_t;

extern int wss_init(wss_t *s, vid_t *vid, char *mode);
extern void wss_free(wss_t *s);
extern void wss_render_line(wss_t *s);

#endif

