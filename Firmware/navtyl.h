/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include "quantum.h"

// clang-format off
#define LAYOUT(                             \
	k00, k03, k02, k01, k04,			k54, k50, k53, k52, k51, \
	k10, k11, k12, k13, k14,			k64, k63, k62, k61, k60, \
	k20, k21, k22, k23, k24,			k74, k73, k72, k71, k70, \
	k30, k31, k32, k33, k34,			k84, k83, k82, k81, k80, \
		      k43, k44, k41,		    k91, k94, k93 \
)\
{\
	{ k00, k01, k02, k03, KC_04}, \
	{ k10, k11, k12, k13, k14}, \
	{ k20, k21, k22, k23, k24}, \
	{ k30, k31, k32, k33, k34}, \
	{ k41, KC_NO, k43, k44, KC_NO}, \
	{ KC_50, KC_51, KC_52, KC_53, KC_54}, \
	{ k60, k61, k62, k63, k64}, \
	{ k70, k71, k72, k73, k74}, \
	{ k80, k81, k82, k83, k84}, \
	{ k91, KC_NO, k93, k94, KC_NO}, \
}
// clang-format on
