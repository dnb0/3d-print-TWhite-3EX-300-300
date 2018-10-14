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
 * Ukrainian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_UK_H
#define LANGUAGE_UK_H

#define MAPPER_D0D1                // For Cyrillic
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" 谐芯褌芯胁懈泄.")
#define MSG_SD_INSERTED                     _UxGT("袣邪褉褌泻邪 胁褋褌邪胁谢械薪邪")
#define MSG_SD_REMOVED                      _UxGT("袣邪褉褌泻邪 胁懈写邪谢械薪邪")
#define MSG_LCD_ENDSTOPS                    _UxGT("袣褨薪褑械胁懈泻") // Max length 8 characters
#define MSG_MAIN                            _UxGT("袦械薪褞")
#define MSG_AUTOSTART                       _UxGT("袗胁褌芯褋褌邪褉褌")
#define MSG_DISABLE_STEPPERS                _UxGT("袙懈屑泻. 写胁懈谐褍薪懈")
#define MSG_AUTO_HOME                       _UxGT("袗胁褌芯 锌邪褉泻褍胁邪薪薪褟")
#define MSG_AUTO_HOME_X                     _UxGT("袩邪褉泻褍胁邪薪薪褟 X")
#define MSG_AUTO_HOME_Y                     _UxGT("袩邪褉泻褍胁邪薪薪褟 Y")
#define MSG_AUTO_HOME_Z                     _UxGT("袩邪褉泻褍胁邪薪薪褟 Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("袩邪褉泻褍胁邪薪薪褟 XYZ")
#define MSG_LEVEL_BED_WAITING               _UxGT("袩芯褔邪褌懈")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("小谢褨写褍褞褔邪 孝芯褔泻邪")
#define MSG_LEVEL_BED_DONE                  _UxGT("袟邪胁械褉褕械薪芯!")
#define MSG_SET_HOME_OFFSETS                _UxGT("袟斜械褉械谐褌懈 锌邪褉泻褍胁.")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("袟屑褨褖械薪薪褟 蟹邪褋褌芯褋.")
#define MSG_SET_ORIGIN                      _UxGT("袙褋褌邪薪芯胁. 锌芯褔邪褌芯泻")
#define MSG_PREHEAT_1                       _UxGT("袧邪谐褉褨胁 PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" 袙褋械")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" 小褌褨谢")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" 薪邪谢.")
#define MSG_PREHEAT_2                       _UxGT("袧邪谐褉褨胁 ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" 袙褋械")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" 小褌褨谢")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" 薪邪谢.")
#define MSG_COOLDOWN                        _UxGT("袨褏芯谢芯写卸械薪薪褟")
#define MSG_SWITCH_PS_ON                    _UxGT("校胁褨屑泻薪褍褌懈 卸懈胁谢械薪薪褟")
#define MSG_SWITCH_PS_OFF                   _UxGT("袙懈屑泻薪褍褌懈 卸懈胁谢械薪薪褟")
#define MSG_EXTRUDE                         _UxGT("袝泻褋褌褉褍蟹褨褟")
#define MSG_RETRACT                         _UxGT("袙褌褟谐褍胁邪薪薪褟")
#define MSG_MOVE_AXIS                       _UxGT("袪褍褏 锌芯 芯褋褟屑")
#define MSG_BED_LEVELING                    _UxGT("袧褨胁械谢褞胁邪薪薪褟 褋褌芯谢褍")
#define MSG_LEVEL_BED                       _UxGT("袧褨胁械谢褞胁邪薪薪褟 褋褌芯谢褍")
#define MSG_MOVE_X                          _UxGT("袪褍褏 锌芯 X")
#define MSG_MOVE_Y                          _UxGT("袪褍褏 锌芯 Y")
#define MSG_MOVE_Z                          _UxGT("袪褍褏 锌芯 Z")
#define MSG_MOVE_E                          _UxGT("袝泻褋褌褉褍写械褉")
#define MSG_MOVE_01MM                       _UxGT("袪褍褏 锌芯 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("袪褍褏 锌芯 1mm")
#define MSG_MOVE_10MM                       _UxGT("袪褍褏 锌芯 10mm")
#define MSG_SPEED                           _UxGT("楔胁懈写泻褨褋褌褜")
#define MSG_BED_Z                           _UxGT("Z 小褌芯谢褍")
#define MSG_NOZZLE                          _UxGT("小芯锌谢芯")
#define MSG_BED                             _UxGT("小褌褨谢")
#define MSG_FAN_SPEED                       _UxGT("袨褏芯谢芯写卸.")
#define MSG_FLOW                            _UxGT("袩芯褌褨泻")
#define MSG_CONTROL                         _UxGT("袧邪谢邪褕褌褍胁邪薪薪褟")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 袦褨薪")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 袦邪泻褋")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 肖邪泻褌")
#define MSG_AUTOTEMP                        _UxGT("袗胁褌芯褌械屑锌械褉.")
#define MSG_ON                              _UxGT("校胁褨屑泻.")
#define MSG_OFF                             _UxGT("袙懈屑泻. ")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("袙懈斜褉邪褌懈")
#define MSG_ACC                             _UxGT("袩褉懈褋泻.")
#define MSG_JERK                            _UxGT("袪懈胁芯泻")
#define MSG_VX_JERK                         _UxGT("Vx-褉懈胁芯泻")
#define MSG_VY_JERK                         _UxGT("Vy-褉懈胁芯泻")
#define MSG_VZ_JERK                         _UxGT("Vz-褉懈胁芯泻")
#define MSG_VE_JERK                         _UxGT("Ve-褉懈胁芯泻")
#define MSG_VMAX                            _UxGT("V屑邪泻褋")
#define MSG_VMIN                            _UxGT("V屑褨薪")
#define MSG_VTRAV_MIN                       _UxGT("V褉褍褏褍 屑褨薪")
#define MSG_AMAX                            _UxGT("A屑邪泻褋 ")
#define MSG_A_RETRACT                       _UxGT("A-胁褌褟谐褍胁.")
#define MSG_A_TRAVEL                        _UxGT("A-褉褍褏褍")
#define MSG_STEPS_PER_MM                    _UxGT("袣褉芯泻褨胁/屑屑")
#define MSG_XSTEPS                          _UxGT("X泻褉芯泻褨胁/屑屑")
#define MSG_YSTEPS                          _UxGT("Y泻褉芯泻褨胁/屑屑")
#define MSG_ZSTEPS                          _UxGT("Z泻褉芯泻褨胁/屑屑")
#define MSG_ESTEPS                          _UxGT("E泻褉芯泻褨胁/屑屑")
#define MSG_E1STEPS                         _UxGT("E1泻褉芯泻褨胁/屑屑")
#define MSG_E2STEPS                         _UxGT("E2泻褉芯泻褨胁/屑屑")
#define MSG_E3STEPS                         _UxGT("E3泻褉芯泻褨胁/屑屑")
#define MSG_E4STEPS                         _UxGT("E4泻褉芯泻褨胁/屑屑")
#define MSG_E5STEPS                         _UxGT("E5泻褉芯泻褨胁/屑屑")
#define MSG_TEMPERATURE                     _UxGT("孝械屑锌械褉邪褌褍褉邪")
#define MSG_MOTION                          _UxGT("袪褍褏")
#define MSG_FILAMENT                        _UxGT("袙芯谢芯泻薪芯")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E 胁 屑屑3")
#define MSG_FILAMENT_DIAM                   _UxGT("袛褨邪屑. 胁芯谢芯泻.")
#define MSG_CONTRAST                        _UxGT("泻芯薪褌褉邪褋褌 LCD")
#define MSG_STORE_EEPROM                    _UxGT("袟斜械褉械谐褌懈 胁 袩袟袩")
#define MSG_LOAD_EEPROM                     _UxGT("袟褔懈褌邪褌懈 蟹 袩袟袩")
#define MSG_RESTORE_FAILSAFE                _UxGT("袙褨写薪芯胁懈褌懈 斜邪蟹芯胁褨")
#define MSG_REFRESH                         _UxGT("袩芯薪芯胁懈褌懈")
#define MSG_WATCH                           _UxGT("袉薪褎芯褉屑邪褑褨褟")
#define MSG_PREPARE                         _UxGT("袩褨写谐芯褌褍胁邪褌懈")
#define MSG_TUNE                            _UxGT("袩褨写谢邪褕褌褍胁邪薪薪褟")
#define MSG_PAUSE_PRINT                     _UxGT("袩褉懈蟹褍锌懈薪懈褌懈 写褉褍泻")
#define MSG_RESUME_PRINT                    _UxGT("袙褨写薪芯胁懈褌懈 写褉褍泻")
#define MSG_STOP_PRINT                      _UxGT("小泻邪褋褍胁邪褌懈 写褉褍泻")
#define MSG_CARD_MENU                       _UxGT("袛褉褍泻褍胁邪褌懈 蟹 SD")
#define MSG_NO_CARD                         _UxGT("袙褨写褋褍褌薪褟 SD 泻邪褉褌.")
#define MSG_DWELL                           _UxGT("小锌谢褟褔泻邪...")
#define MSG_USERWAIT                        _UxGT("袨褔褨泻褍胁邪薪薪褟 写褨泄...")
#define MSG_RESUMING                        _UxGT("袙褨写薪芯胁谢械薪薪褟 写褉褍泻褍")
#define MSG_PRINT_ABORTED                   _UxGT("袛褉褍泻 褋泻邪褋芯胁邪薪芯")
#define MSG_NO_MOVE                         _UxGT("袧械屑邪褦 褉褍褏褍.")
#define MSG_KILLED                          _UxGT("袩袝袪袝袪袙袗袧袨. ")
#define MSG_STOPPED                         _UxGT("袟校袩袠袧袝袧袨. ")
#define MSG_FILAMENTCHANGE                  _UxGT("袟屑褨薪邪 胁芯谢芯泻薪邪")
#define MSG_INIT_SDCARD                     _UxGT("小褌邪褉褌 SD 泻邪褉褌泻懈")
#define MSG_CNG_SDCARD                      _UxGT("袟邪屑褨薪邪 SD 泻邪褉褌懈")
#define MSG_ZPROBE_OUT                      _UxGT("Z 写械褌. 薪械 胁 屑械卸邪褏")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch 小邪屑芯-孝械褋褌")
#define MSG_BLTOUCH_RESET                   _UxGT("小泻懈薪褍褌懈 BLTouch")
#define MSG_HOME                            _UxGT("袛褨屑")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("锌械褉褕懈泄")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("袟屑褨褖械薪薪褟 Z")
#define MSG_BABYSTEP_X                      _UxGT("袦褨泻褉芯泻褉芯泻 X")
#define MSG_BABYSTEP_Y                      _UxGT("袦褨泻褉芯泻褉芯泻 Y")
#define MSG_BABYSTEP_Z                      _UxGT("袦褨泻褉芯泻褉芯泻 Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("薪械胁写邪褔邪 泻褨薪褑械胁懈泻邪")
#define MSG_HEATING_FAILED_LCD              _UxGT("袧械胁写邪谢懈泄 薪邪谐褉褨胁")
#define MSG_THERMAL_RUNAWAY                 _UxGT("袟袘袉袡 孝袝袦袩袝袪袗孝校袪袠")
#define MSG_ERR_Z_HOMING                    _UxGT("G28 Z 袙褨写屑芯胁谢械薪芯")
#define MSG_HALTED                          _UxGT("袩袪袠袧孝袝袪 袟校袩袠袧袝袧袨")
#define MSG_PLEASE_RESET                    _UxGT("袩械褉械蟹邪胁邪薪褌邪卸褌械")
#define MSG_SHORT_DAY                       _UxGT("写") // One character only
#define MSG_SHORT_HOUR                      _UxGT("谐") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("褏") // One character only
#define MSG_HEATING                         _UxGT("袧邪谐褉褨胁邪薪薪褟...")
#define MSG_HEATING_COMPLETE                _UxGT("袧邪谐褉褨褌芯.")
#define MSG_BED_HEATING                     _UxGT("袧邪谐褉褨胁邪薪薪褟 褋褌芯谢褍.")
#define MSG_BED_DONE                        _UxGT("小褌褨谢 薪邪谐褉褨褌懈泄.")
#define MSG_DELTA_CALIBRATE                 _UxGT("袣邪谢褨斜褉. Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("袣邪谢褨斜褉褍胁邪薪薪褟 X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("袣邪谢褨斜褉褍胁邪薪薪褟 Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("袣邪谢褨斜褉褍胁邪薪薪褟 Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("袣邪谢褨斜褉. 笑械薪褌褉褍")

