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
 * Greek
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_EL_H
#define LANGUAGE_EL_H

#define MAPPER_CECF
#define DISPLAY_CHARSET_ISO10646_GREEK

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" 苇蟿慰喂渭慰.")
#define MSG_SD_INSERTED                     _UxGT("螘喂蟽伪纬蠅纬萎 魏维蟻蟿伪蟼")
#define MSG_SD_REMOVED                      _UxGT("螒蠁伪委蟻蔚蟽畏 魏维蟻蟿伪蟼")
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstops") // Max length 8 characters
#define MSG_MAIN                            _UxGT("螔伪蟽喂魏萎 螣胃蠈谓畏")
#define MSG_AUTOSTART                       _UxGT("螒蠀蟿蠈渭伪蟿畏 蔚魏魏委谓畏蟽畏")
#define MSG_DISABLE_STEPPERS                _UxGT("螒蟺蔚谓蔚蟻纬慰蟺慰委畏蟽畏 螠慰蟿苇蟻")
#define MSG_AUTO_HOME                       _UxGT("螒蠀蟿慰渭. 蔚蟺伪谓伪蠁慰蟻维 蟽蟿慰 伪蟻蠂喂魏蠈 蟽畏渭蔚委慰") //SHORTEN
#define MSG_AUTO_HOME_X                     _UxGT("螒蟻蠂喂魏蠈 蟽畏渭蔚委慰 X")
#define MSG_AUTO_HOME_Y                     _UxGT("螒蟻蠂喂魏蠈 蟽畏渭蔚委慰 Y")
#define MSG_AUTO_HOME_Z                     _UxGT("螒蟻蠂喂魏蠈 蟽畏渭蔚委慰 Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("螘蟺伪谓伪蠁慰蟻维 螘蟺. 螘魏蟿蠉蟺蠅蟽畏蟼") //SHORTEN
#define MSG_LEVEL_BED_WAITING               _UxGT("螘蟺喂蟺蔚未慰蟺慰委畏蟽畏 蔚蟺. 螘魏蟿蠉蟺蠅蟽畏蟼 蟺蔚蟻喂渭蔚谓蔚喂") //SHORTEN
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("螘蟺蠈渭蔚谓慰 蟽畏渭蔚委慰")
#define MSG_LEVEL_BED_DONE                  _UxGT("螣位慰魏位萎蟻蠅蟽畏 蔚蟺喂蟺蔚未慰蟺慰委畏蟽畏蟼!") //SHORTEN
#define MSG_SET_HOME_OFFSETS                _UxGT("螣蟻喂蟽渭蠈蟼 尾伪蟽喂魏蠋谓 渭蔚蟿伪蟿慰蟺委蟽蔚蠅谓") //SHORTEN
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("螘蠁伪蟻渭蠈蟽蟿畏魏伪谓 慰喂 渭蔚蟿伪蟿慰蟺委蟽蔚喂蟼") //SHORTEN
#define MSG_SET_ORIGIN                      _UxGT("螣蟻喂蟽渭蠈蟼 蟺蟻慰苇位蔚蠀蟽畏蟼")
#define MSG_PREHEAT_1                       _UxGT("螤蟻慰胃苇蟻渭伪谓蟽畏 PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" 蠈位伪")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" bed") //SHORTEN
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" 蔚蟺喂尾蔚尾伪委蠅蟽畏") //SHORTEN
#define MSG_PREHEAT_2                       _UxGT("螤蟻慰胃苇蟻渭伪谓蟽畏 ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" 蠈位伪")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" bed") //SHORTEN
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" 蔚蟺喂尾蔚尾伪委蠅蟽畏") //SHORTEN
#define MSG_COOLDOWN                        _UxGT("螠蔚喂蠅蟽畏 胃蔚蟻渭慰魏蟻伪蟽喂伪蟼")
#define MSG_SWITCH_PS_ON                    _UxGT("螘谓蔚蟻纬慰蟺慰委畏蟽畏")
#define MSG_SWITCH_PS_OFF                   _UxGT("螒蟺蔚谓蔚蟻纬慰蟺慰委畏蟽畏")
#define MSG_EXTRUDE                         _UxGT("螘尉蠋胃畏蟽畏")
#define MSG_RETRACT                         _UxGT("螒谓维蟽蠀蟻蟽畏")
#define MSG_MOVE_AXIS                       _UxGT("螠蔚蟿伪魏委谓畏蟽畏 维尉慰谓伪")
#define MSG_BED_LEVELING                    _UxGT("螘蟺喂蟺蔚未慰蟺慰委畏蟽畏 螘蟺. 螘魏蟿蠉蟺蠅蟽畏蟼") //SHORTEN
#define MSG_LEVEL_BED                       _UxGT("螘蟺喂蟺蔚未慰蟺慰委畏蟽畏 螘蟺. 螘魏蟿蠉蟺蠅蟽畏蟼") //SHORTEN
#define MSG_MOVE_X                          _UxGT("螠蔚蟿伪魏委谓畏蟽畏 X")
#define MSG_MOVE_Y                          _UxGT("螠蔚蟿伪魏委谓畏蟽畏 Y")
#define MSG_MOVE_Z                          _UxGT("螠蔚蟿伪魏委谓畏蟽畏 Z")
#define MSG_MOVE_E                          _UxGT("螘尉蠅胃畏蟿萎蟻伪蟼")
#define MSG_MOVE_01MM                       _UxGT("螠蔚蟿伪魏委谓畏蟽畏 0,1渭渭")
#define MSG_MOVE_1MM                        _UxGT("螠蔚蟿伪魏委谓畏蟽畏 1渭渭")
#define MSG_MOVE_10MM                       _UxGT("螠蔚蟿伪魏委谓畏蟽畏 10渭渭")
#define MSG_SPEED                           _UxGT("韦伪蠂蠉蟿畏蟿伪")
#define MSG_BED_Z                           _UxGT("螘蟺. 螘魏蟿蠉蟺蠅蟽畏蟼 Z")
#define MSG_NOZZLE                          _UxGT("螒魏蟻慰蠁蠉蟽喂慰")
#define MSG_BED                             _UxGT("螝位委谓畏")
#define MSG_FAN_SPEED                       _UxGT("韦伪蠂蠉蟿畏蟿伪 伪谓蔚渭喂蟽蟿萎蟻伪")
#define MSG_FLOW                            _UxGT("巍慰萎")
#define MSG_CONTROL                         _UxGT("螆位蔚纬蠂慰蟼")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Fact")
#define MSG_AUTOTEMP                        _UxGT("螒蠀蟿慰渭 蟻蠉胃渭喂蟽畏 胃蔚蟻/蟽委伪蟼") //SHORTEN
#define MSG_ON                              _UxGT("螘谓蔚蟻纬慰蟺慰喂畏渭苇谓慰")
#define MSG_OFF                             _UxGT("螒蟺蔚谓蔚蟻纬慰蟺慰喂畏渭苇谓慰")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_ACC                             _UxGT("螘蟺喂蟿维蠂蠀谓蟽畏")
#define MSG_JERK                            _UxGT("Jerk")
#define MSG_VX_JERK                         _UxGT("V伪谓蟿委未蟻伪蟽畏 x")
#define MSG_VY_JERK                         _UxGT("V伪谓蟿委未蟻伪蟽畏 y")
#define MSG_VZ_JERK                         _UxGT("V伪谓蟿委未蟻伪蟽畏 z")
#define MSG_VE_JERK                         _UxGT("V伪谓蟿委未蟻伪蟽畏 e")
#define MSG_VMAX                            _UxGT("V 螠苇纬喂蟽蟿慰")
#define MSG_VMIN                            _UxGT("V 螘位维蠂喂蟽蟿慰")
#define MSG_VTRAV_MIN                       _UxGT("V蔚位维蠂. 渭蔚蟿伪蟿蠈蟺喂蟽畏")
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            _UxGT("A渭蔚纬 ")
#define MSG_A_RETRACT                       _UxGT("螒-伪谓维蟽蠀蟻蟽畏")
#define MSG_A_TRAVEL                        _UxGT("螒-渭蔚蟿伪蟿蠈蟺喂蟽畏")
#define MSG_STEPS_PER_MM                    _UxGT("B萎渭伪蟿伪 伪谓维 渭渭")
#define MSG_XSTEPS                          _UxGT("B萎渭伪蟿伪 X 伪谓维 渭渭")
#define MSG_YSTEPS                          _UxGT("B萎渭伪蟿伪 违 伪谓维 渭渭")
#define MSG_ZSTEPS                          _UxGT("B萎渭伪蟿伪 螙 伪谓维 渭渭")
#define MSG_ESTEPS                          _UxGT("B萎渭伪蟿伪 螘 伪谓维 渭渭")
#define MSG_E1STEPS                         _UxGT("B萎渭伪蟿伪 螘1 伪谓维 渭渭")
#define MSG_E2STEPS                         _UxGT("B萎渭伪蟿伪 螘2 伪谓维 渭渭")
#define MSG_E3STEPS                         _UxGT("B萎渭伪蟿伪 螘3 伪谓维 渭渭")
#define MSG_E4STEPS                         _UxGT("B萎渭伪蟿伪 螘4 伪谓维 渭渭")
#define MSG_E5STEPS                         _UxGT("B萎渭伪蟿伪 螘5 伪谓维 渭渭")
#define MSG_TEMPERATURE                     _UxGT("螛蔚蟻渭慰魏蟻伪蟽委伪")
#define MSG_MOTION                          _UxGT("螝委谓畏蟽畏")
#define MSG_FILAMENT                        _UxGT("螡萎渭伪")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("螘 蟽蔚 渭渭3")
#define MSG_FILAMENT_DIAM                   _UxGT("螖喂维渭蔚蟿蟻慰蟼 谓萎渭伪蟿慰蟼")
#define MSG_CONTRAST                        _UxGT("螝慰谓蟿蟻维蟽蟿 LCD")
#define MSG_STORE_EEPROM                    _UxGT("螒蟺慰胃萎魏蔚蠀蟽畏")
#define MSG_LOAD_EEPROM                     _UxGT("桅蠈蟻蟿蠅蟽畏")
#define MSG_RESTORE_FAILSAFE                _UxGT("螘蟺伪谓伪蠁慰蟻维 伪蟽蠁伪位慰蠉蟼 伪谓蟿喂纬蟻维蠁慰蠀") //SHORTEN
#define MSG_REFRESH                         _UxGT("螒谓伪谓苇蠅蟽畏")
#define MSG_WATCH                           _UxGT("螣胃蠈谓畏 蟺位畏蟻慰蠁蠈蟻畏蟽畏蟼")
#define MSG_PREPARE                         _UxGT("螤蟻慰蔚蟿慰喂渭伪蟽委伪")
#define MSG_TUNE                            _UxGT("危蠀谓蟿慰谓喂蟽渭蠈蟼")
#define MSG_PAUSE_PRINT                     _UxGT("螤伪蠉蟽畏 蔚魏蟿蠉蟺蠅蟽畏蟼")
#define MSG_RESUME_PRINT                    _UxGT("危蠀谓苇蠂喂蟽畏 蔚魏蟿蠉蟺蠅蟽畏蟼")
#define MSG_STOP_PRINT                      _UxGT("螖喂伪魏慰蟺萎 蔚魏蟿蠉蟺蠅蟽畏蟼")
#define MSG_CARD_MENU                       _UxGT("螘魏蟿蠉蟺蠅蟽畏 伪蟺蠈 SD")
#define MSG_NO_CARD                         _UxGT("螖蔚谓 尾蟻苇胃畏魏蔚 SD")
#define MSG_DWELL                           _UxGT("螒谓伪蟽蟿慰位萎 位蔚喂蟿慰蠀蟻纬委伪蟼")
#define MSG_USERWAIT                        _UxGT("螒谓伪渭慰谓萎 纬喂伪 蠂蟻萎蟽蟿畏")
#define MSG_RESUMING                        _UxGT("危蠀谓蔚蠂委味蔚蟿伪喂 畏 蔚魏蟿蠉蟺蠅蟽畏") //SHORTEN
#define MSG_PRINT_ABORTED                   _UxGT("螖喂伪魏蠈蟺蟿蔚蟿伪喂 畏 蔚魏蟿蠉蟺蠅蟽畏") //SHORTEN
#define MSG_NO_MOVE                         _UxGT("螝伪渭委伪 魏委谓畏蟽畏.")
#define MSG_KILLED                          _UxGT("韦螘巍螠螒韦螜危螠螣危. ")
#define MSG_STOPPED                         _UxGT("螖螜螒螝螣螤螚. ")
#define MSG_CONTROL_RETRACT                 _UxGT("螒谓维蟽蠀蟻蟽畏 渭渭")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("螘谓伪位位伪纬萎 伪谓维蟽蠀蟻蟽畏蟼 渭渭")  //SHORTEN
#define MSG_CONTROL_RETRACTF                _UxGT("螒谓维蟽蠀蟻蟽畏 V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("螠蔚蟿伪蟺萎未畏蟽畏 渭渭")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")
#define MSG_AUTORETRACT                     _UxGT("螒蠀蟿蠈渭伪蟿畏 伪谓维蟽蠀蟻蟽畏")
#define MSG_FILAMENTCHANGE                  _UxGT("螒位位伪纬萎 谓萎渭伪蟿慰蟼")
#define MSG_INIT_SDCARD                     _UxGT("螤蟻慰蔚蟿慰喂渭伪蟽委伪 魏维蟻蟿伪蟼 SD")  //SHORTEN
#define MSG_CNG_SDCARD                      _UxGT("螒位位伪纬萎 魏维蟻蟿伪蟼 SD")
#define MSG_ZPROBE_OUT                      _UxGT("螖喂蔚蟻蔚蠉谓畏蟽畏 Z 蔚魏蟿蠈蟼 螘蟺.螘魏蟿蠉蟺蠅蟽畏蟼") //SHORTEN
#define MSG_YX_UNHOMED                      _UxGT("螘蟺伪谓伪蠁慰蟻维 围/违 蟺蟻喂谓 伪蟺蠈 螙") //SHORTEN
#define MSG_XYZ_UNHOMED                     _UxGT("螘蟺伪谓伪蠁慰蟻维 围违螙 蟺蟻蠋蟿伪")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("螠蔚蟿伪蟿蠈蟺喂蟽畏 螙")
#define MSG_BABYSTEP_X                      _UxGT("螠喂魏蟻蠈 尾萎渭伪 围")
#define MSG_BABYSTEP_Y                      _UxGT("螠喂魏蟻蠈 尾萎渭伪 违")
#define MSG_BABYSTEP_Z                      _UxGT("螠喂魏蟻蠈 尾萎渭伪 螙")
#define MSG_ENDSTOP_ABORT                   _UxGT("螒魏蠉蟻蠅蟽畏 endstop ")
#define MSG_HEATING_FAILED_LCD              _UxGT("螒谓蔚蟺喂蟿蠀蠂萎蟼 胃苇蟻渭伪谓蟽畏")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("螤螞螘螣螡螒螙螣违危螒 螛螘巍螠螣韦螚韦螒")
#define MSG_THERMAL_RUNAWAY                 _UxGT("螖螜螒桅违螕螚 螛螘巍螠螣螝巍螒危螜螒危")
#define MSG_ERR_MAXTEMP                     _UxGT("螤螘巍螜韦螚 螛螘巍螠螣螝巍螒危螜螒")
#define MSG_ERR_MINTEMP                     _UxGT("螠螚 螘螤螒巍螝螚危 螛螘巍螠螣螝巍螒危螜螒危") //SHORTEN
#define MSG_ERR_MAXTEMP_BED                 _UxGT("螠螘螕螜危韦螚 螛螘巍螠螣螝巍螒危螜螒危 螘螤. 螘螝韦违螤惟危螚危") //SHORTEN
#define MSG_ERR_MINTEMP_BED                 _UxGT("螘螞螒围螜危韦螚 螛螘巍螠螣螝巍螒危螜螒危 螘螤. 螘螝韦违螤惟危螚危") //SHORTEN
#define MSG_HALTED                          _UxGT("H 蔚魏蟿蠉蟺蠅蟽畏 未喂伪魏蠈蟺畏魏蔚")
#define MSG_PLEASE_RESET                    _UxGT("PLEASE RESET") //TRANSLATE
#define MSG_HEATING                         _UxGT("螛蔚蟻渭伪委谓蔚蟿伪喂鈥�")
#define MSG_HEATING_COMPLETE                _UxGT("螚 胃苇蟻渭伪谓蟽畏 慰位慰魏位畏蟻蠋胃畏魏蔚.") //SHORTEN
#define MSG_BED_HEATING                     _UxGT("螛苇蟻渭伪谓蟽畏 螘螤. 螘魏蟿蠉蟺蠅蟽畏蟼") //SHORTEN
#define MSG_BED_DONE                        _UxGT("螚 螘蟺. 螘魏蟿蠉蟺蠅蟽畏蟼 慰位慰魏位畏蟻蠋胃畏魏蔚") //SHORTEN
#define MSG_DELTA_CALIBRATE                 _UxGT("螔伪胃渭慰谓蠈渭畏蟽畏 Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("螔伪胃渭慰谓蠈渭畏蟽畏 X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("螔伪胃渭慰谓蠈渭畏蟽畏 Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("螔伪胃渭慰谓蠈渭畏蟽畏 Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("螔伪胃渭慰谓蠈渭畏蟽畏 魏苇谓蟿蟻慰蠀")

