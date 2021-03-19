/* Copyright 2021 Ross Montsinger <ross@montsinger.net>
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

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_all( \
    KA1, KJ1, KA2, KJ2, KA3, KJ3, KA4, KJ4, KA5, KJ5, KA6, KJ6, KA7, KJ7, \
    KB1, KI1, KB2, KI2, KB3, KI3, KB4, KI4, KB5, KI5, KB6, KI6, KB7, KI7, \
    KC1, KH1, KC2, KH2, KC3, KH3, KC4, KH4, KC5, KH5, KC6, KH6, KC7, \
    KD1, KG1, KD2, KG2, KD3, KG3, KD4, KG4, KD5, KG5, KD6, KG6, KD7, KG7, KH7, \
    KE1, KF1, KE2, KF2, KE3, KF3, KE4, KF4, KE5, KF5, KE6, KF6, KE7, KF7 \
) \
{ \
    { KA1, KA2, KA3, KA4, KA5, KA6, KA7 }, \
    { KB1, KB2, KB3, KB4, KB5, KB6, KB7 }, \
    { KC1, KC2, KC3, KC4, KC5, KC6, KC7 }, \
    { KD1, KD2, KD3, KD4, KD5, KD6, KD7 }, \
    { KE1, KE2, KE3, KE4, KE5, KE6, KE7 }, \
    { KF1, KF2, KF3, KF4, KF5, KF6, KF7 }, \
    { KG1, KG2, KG3, KG4, KG5, KG6, KG7 }, \
    { KH1, KH2, KH3, KH4, KH5, KH6, KH7 }, \
    { KI1, KI2, KI3, KI4, KI5, KI6, KI7 }, \
    { KJ1, KJ2, KJ3, KJ4, KJ5, KJ6, KJ7 } \
}
