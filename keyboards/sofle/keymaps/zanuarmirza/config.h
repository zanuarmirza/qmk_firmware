/* Copyright 2021 Flare576 <flare576@gmail.com>
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
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE

#define MOUSEKEY_INTERVAL 18
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 25
#define MOUSEKEY_MAX_SPEED 3
#define MOUSEKEY_WHEEL_DELAY 0
#define TAPPING_TERM_PER_KEY

#ifdef ENCODER_RESOLUTION
    #undef ENCODER_RESOLUTION
#endif
#define ENCODER_RESOLUTION 4

#ifdef TAPPING_TERM
    #undef TAPPING_TERM
#endif
#define TAPPING_TERM 200

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#undef MANUFACTURER
#define MANUFACTURER "zanuarmirza"
