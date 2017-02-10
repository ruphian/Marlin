#pragma once
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Arduino Mega 128 special sauce
 *
 * Applies to the following boards:
 *
 * Atmega128 SpecialSauce (Spindle, Controller Fan)
 *
 *  Other pins_MYBOARD.h files may override these defaults
 */

#if !defined(__AVR_ATmega128__) && !defined(__AVR_ATmega64__) && !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Atmega128' or 'Atmega64' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "ATmega128 Special Sauce"
#endif

//
// Limit Switches
//
#define X_MIN_PIN           3
#ifndef X_MAX_PIN
  #define X_MAX_PIN         2
#endif
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  32
#endif

#define SLED_PIN           -1

//
// Steppers
//
#define X_STEP_PIN         52
#define X_DIR_PIN          52
#define X_ENABLE_PIN       38
#define X_CS_PIN           53

#define Y_STEP_PIN         52
#define Y_DIR_PIN          52
#define Y_ENABLE_PIN       38
#define Y_CS_PIN           49

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       52
#define Z_CS_PIN           40

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24
#define E0_CS_PIN          42

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30
#define E1_CS_PIN          44

//
// Temperature Sensors
//
#define TEMP_0_PIN         13   // Analog Input
#define TEMP_1_PIN         15   // Analog Input
#define TEMP_BED_PIN       14   // Analog Input
//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  32
#endif

#define SLED_PIN           -1

//
// Steppers
//
#define X_STEP_PIN         52
#define X_DIR_PIN          52
#define X_ENABLE_PIN       38
#define X_CS_PIN           52

#define Y_STEP_PIN         20
#define Y_DIR_PIN          20
#define Y_ENABLE_PIN       52
#define Y_CS_PIN           49

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       52
#define Z_CS_PIN           40

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24
#define E0_CS_PIN          42

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30
#define E1_CS_PIN          44

//
// Temperature Sensors
//
#define TEMP_0_PIN         13   // Analog Input
#define TEMP_1_PIN         15   // Analog Input
#define TEMP_BED_PIN       14   // Analog Input
//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  32
#endif

#define SLED_PIN           -1

//
// Steppers
//
#define X_STEP_PIN         52
#define X_DIR_PIN          52
#define X_ENABLE_PIN       38
#define X_CS_PIN           53

#define Y_STEP_PIN         52
#define Y_DIR_PIN          52
#define Y_ENABLE_PIN       52
#define Y_CS_PIN           49

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       22
#define Z_CS_PIN           40

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24
#define E0_CS_PIN          42

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30
#define E1_CS_PIN          44

//
// Temperature Sensors
//
#define TEMP_0_PIN         13   // Analog Input
#define TEMP_1_PIN         15   // Analog Input
#define TEMP_BED_PIN       14   // Analog Input

#define HEATER_0_PIN     50