#define MSG_INFO_MENU                       _UxGT("袩褉芯 锌褉懈薪褌械褉")
#define MSG_INFO_PRINTER_MENU               _UxGT("袉薪褎芯褉屑邪褑褨褟")
#define MSG_INFO_STATS_MENU                 _UxGT("小褌邪褌懈褋褌懈泻邪")
#define MSG_INFO_BOARD_MENU                 _UxGT("袩褉芯 锌谢邪褌褍")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("孝械褉屑褨褋褌芯褉懈")
#define MSG_INFO_EXTRUDERS                  _UxGT("袝泻褋褌褉褍写械褉懈")
#define MSG_INFO_BAUDRATE                   _UxGT("斜褨褌/褋")
#define MSG_INFO_PROTOCOL                   _UxGT("袩褉芯褌芯泻芯谢")
#define MSG_CASE_LIGHT                      _UxGT("袩褨写褋胁褨褌泻邪")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("袣-褋褌褜 写褉褍泻褨胁")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("袟邪胁械褉褕械薪芯")
  #define MSG_INFO_PRINT_TIME               _UxGT("袙械褋褜 褔邪褋 写褉褍泻褍")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("袧邪泄写芯胁褕懈泄 褔邪褋")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("袝泻褋褌褉褍写芯胁邪薪芯")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("袛褉褍泻褨胁")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("袟邪胁械褉褕械薪芯")
  #define MSG_INFO_PRINT_TIME               _UxGT("袟邪谐邪谢芯屑")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("袧邪泄写芯胁褕懈泄")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("袝泻褋写褉褍写.")
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("袦褨薪 孝械屑锌.")
#define MSG_INFO_MAX_TEMP                   _UxGT("袦邪泻褋 孝械屑锌.")
#define MSG_INFO_PSU                        _UxGT("袛卸械褉械谢芯 卸懈胁.")