#define MSG_INFO_MENU                       _UxGT("About Printer")
#define MSG_INFO_PRINTER_MENU               _UxGT("Printer Info")
#define MSG_INFO_STATS_MENU                 _UxGT("Printer Stats")
#define MSG_INFO_BOARD_MENU                 _UxGT("Board Info")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Thermistors")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extruders")
#define MSG_INFO_BAUDRATE                   _UxGT("Baud")
#define MSG_INFO_PROTOCOL                   _UxGT("Protocol")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Print Count")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Completed  ")
  #define MSG_INFO_PRINT_TIME               _UxGT("Total Time ")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Prints   ")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Completed")
  #define MSG_INFO_PRINT_TIME               _UxGT("Duration ")
#endif
#define MSG_INFO_MIN_TEMP                   _UxGT("Min Temp")
#define MSG_INFO_MAX_TEMP                   _UxGT("Max Temp")
#define MSG_INFO_PSU                        _UxGT("PSU")

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("CHANGE FILAMENT")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("Extrude more")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Resume print")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Wait for start")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("of the filament")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("change")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Wait for")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("filament unload")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Insert filament")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("and press button")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("to continue...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Wait for")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("filament load")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Wait for")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("filament extrude")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Wait for print")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("to resume")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Please wait...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Ejecting...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Insert and Click")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Loading...")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Extruding...")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Resuming...")
#endif

#endif // LANGUAGE_EL_H
