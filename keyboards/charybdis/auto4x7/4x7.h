/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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

#include "charybdis.h"

// clang-format off
#define LAYOUT_4x7(                                             \
  k00, k01, k02, k03, k04, k05,                 k55, k54, k53, k52, k51, k50, \
  k10, k11, k12, k13, k14, k15,                 k65, k64, k63, k62, k61, k60, \
  k20, k21, k22, k23, k24, k25,                 k75, k74, k73, k72, k71, k70, \
  k30, k31, k32, k33, k34, k35, k36,       k86, k85, k84, k83, k82, k81, k80, \
  k40, k41, k42, k43,                                               k91, k90,  \
                      k44, k45, k46,            k95, k94                           \
)                                                                 \
{                                                                 \
  {   k00,   k01,   k02,   k03,     k04,   k05,   KC_NO },                   \
  {   k10,   k11,   k12,   k13,     k14,   k15,   KC_NO },                   \
  {   k20,   k21,   k22,   k23,     k24,   k25,   KC_NO },                   \
  {   k30,   k31,   k32,   k33,     k34,   k35,   k36 },                   \
  {   k40,   k41,   k42,   k43,     k44,   k45,   k46 },                   \
  {   k50,   k51,   k52,   k53,     k54,   k55,   KC_NO },                   \
  {   k60,   k61,   k62,   k63,     k64,   k65,   KC_NO },                   \
  {   k70,   k71,   k72,   k73,     k74,   k75,   KC_NO },                   \
  {   k80,   k81,   k82,   k83,     k84,   k85,   k86 },                   \
  {   k90,   k91,  KC_NO,  KC_NO,   k94,   k95,   KC_NO }                 \
}
// * ╭────────────────────────╮                 ╭────────────────────────╮
// *    0   9   10  19  20  29                    60  51   50   42  41   32
// * ├────────────────────────┤                 ├────────────────────────┤
// *    1   8   11  18  21  28                    59  52   49   43  40   33
// * ├────────────────────────┤                 ├────────────────────────┤
// *    2   7  12  17  22  27                     58   53   48   44  39  34
// * ├────────────────────────┤                 ├────────────────────────┤
// *    3   6  13  16  23  26   30           56   57   54   47   45  38  35
// * ╰────────────────────────╯                 ╰────────────────────────╯
// *   4    5  14  15                                                37  36
// *                    24  25  31                55  46
// *                     ╰────────────╯ ╰────────────╯
