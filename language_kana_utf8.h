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
 * Japanese (Kana)
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#ifndef LANGUAGE_KANA_UTF_H
#define LANGUAGE_KANA_UTF_H

#define MAPPER_E382E383
#define DISPLAY_CHARSET_ISO10646_KANA

// This just to show the potential benefit of unicode.
// This translation can be improved by using the full charset of unicode codeblock U+30A0 to U+30FF.

// 鐗囦划鍚嶈〃绀哄畾缇�
#define WELCOME_MSG                         MACHINE_NAME _UxGT(" ready.")
#define MSG_SD_INSERTED                     _UxGT("銈兗銉夈偓銈姐偊銉嬨儱銈︺偟銉優銈枫偪")        // "Card inserted"
#define MSG_SD_REMOVED                      _UxGT("銈兗銉夈偓銈€儶銉炪偦銉�")               // "Card removed"
#define MSG_LCD_ENDSTOPS                    _UxGT("銈ㄣ兂銉夈偣銉堛儍銉�")                  // "Endstops" // Max length 8 characters
#define MSG_MAIN                            _UxGT("銉°偆銉�")                       // "Main"
#define MSG_AUTOSTART                       _UxGT("銈搞儔銈︺偒銈ゃ偡")                   // "Autostart"
#define MSG_DISABLE_STEPPERS                _UxGT("銉€兗銈裤兗銉囥兂銈层兂 銈儠")            // "Disable steppers"
#define MSG_DEBUG_MENU                      _UxGT("銉囥儛銉冦偘銉°儖銉ャ兗")                // "Debug Menu"
#define MSG_PROGRESS_BAR_TEST               _UxGT("銉椼儹銈般儸銈广儛銉� 銉嗐偣銉�")            // "Progress Bar Test"
#define MSG_AUTO_HOME                       _UxGT("銈层兂銉嗐兂銉曘儍銈�")                  // "Auto home"
#define MSG_AUTO_HOME_X                     _UxGT("X銈搞偗 銈层兂銉嗐兂銉曘儍銈�")             // "Home X"
#define MSG_AUTO_HOME_Y                     _UxGT("Y銈搞偗 銈层兂銉嗐兂銉曘儍銈�")             // "Home Y"
#define MSG_AUTO_HOME_Z                     _UxGT("Z銈搞偗 銈层兂銉嗐兂銉曘儍銈�")             // "Home Z"
#define MSG_LEVEL_BED_HOMING                _UxGT("銈层兂銉嗐兂銉曘儍銈儊銉ャ偊")              // "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               _UxGT("銉儥銉兂銈般偒銈ゃ偡")                // "Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("銉勩偖銉庛偨銈儐銈ゃ儐銉炽儤")             // "Next Point"
#define MSG_LEVEL_BED_DONE                  _UxGT("銉儥銉兂銈般偒銉炽儶銉с偊")              // "Leveling Done!"
#define MSG_SET_HOME_OFFSETS                _UxGT("銈偢銉ャ兂銈儠銈汇儍銉堛偦銉冦儐銈�")         // "Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("銈儠銈汇儍銉堛偓銉嗐偔銉ㄣ偊銈点儸銉炪偡銈�")       // "Offsets applied"
#define MSG_SET_ORIGIN                      _UxGT("銈偢銉ャ兂銈汇儍銉�")                 // "Set origin"
#define MSG_PREHEAT_1                       _UxGT("PLA 銉ㄣ儘銉�")                   // "Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   _UxGT("PLA 銈广儥銉嗐儴銉嶃儎")              // " All"
#define MSG_PREHEAT_1_BEDONLY               _UxGT("PLA 銉欍儍銉夈儴銉嶃儎")              // " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT("銈汇儍銉嗐偆")       // " conf"
#define MSG_PREHEAT_2                       _UxGT("ABS 銉ㄣ儘銉�")                  // "Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   _UxGT("ABS 銈广儥銉嗐儴銉嶃儎")              // " All"
#define MSG_PREHEAT_2_BEDONLY               _UxGT("ABS 銉欍儍銉夈儴銉嶃儎")              // " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT("銈汇儍銉嗐偆")       // " conf"
#define MSG_COOLDOWN                        _UxGT("銈儘銉勩儐銈ゃ偡")                  // "Cooldown"
#define MSG_SWITCH_PS_ON                    _UxGT("銉囥兂銈层兂 銈兂")                 // "Switch power on"
#define MSG_SWITCH_PS_OFF                   _UxGT("銉囥兂銈层兂 銈儠")                 // "Switch power off"
#define MSG_EXTRUDE                         _UxGT("銈偡銉�銈�")                     // "Extrude"
#define MSG_RETRACT                         _UxGT("銉掋偔銈炽儫銈汇儍銉嗐偆")                // "Retract"
#define MSG_MOVE_AXIS                       _UxGT("銈搞偗銈ゃ儔銈�")                    // "Move axis"
#define MSG_BED_LEVELING                    _UxGT("銉欍儍銉夈儸銉欍儶銉炽偘")                // "Bed leveling"
#define MSG_LEVEL_BED                       _UxGT("銉欍儍銉夈儸銉欍儶銉炽偘")                // "Level bed"
#define MSG_MOVING                          _UxGT("銈ゃ儔銈︺儊銉ャ偊")                   // "Moving..."
#define MSG_FREE_XY                         _UxGT("XY銈搞偗 銈偆銉涖偊")                // "Free XY"
#define MSG_MOVE_X                          _UxGT("X銈搞偗 銈ゃ儔銈�")                  // "Move X"
#define MSG_MOVE_Y                          _UxGT("Y銈搞偗 銈ゃ儔銈�")                  // "Move Y"
#define MSG_MOVE_Z                          _UxGT("Z銈搞偗 銈ゃ儔銈�")                  // "Move Z"
#define MSG_MOVE_E                          _UxGT("銈ㄣ偗銈广儓銉兗銉�銉�")                // "Extruder"
#define MSG_MOVE_01MM                       _UxGT("0.1mm 銈ゃ儔銈�")                 // "Move 0.1mm"
#define MSG_MOVE_1MM                        _UxGT("  1mm 銈ゃ儔銈�")                 // "Move 1mm"
#define MSG_MOVE_10MM                       _UxGT(" 10mm 銈ゃ儔銈�")                 // "Move 10mm"
#define MSG_SPEED                           _UxGT("銈姐偗銉�")                       // "Speed"
#define MSG_BED_Z                           _UxGT("Z銈儠銈汇儍銉�")                   // "Bed Z"
#define MSG_NOZZLE                          _UxGT("銉庛偤銉�")                       // "Nozzle"
#define MSG_BED                             _UxGT("銉欍儍銉�")                       // "Bed"
#define MSG_FAN_SPEED                       _UxGT("銉曘偂銉炽偨銈儔")                    // "Fan speed"
#define MSG_FLOW                            _UxGT("銉堛偡銉ャ儎銉儳銈�")                   // "Flow"
#define MSG_CONTROL                         _UxGT("銈汇偆銈儳")                      // "Control"
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 銈点偆銉嗐偆") // " Min"
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 銈点偆銈炽偊") // " Max"
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 銉曘偂銈偪銉�") // " Fact"
#define MSG_AUTOTEMP                        _UxGT("銈搞儔銈︺偑銉炽儔銈汇偆銈儳")               // "Autotemp"
#define MSG_ON                              _UxGT("銈兂 ")                         // "On "
#define MSG_OFF                             _UxGT("銈儠 ")                         // "Off"
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("銈汇兂銈裤偗")                     // "Select"
#define MSG_ACC                             _UxGT("銈偨銈儔 mm/s2")               // "Accel"
#define MSG_JERK                            _UxGT("銉ゃ偗銉� mm/s")                  // "Jerk"
#define MSG_VX_JERK                         _UxGT("X銈搞偗 銉ゃ偗銉� mm/s")             // "Vx-jerk"
#define MSG_VY_JERK                         _UxGT("Y銈搞偗 銉ゃ偗銉� mm/s")             // "Vy-jerk"
#define MSG_VZ_JERK                         _UxGT("Z銈搞偗 銉ゃ偗銉� mm/s")             // "Vz-jerk"
#define MSG_VE_JERK                         _UxGT("銈ㄣ偗銈广儓銉兗銉�銉� 銉ゃ偗銉�")          // "Ve-jerk"
#define MSG_VMAX                            _UxGT("銈点偆銉�銈ゃ偑銈儶銈姐偗銉� ")            // "Vmax "
#define MSG_VMIN                            _UxGT("銈点偆銈枫儳銈︺偑銈儶銈姐偗銉�")           // "Vmin"
#define MSG_VTRAV_MIN                       _UxGT("銈点偆銈枫儳銈︺偆銉夈偊銈姐偗銉�")           // "VTrav min"
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            _UxGT("銈点偆銉�銈ゃ偒銈姐偗銉� ")              // "Amax "
#define MSG_A_RETRACT                       _UxGT("銉掋偔銈炽儫銈偨銈儔")               // "A-retract"
#define MSG_A_TRAVEL                        _UxGT("銈ゃ儔銈︺偒銈姐偗銉�")                // "A-travel"
#define MSG_TEMPERATURE                     _UxGT("銈兂銉�")                      // "Temperature"
#define MSG_MOTION                          _UxGT("銈︺偞銈偦銉冦儐銈�")                // "Motion"
#define MSG_FILAMENT                        _UxGT("銉曘偅銉┿儭銉炽儓")                   // "Filament"
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("銉曘偅銉┿儭銉炽儓銉併儳銉冦偙銈�")            // "Fil. Dia."
#define MSG_CONTRAST                        _UxGT("LCD銈炽兂銉堛儵銈广儓")               // "LCD contrast"
#define MSG_STORE_EEPROM                    _UxGT("銉°儮銉儤銈偗銉庛偊")               // "Store memory"
#define MSG_LOAD_EEPROM                     _UxGT("銉°儮銉偒銉┿儴銉熴偝銉�")               // "Load memory"
#define MSG_RESTORE_FAILSAFE                _UxGT("銈汇儍銉嗐偆銉偦銉冦儓")               // "Restore failsafe"
#define MSG_REFRESH                         _UxGT("銉儠銉儍銈枫儱")                  // "Refresh"
#define MSG_WATCH                           _UxGT("銈搞儳銈︺儧銈︺偓銉°兂")               // "Info screen"
#define MSG_PREPARE                         _UxGT("銈搞儱銉炽儞銈汇儍銉嗐偆")               // "Prepare"
#define MSG_TUNE                            _UxGT("銉併儳銈︺偦銈�")                    // "Tune"
#define MSG_PAUSE_PRINT                     _UxGT("銈ゃ儊銈搞儐銈ゃ偡")                  // "Pause print"
#define MSG_RESUME_PRINT                    _UxGT("銉椼儶銉炽儓銈点偆銈偆")                // "Resume print"
#define MSG_STOP_PRINT                      _UxGT("銉椼儶銉炽儓銉嗐偆銈�")                 // "Stop print"
#define MSG_CARD_MENU                       _UxGT("SD銈兗銉夈偒銉┿儣銉兂銉�")            // "Print from SD"
#define MSG_NO_CARD                         _UxGT("SD銈兗銉夈偓銈€儶銉炪偦銉�")            // "No SD card"
#define MSG_DWELL                           _UxGT("銈儱銈︺偡")                     // "Sleep..."
#define MSG_USERWAIT                        _UxGT("銈枫儛銉┿偗銈優銉併偗銉�銈点偆")           // "Wait for user..."
#define MSG_RESUMING                        _UxGT("銉椼儶銉炽儓銈点偆銈偆")                // "Resuming print"
#define MSG_PRINT_ABORTED                   _UxGT("銉椼儶銉炽儓銈儊銉ャ偊銈枫偟銉優銈枫偪")       // "Print aborted"
#define MSG_NO_MOVE                         _UxGT("銈︺偞銈優銈汇兂")                  // "No move."
#define MSG_KILLED                          _UxGT("銉掋偢銉с偊銉嗐偆銈�")                  // "KILLED. "
#define MSG_STOPPED                         _UxGT("銉嗐偆銈枫偡銉炪偡銈�")                  // "STOPPED. "
#define MSG_CONTROL_RETRACT                 _UxGT("銉掋偔銈炽儫銉儳銈� mm")                // "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("銉掋偔銈炽儫銉儳銈 mm")               // "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                _UxGT("銉掋偔銈炽儫銈姐偗銉� mm/s")             // "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("銉庛偤銉偪銈ゃ儝 mm")                // "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("銉涖偡銉с偊銉儳銈� mm")               // "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("銉涖偡銉с偊銉儳銈 mm")              // "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("銉涖偡銉с偊銈姐偗銉� mm/s")            // "UnRet  V"
#define MSG_AUTORETRACT                     _UxGT("銈搞儔銈︺儝銈偝銉�")                 // "AutoRetr."
#define MSG_FILAMENTCHANGE                  _UxGT("銉曘偅銉┿儭銉炽儓銈炽偊銈兂")              // "Change filament"
#define MSG_INIT_SDCARD                     _UxGT("SD銈兗銉夈偟銈ゃ儴銉熴偝銉�")             // "Init. SD card"
#define MSG_CNG_SDCARD                      _UxGT("SD銈兗銉夈偝銈︺偒銉�")               // "Change SD card"
#define MSG_ZPROBE_OUT                      _UxGT("Z銉椼儹銉笺儢 銉欍儍銉夈偓銈�")            // "Z probe out. bed"
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch 銈搞偝銈枫兂銉�銉�")          // "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   _UxGT("BLTouch 銉偦銉冦儓")             // "Reset BLTouch"
#define MSG_HOME                            _UxGT("銈点偔銉�")                      // "Home" // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("銉层儠銉冦偔銈点偦銉嗐偗銉�銈点偆")           // "first"
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z銈儠銈汇儍銉�")                   // "Z Offset"
#define MSG_BABYSTEP_X                      _UxGT("X銈搞偗 銉撱儔銈�")                  // "Babystep X"
#define MSG_BABYSTEP_Y                      _UxGT("Y銈搞偗 銉撱儔銈�")                  // "Babystep Y"
#define MSG_BABYSTEP_Z                      _UxGT("Z銈搞偗 銉撱儔銈�")                  // "Babystep Z"
#define MSG_ENDSTOP_ABORT                   _UxGT("銈ゃ儔銈︺偛銉炽偒銈ゃ偙銉炽儊銈儙銈�")         // "Endstop abort"
#define MSG_HEATING_FAILED_LCD              _UxGT("銈儘銉勩偡銉冦儜銈�")                 // "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("銈ㄣ儵銉�:銈搞儳銈︺儊銉с偊銈点兗銉熴偣銈裤兗銈儙銈�")  // "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 _UxGT("銉嶃儎銉溿偊銈姐偊")                   // "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     _UxGT("銈ㄣ儵銉�:銈点偆銈炽偊銈兂銉併儳銈︺偒")         // "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     _UxGT("銈ㄣ儵銉�:銈点偆銉嗐偆銈兂銉熴優銉�")          // "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 _UxGT("銈ㄣ儵銉�:銉欍儍銉� 銈点偆銈炽偊銈兂銉併儳銈︺偒")    // "Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 _UxGT("銈ㄣ儵銉�:銉欍儍銉� 銈点偆銉嗐偆銈兂銉熴優銉�")     // "Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST // "G28 Z Forbidden"
#define MSG_HALTED                          _UxGT("銉椼儶銉炽偪銉笺儚銉嗐偆銈枫偡銉炪偡銈�")         // "PRINTER HALTED"
#define MSG_PLEASE_RESET                    _UxGT("銉偦銉冦儓銈枫儐銈儉銈点偆")              // "Please reset"
#define MSG_SHORT_DAY                       _UxGT("d")                          // One character only
#define MSG_SHORT_HOUR                      _UxGT("h")                          // One character only
#define MSG_SHORT_MINUTE                    _UxGT("m")                          // One character only
#define MSG_HEATING                         _UxGT("銈儘銉勩儊銉ャ偊")                   // "Heating..."
#define MSG_HEATING_COMPLETE                _UxGT("銈儘銉勩偒銉炽儶銉с偊")                 // "Heating done."
#define MSG_BED_HEATING                     _UxGT("銉欍儍銉� 銈儘銉勩儊銉ャ偊")              // "Bed Heating."
#define MSG_BED_DONE                        _UxGT("銉欍儍銉� 銈儘銉勩偒銉炽儶銉с偊")            // "Bed done."
#define MSG_DELTA_CALIBRATE                 _UxGT("銉囥儷銈� 銈炽偊銈汇偆")                // "Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               _UxGT("X銈搞偗 銈炽偊銈汇偆")                 // "Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Y銈搞偗 銈炽偊銈汇偆")                 // "Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Z銈搞偗 銈炽偊銈汇偆")                 // "Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("銉併儱銈︺偡銉� 銈炽偊銈汇偆")              // "Calibrate Center"
#define MSG_INFO_MENU                       _UxGT("銈炽儙銉椼儶銉炽偪銉笺儖銉勩偆銉�")             // "About Printer"
#define MSG_INFO_PRINTER_MENU               _UxGT("銉椼儶銉炽偪銉笺偢銉с偊銉涖偊")              // "Printer Info"
#define MSG_INFO_STATS_MENU                 _UxGT("銉椼儶銉炽儓銈搞儳銈︺偔銉с偊")              // "Printer Stats"
#define MSG_INFO_BOARD_MENU                 _UxGT("銈汇偆銈儳銈便偆銈搞儳銈︺儧銈�")            // "Board Info"
#define MSG_INFO_THERMISTOR_MENU            _UxGT("銈点兗銉熴偣銈裤兗")                   // "Thermistors"
#define MSG_INFO_EXTRUDERS                  _UxGT("銈ㄣ偗銈广儓銉兗銉�銉笺偣銈�")             // "Extruders"
#define MSG_INFO_BAUDRATE                   _UxGT("銉溿兗銉兗銉�")                    // "Baud"
#define MSG_INFO_PROTOCOL                   _UxGT("銉椼儹銉堛偝銉�")                    // "Protocol"
#define MSG_CASE_LIGHT                      _UxGT("銈儳銈︺偪銈ゃ儕銈ゃ偡銉с偊銉°偆")       // "Case light"
#define MSG_INFO_PRINT_COUNT                _UxGT("銉椼儶銉炽儓銈广偊 ")                  // "Print Count"
#define MSG_INFO_COMPLETED_PRINTS           _UxGT("銈兂銉儳銈︺偣銈�")                  // "Completed"
#define MSG_INFO_PRINT_TIME                 _UxGT("銉椼儶銉炽儓銈搞偒銉炽儷銈ゃ偙銈�")            // "Total print time"
#define MSG_INFO_PRINT_LONGEST              _UxGT("銈点偆銉併儳銈︺儣銉兂銉堛偢銈兂")           // "Longest job time"
#define MSG_INFO_PRINT_FILAMENT             _UxGT("銉曘偅銉┿儭銉炽儓銈枫儴銈︺儶銉с偊銉偆銈便偆")       // "Extruded total"
#define MSG_INFO_MIN_TEMP                   _UxGT("銈汇儍銉嗐偆銈点偆銉嗐偆銈兂")              // "Min Temp"
#define MSG_INFO_MAX_TEMP                   _UxGT("銈汇儍銉嗐偆銈点偆銈炽偊銈兂")              // "Max Temp"
#define MSG_INFO_PSU                        _UxGT("銉囥兂銈层兂銈枫儱銉欍儎")                // "Power Supply"
#define MSG_DRIVE_STRENGTH                  _UxGT("銉€兗銈裤兗銈儔銈︺儶銉с偗")              // "Drive Strength"
#define MSG_DAC_PERCENT                     _UxGT("DAC銈枫儱銉勩儶銉с偗 %")               // "Driver %"
#define MSG_DAC_EEPROM_WRITE                MSG_STORE_EPROM                     // "DAC EEPROM Write"
#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("銈点儵銉嬨偑銈枫儉銈�")                 // "Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("銉椼儶銉炽儓銈点偆銈偆")                // "Resume print"
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("銈炽偊銈兂銉层偒銈ゃ偡銈枫優銈�")            // "Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("銈枫儛銉┿偗銈優銉併偗銉�銈点偆")            // "of the filament"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("銉曘偅銉┿儭銉炽儓銉屻偔銉�銈枫儊銉ャ偊")          // "Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("銈枫儛銉┿偗銈優銉併偗銉�銈点偆")            // "filament unload"
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("銉曘偅銉┿儭銉炽儓銉层偨銈︺儖銉ャ偊銈�,")         // "Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("銈儶銉冦偗銈广儷銉堛偩銉冦偝銈︺偡銉炪偣")         // "and press button"
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("銉曘偅銉┿儭銉炽儓銈姐偊銉嗐兂銉併儱銈�")          // "Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("銈枫儛銉┿偗銈優銉併偗銉�銈点偆")            // "filament load"
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("銉曘偅銉┿儭銉炽儓銈偡銉�銈枫儊銉ャ偊")          // "Wait for"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("銈枫儛銉┿偗銈優銉併偗銉�銈点偆")            // "filament extrude"
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("銉椼儶銉炽儓銉层偟銈ゃ偒銈ゃ偡銉炪偣")           // "Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("銈枫儛銉┿偗銈優銉併偗銉�銈点偆")            // "to resume"

#endif // LANGUAGE_KANA_UTF_H
