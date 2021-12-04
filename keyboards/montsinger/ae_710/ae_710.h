/* Copyright 2021 Ross Montsinger
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

/* This is a shortcut to help you visually see your layout.
 * The first section contains all of the arguments representing the
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT_all( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14, K15, K16, K17, \
    K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K30, K31, K32, K33, \
    K34, KCC, K36, K37, K38, K39, K40, K41, K42, K43, K44, K45, K46, K59, K47, \
    K48, KLS, K49, K50, K51, K52, K53, K54, K55, K56, K57, K58, KRS, K60, \
    K61, K62, K63, K64\
    ) { \
    { K03, K04, K05, K06, K07, K08, K09, K10, KC_NO}, \
    { K11, K56, K57, K58, K46, K15, K31, K14, KC_NO}, \
    { K20, K36, K49, K50, K37, K21, K22, K23, KC_NO}, \
    { K39, K38, K51, K52, K40, K24, K25, K26, KC_NO}, \
    { K41, K53, K54, K42, K27, K45, K12, K13, KC_NO}, \
    { K28, K43, K55, K44, K29, K30, KC_NO, KC_NO, KC_NO}, \
    { K32, K16, K59, K64, K60, K47, K33, K17, KC_NO}, \
    { K01, K18, K34, K48, K02, K19, K63, K62, KC_NO}, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K61, KC_NO}, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KLS}, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KCC} \
    }