#define MSG_DRIVE_STRENGTH                  _UxGT("小懈谢邪 屑芯褌芯褉褍")
#define MSG_DAC_PERCENT                     _UxGT("% 屑芯褌芯褉褍")
#define MSG_DAC_EEPROM_WRITE                _UxGT("袟邪锌懈褋 笑袗袩 薪邪 袩袟袩")

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("袝泻褋褌褉褍写褍胁邪褌懈")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("袙褨写薪芯胁懈褌懈 写褉褍泻")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("袟邪褔械泻邪泄褌械 薪邪")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("锌芯褔邪褌芯泻 蟹邪屑褨薪懈")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("胁芯谢芯泻薪邪")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("袟邪褔械泻邪泄褌械 薪邪")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("胁懈胁褨写 胁芯谢芯泻薪邪")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("袙褋褌邪胁褌械 胁芯谢芯泻薪芯")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("褌邪 薪邪褌懈褋薪褨褌褜 写谢褟")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("锌褉芯写芯胁卸械薪薪褟...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("袟邪褔械泻邪泄褌械 薪邪")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("胁胁褨写 胁芯谢芯泻薪邪")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("袟邪褔械泻邪泄褌械 薪邪")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("械泻褋褌褉褍蟹褨褞")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       _UxGT("胁芯谢芯泻薪邪")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("袟邪褔械泻邪泄褌械 薪邪")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("胁褨写薪芯胁谢械薪薪褟")
  #define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("写褉褍泻褍")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("袟邪褔械泻邪泄褌械...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("袙懈胁褨写...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("袙褋褌邪胁褌械 褨 薪邪褌.")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("袙胁褨写...")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("袝泻褋褌褉褍蟹褨褟...")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("袙褨写薪芯胁谢械薪薪褟...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_UK_H
