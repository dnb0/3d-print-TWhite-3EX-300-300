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
 * Bulgarian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_BG_H
#define LANGUAGE_BG_H

#define MAPPER_D0D1                // For Cyrillic
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" 袚芯褌芯胁.")
#define MSG_SD_INSERTED                     _UxGT("袣邪褉褌邪褌邪 械 锌芯褋褌邪胁械薪邪")
#define MSG_SD_REMOVED                      _UxGT("袣邪褉褌邪褌邪 械 懈蟹胁邪写械薪邪")
#define MSG_MAIN                            _UxGT("袦械薪褞")
#define MSG_AUTOSTART                       _UxGT("袗胁褌芯褋褌邪褉褌")
#define MSG_DISABLE_STEPPERS                _UxGT("袠蟹泻谢. 写胁懈谐邪褌械谢懈")
#define MSG_AUTO_HOME                       _UxGT("袩邪褉泻懈褉邪薪械")
#define MSG_SET_HOME_OFFSETS                _UxGT("袟邪写邪泄 袧邪褔邪谢芯")
#define MSG_SET_ORIGIN                      _UxGT("袠蟹褏芯写薪邪 褌芯褔泻邪")
#define MSG_PREHEAT_1                       _UxGT("袩芯写谐褉褟胁邪薪械 PLA")
#define MSG_PREHEAT_1_N                     _UxGT("袩芯写谐褉褟胁邪薪械 PLA")
#define MSG_PREHEAT_1_ALL                   _UxGT("袩芯写谐褉. PLA 袙褋懈褔泻懈")
#define MSG_PREHEAT_1_BEDONLY               _UxGT("袩芯写谐褉. PLA 袥械谐谢芯")
#define MSG_PREHEAT_1_SETTINGS              _UxGT("袧邪褋褌褉芯泄泻懈 PLA")
#define MSG_PREHEAT_2                       _UxGT("袩芯写谐褉褟胁邪薪械 ABS")
#define MSG_PREHEAT_2_N                     _UxGT("袩芯写谐褉褟胁邪薪械 ABS")
#define MSG_PREHEAT_2_ALL                   _UxGT("袩芯写谐褉. ABS 袙褋懈褔泻懈")
#define MSG_PREHEAT_2_BEDONLY               _UxGT("袩芯写谐褉. ABS 袥械谐谢芯")
#define MSG_PREHEAT_2_SETTINGS              _UxGT("袧邪褋褌褉芯泄泻懈 ABS")
#define MSG_COOLDOWN                        _UxGT("袨褏谢邪卸写邪薪械")
#define MSG_SWITCH_PS_ON                    _UxGT("袙泻谢. 蟹邪褏褉邪薪胁邪薪械")
#define MSG_SWITCH_PS_OFF                   _UxGT("袠蟹泻谢. 蟹邪褏褉邪薪胁邪薪械")
#define MSG_EXTRUDE                         _UxGT("袝泻褋褌褉褍蟹懈褟")
#define MSG_RETRACT                         _UxGT("袨褌泻邪褌")
#define MSG_MOVE_AXIS                       _UxGT("袛胁懈卸械薪懈械 锌芯 芯褋")
#define MSG_BED_LEVELING                    _UxGT("袧懈胁械谢懈褉邪薪械")
#define MSG_LEVEL_BED                       _UxGT("袧懈胁械谢懈褉邪薪械")
#define MSG_MOVE_X                          _UxGT("袛胁懈卸械薪懈械 锌芯 X")
#define MSG_MOVE_Y                          _UxGT("袛胁懈卸械薪懈械 锌芯 Y")
#define MSG_MOVE_Z                          _UxGT("袛胁懈卸械薪懈械 锌芯 Z")
#define MSG_MOVE_E                          _UxGT("袝泻褋褌褉褍写械褉")
#define MSG_MOVE_01MM                       _UxGT("袩褉械屑械褋褌懈 褋 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("袩褉械屑械褋褌懈 褋 1mm")
#define MSG_MOVE_10MM                       _UxGT("袩褉械屑械褋褌懈 褋 10mm")
#define MSG_SPEED                           _UxGT("小泻芯褉芯褋褌")
#define MSG_BED_Z                           _UxGT("Bed Z")
#define MSG_NOZZLE                          LCD_STR_THERMOMETER _UxGT(" 袛褞蟹邪")
#define MSG_BED                             LCD_STR_THERMOMETER _UxGT(" 袥械谐谢芯")
#define MSG_FAN_SPEED                       _UxGT("袙械薪褌懈谢邪褌芯褉")
#define MSG_FLOW                            _UxGT("袩芯褌芯泻")
#define MSG_CONTROL                         _UxGT("校锌褉邪胁谢械薪懈械")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" 袦懈薪懈屑褍屑")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" 袦邪泻褋懈屑褍屑")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" 肖邪泻褌芯褉")
#define MSG_AUTOTEMP                        _UxGT("袗胁褌芯-褌械屑锌.")
#define MSG_ON                              _UxGT("袙泻谢. ")
#define MSG_OFF                             _UxGT("袠蟹泻谢. ")
#define MSG_A_RETRACT                       _UxGT("A-芯褌泻邪褌")
#define MSG_A_TRAVEL                        _UxGT("A-travel")
#define MSG_STEPS_PER_MM                    _UxGT("小褌褗锌泻懈/mm")
#define MSG_XSTEPS                          _UxGT("X 褋褌褗锌泻懈/mm")
#define MSG_YSTEPS                          _UxGT("Y 褋褌褗锌泻懈/mm")
#define MSG_ZSTEPS                          _UxGT("Z 褋褌褗锌泻懈/mm")
#define MSG_ESTEPS                          _UxGT("E 褋褌褗锌泻懈/mm")
#define MSG_E1STEPS                         _UxGT("E1 褋褌褗锌泻懈/mm")
#define MSG_E2STEPS                         _UxGT("E2 褋褌褗锌泻懈/mm")
#define MSG_E3STEPS                         _UxGT("E3 褋褌褗锌泻懈/mm")
#define MSG_E4STEPS                         _UxGT("E4 褋褌褗锌泻懈/mm")
#define MSG_E5STEPS                         _UxGT("E5 褋褌褗锌泻懈/mm")
#define MSG_TEMPERATURE                     _UxGT("孝械屑锌械褉邪褌褍褉邪")
#define MSG_MOTION                          _UxGT("袛胁懈卸械薪懈械")
#define MSG_FILAMENT                        _UxGT("袧懈褕泻邪")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("袛懈邪屑. 薪懈褕泻邪")
#define MSG_CONTRAST                        _UxGT("LCD 泻芯薪褌褉邪褋褌")
#define MSG_STORE_EEPROM                    _UxGT("袟邪锌邪蟹懈 胁 EPROM")
#define MSG_LOAD_EEPROM                     _UxGT("袟邪褉械写懈 芯褌 EPROM")
#define MSG_RESTORE_FAILSAFE                _UxGT("肖邪斜褉懈褔薪懈 薪邪褋褌褉芯泄泻懈")
#define MSG_REFRESH                         LCD_STR_REFRESH _UxGT("袨斜薪芯胁懈")
#define MSG_WATCH                           _UxGT("袩褉械谐谢械写")
#define MSG_PREPARE                         _UxGT("袛械泄褋褌胁懈褟")
#define MSG_TUNE                            _UxGT("袧邪褋褌褉芯泄泻邪")
#define MSG_PAUSE_PRINT                     _UxGT("袩邪褍蟹邪")
#define MSG_RESUME_PRINT                    _UxGT("袙褗蟹芯斜薪芯胁懈 锌械褔邪褌邪")
#define MSG_STOP_PRINT                      _UxGT("小锌褉懈 锌械褔邪褌邪")
#define MSG_CARD_MENU                       _UxGT("袦械薪褞 泻邪褉褌邪")
#define MSG_NO_CARD                         _UxGT("袧褟屑邪 泻邪褉褌邪")
#define MSG_DWELL                           _UxGT("袩芯褔懈胁泻邪...")
#define MSG_USERWAIT                        _UxGT("袠蟹褔邪泻胁邪薪械")
#define MSG_RESUMING                        _UxGT("袩褉芯写褗谢卸. 锌械褔邪褌邪")
#define MSG_PRINT_ABORTED                   _UxGT("袩械褔邪褌褗褌 械 锌褉械泻褗褋薪邪褌")
#define MSG_NO_MOVE                         _UxGT("袧褟屑邪 写胁懈卸械薪懈械")
#define MSG_KILLED                          _UxGT("校袘袠孝袨.")
#define MSG_STOPPED                         _UxGT("小袩袪携袧袨.")
#define MSG_CONTROL_RETRACT                 _UxGT("袨褌泻邪褌 mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("小屑褟薪邪 袨褌泻邪褌 mm")
#define MSG_CONTROL_RETRACTF                _UxGT("袨褌泻邪褌  V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("小泻芯泻 mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("袙褗蟹胁褉邪褌 mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("小屑褟薪邪 袙褗蟹胁褉邪褌 mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("袙褗蟹胁褉邪褌  V")
#define MSG_AUTORETRACT                     _UxGT("袗胁褌芯o褌泻邪褌")
#define MSG_FILAMENTCHANGE                  _UxGT("小屑褟薪邪 薪懈褕泻邪")
#define MSG_INIT_SDCARD                     _UxGT("袠薪懈褑. SD-袣邪褉褌邪")
#define MSG_CNG_SDCARD                      _UxGT("小屑褟薪邪 SD-袣邪褉褌邪")
#define MSG_ZPROBE_OUT                      _UxGT("Z-褋芯薪写邪褌邪 械 懈蟹胁邪写械薪邪")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z 袨褌褋褌芯褟薪懈械")
#define MSG_BABYSTEP_X                      _UxGT("袦懈薪懈褋褌褗锌泻邪 X")
#define MSG_BABYSTEP_Y                      _UxGT("袦懈薪懈褋褌褗锌泻邪 Y")
#define MSG_BABYSTEP_Z                      _UxGT("袦懈薪懈褋褌褗锌泻邪 Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("小褌芯锌 袣褉.袠蟹泻谢褞褔胁邪褌械谢懈")
#define MSG_DELTA_CALIBRATE                 _UxGT("袛械谢褌邪 袣邪谢懈斜褉芯胁泻邪")
#define MSG_DELTA_CALIBRATE_X               _UxGT("袣邪谢懈斜褉芯胁泻邪 X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("袣邪谢懈斜褉芯胁泻邪 Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("袣邪谢懈斜褉芯胁泻邪 Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("袣邪谢懈斜褉芯胁泻邪 笑械薪褌褗褉")

#endif // LANGUAGE_BG_H
