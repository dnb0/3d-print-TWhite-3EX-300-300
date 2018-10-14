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
 * Traditional Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_ZH_TW_H
#define LANGUAGE_ZH_TW_H

#define WELCOME_MSG                         MACHINE_NAME _UxGT("宸插氨绶�.")  //" ready."
#define MSG_SD_INSERTED                     _UxGT("瑷樻喍鍗″凡鎻掑叆")  //"Card inserted"
#define MSG_SD_REMOVED                      _UxGT("瑷樻喍鍗¤鎷斿嚭")  //"Card removed"
#define MSG_LCD_ENDSTOPS                    _UxGT("鎿嬪")  //"Endstops" // Max length 8 characters
#define MSG_MAIN                            _UxGT("涓婚伕鍠�")  //"Main"
#define MSG_AUTOSTART                       _UxGT("鑷嫊闁嬪")  //"Autostart"
#define MSG_DISABLE_STEPPERS                _UxGT("闂滈枆姝ラ�查Μ閬�")  //"Disable steppers"
#define MSG_AUTO_HOME                       _UxGT("鑷嫊鍥炲師榛�")  //"Auto home"
#define MSG_AUTO_HOME_X                     _UxGT("鍥瀀鍘熼粸")  //"Home X"
#define MSG_AUTO_HOME_Y                     _UxGT("鍥瀁鍘熼粸")  //"Home Y"
#define MSG_AUTO_HOME_Z                     _UxGT("鍥瀂鍘熼粸")  //"Home Z"
#define MSG_LEVEL_BED_HOMING                _UxGT("骞冲彴瑾垮钩XYZ姝稿師榛�")  //"Homing XYZ"
#define MSG_LEVEL_BED_WAITING               _UxGT("鍠搳闁嬪鐔卞簥瑾垮钩")  //"Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("涓嬪�嬬啽搴婅骞抽粸")  //"Next Point"
#define MSG_LEVEL_BED_DONE                  _UxGT("瀹屾垚鐔卞簥瑾垮钩")  //"Leveling Done!"
#define MSG_SET_HOME_OFFSETS                _UxGT("瑷疆鍘熼粸鍋忕Щ")  //"Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("鍋忕Щ宸插暉鐢�")  //"Offsets applied"
#define MSG_SET_ORIGIN                      _UxGT("瑷疆鍘熼粸")  //"Set origin"
#define MSG_PREHEAT_1                       _UxGT("闋愮啽PLA")  //"Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")  //MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" 鍏ㄩ儴")  //MSG_PREHEAT_1 " All"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" 鐔卞簥")  //MSG_PREHEAT_1 " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" 瑷疆")  //MSG_PREHEAT_1 " conf"
#define MSG_PREHEAT_2                       _UxGT("闋愮啽ABS")  //"Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")  //MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" 鍏ㄩ儴")  //MSG_PREHEAT_2 " All"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" 鐔卞簥")  //MSG_PREHEAT_2 " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" 瑷疆")  //MSG_PREHEAT_2 " conf"
#define MSG_COOLDOWN                        _UxGT("闄嶆韩")  //"Cooldown"
#define MSG_SWITCH_PS_ON                    _UxGT("闆绘簮鎵撻枊")  //"Switch power on"
#define MSG_SWITCH_PS_OFF                   _UxGT("闆绘簮闂滈枆")  //"Switch power off"
#define MSG_EXTRUDE                         _UxGT("鎿犲嚭")  //"Extrude"
#define MSG_RETRACT                         _UxGT("鍥炵府")  //"Retract"
#define MSG_MOVE_AXIS                       _UxGT("绉诲嫊杌�")  //"Move axis"
#define MSG_BED_LEVELING                    _UxGT("瑾垮钩鐔卞簥")  //"Bed leveling"
#define MSG_LEVEL_BED                       _UxGT("瑾垮钩鐔卞簥")  //"Level bed"
#define MSG_MOVE_X                          _UxGT("绉诲嫊X")  //"Move X"
#define MSG_MOVE_Y                          _UxGT("绉诲嫊Y")  //"Move Y"
#define MSG_MOVE_Z                          _UxGT("绉诲嫊Z")  //"Move Z"
#define MSG_MOVE_E                          _UxGT("鎿犲嚭姗�")  //"Extruder"
#define MSG_MOVE_01MM                       _UxGT("绉诲嫊 0.1 mm")  //"Move 0.1mm"
#define MSG_MOVE_1MM                        _UxGT("绉诲嫊 1 mm")  //"Move 1mm"
#define MSG_MOVE_10MM                       _UxGT("绉诲嫊 10 mm")  //"Move 10mm"
#define MSG_SPEED                           _UxGT("閫熺巼")  //"Speed"
#define MSG_BED_Z                           _UxGT("鐔卞簥Z")  //"Bed Z"
#define MSG_NOZZLE                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 鍣村槾")  //"Nozzle" 鍣村槾
#define MSG_BED                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 鐔卞簥")  //"Bed"
#define MSG_FAN_SPEED                       _UxGT("棰ㄦ墖閫熺巼")  //"Fan speed"
#define MSG_FLOW                            _UxGT("鎿犲嚭閫熺巼")  //"Flow"
#define MSG_CONTROL                         _UxGT("鎺у埗")  //"Control"
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 鏈�灏�") //" " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 鏈�澶�")  //" " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 绯绘暩")  //" " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        _UxGT("鑷嫊鎺ф韩")  //"Autotemp"
#define MSG_ON                              _UxGT("闁� ")  //"On "
#define MSG_OFF                             _UxGT("闂� ")  //"Off"
#define MSG_PID_P                           _UxGT("PID-P")  //"PID-P"
#define MSG_PID_I                           _UxGT("PID-I")  //"PID-I"
#define MSG_PID_D                           _UxGT("PID-D")  //"PID-D"
#define MSG_PID_C                           _UxGT("PID-C")  //"PID-C"
#define MSG_SELECT                          _UxGT("閬告搰")  //"Select"
#define MSG_ACC                             _UxGT("鍔犻�熷害")  //"Accel" acceleration
#define MSG_JERK                            _UxGT("鎶栧嫊閫熺巼")  //"Jerk"
#define MSG_VX_JERK                         _UxGT("X杌告姈鍕曢�熺巼")  //"Vx-jerk"
#define MSG_VY_JERK                         _UxGT("Y杌告姈鍕曢�熺巼")  //"Vy-jerk"
#define MSG_VZ_JERK                         _UxGT("Z杌告姈鍕曢�熺巼")  //"Vz-jerk"
#define MSG_VE_JERK                         _UxGT("鎿犲嚭姗熸姈鍕曢�熺巼")  //"Ve-jerk"
#define MSG_VMAX                            _UxGT("鏈�澶ч�叉枡閫熺巼")  //"Vmax " max_feedrate_mm_s
#define MSG_VMIN                            _UxGT("鏈�灏忛�叉枡閫熺巼")  //"Vmin"  min_feedrate_mm_s
#define MSG_VTRAV_MIN                       _UxGT("鏈�灏忕Щ鍕曢�熺巼")  //"VTrav min" min_travel_feedrate_mm_s, (target) speed of the move
#define MSG_AMAX                            _UxGT("鏈�澶у垪鍗板姞閫熷害")  //"Amax " max_acceleration_mm_per_s2, acceleration in units/s^2 for print moves
#define MSG_A_RETRACT                       _UxGT("鍥炵府鍔犻�熷害")  //"A-retract" retract_acceleration, E acceleration in mm/s^2 for retracts
#define MSG_A_TRAVEL                        _UxGT("闈炲垪鍗扮Щ鍕曞姞閫熷害")  //"A-travel" travel_acceleration, X, Y, Z acceleration in mm/s^2 for travel (non printing) moves
#define MSG_STEPS_PER_MM                    _UxGT("杌告鏁�/mm")  //"Steps/mm" axis_steps_per_mm, axis steps-per-unit G92
#define MSG_XSTEPS                          _UxGT("X杌告鏁�/mm")  //"Xsteps/mm" axis_steps_per_mm, axis steps-per-unit G92
#define MSG_YSTEPS                          _UxGT("Y杌告鏁�/mm")  //"Ysteps/mm"
#define MSG_ZSTEPS                          _UxGT("Z杌告鏁�/mm")  //"Zsteps/mm"
#define MSG_ESTEPS                          _UxGT("鎿犲嚭姗熸鏁�/mm")  //"Esteps/mm"
#define MSG_TEMPERATURE                     _UxGT("婧害")  //"Temperature"
#define MSG_MOTION                          _UxGT("閬嬩綔")  //"Motion"
#define MSG_FILAMENT                        _UxGT("绲叉枡娓")  //"Filament" lcd_control_volumetric_menu
#define MSG_VOLUMETRIC_ENABLED              _UxGT("娓绌峬m鲁")  //"E in mm3" volumetric_enabled
#define MSG_FILAMENT_DIAM                   _UxGT("绲叉枡鐩村緫")  //"Fil. Dia."
#define MSG_CONTRAST                        _UxGT("LCD灏嶆瘮搴�")  //"LCD contrast"
#define MSG_STORE_EEPROM                    _UxGT("淇濆瓨瑷疆")  //"Store memory"
#define MSG_LOAD_EEPROM                     _UxGT("杓夊叆瑷疆")  //"Load memory"
#define MSG_RESTORE_FAILSAFE                _UxGT("鎭㈠京瀹夊叏鍊�")  //"Restore failsafe"
#define MSG_REFRESH                         _UxGT("鍒锋柊")  //"Refresh"
#define MSG_WATCH                           _UxGT("璩囪▕鐣岄潰")  //"Info screen"
#define MSG_PREPARE                         _UxGT("婧栧倷")  //"Prepare"
#define MSG_TUNE                            _UxGT("瑾挎暣")  //"Tune"
#define MSG_PAUSE_PRINT                     _UxGT("鏆仠鍒楀嵃")  //"Pause print"
#define MSG_RESUME_PRINT                    _UxGT("鎭㈠京鍒楀嵃")  //"Resume print"
#define MSG_STOP_PRINT                      _UxGT("鍋滄鍒楀嵃")  //"Stop print"
#define MSG_CARD_MENU                       _UxGT("寰炶鎲跺崱涓婂垪鍗�")  //"Print from SD"
#define MSG_NO_CARD                         _UxGT("鐒¤鎲跺崱")  //"No SD card"
#define MSG_DWELL                           _UxGT("浼戠湢 ...")  //"Sleep..."
#define MSG_USERWAIT                        _UxGT("绛夊緟鐢ㄦ埗 ...")  //"Wait for user..."
#define MSG_RESUMING                        _UxGT("鎭㈠京鍒楀嵃涓�")  //"Resuming print"
#define MSG_PRINT_ABORTED                   _UxGT("鍒楀嵃宸插彇娑�")  //"Print aborted"
#define MSG_NO_MOVE                         _UxGT("鐒＄Щ鍕�")  //"No move."
#define MSG_KILLED                          _UxGT("宸茬爫鎺�")  //"KILLED. "
#define MSG_STOPPED                         _UxGT("宸插仠姝�")  //"STOPPED. "
#define MSG_CONTROL_RETRACT                 _UxGT("鍥炵府闀峰害mm")  //"Retract mm" retract_length, retract length (positive mm)
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("鎻涙墜鍥炴娊闀峰害mm")  //"Swap Re.mm" swap_retract_length, swap retract length (positive mm), for extruder change
#define MSG_CONTROL_RETRACTF                _UxGT("鍥炵府閫熺巼mm/s")  //"Retract  V" retract_feedrate_mm_s, feedrate for retracting (mm/s)
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Hop mm")  //"Hop mm" retract_zlift, retract Z-lift
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("鍥炵府鎭㈠京闀峰害mm")  //"UnRet +mm" retract_recover_length, additional recover length (mm, added to retract length when recovering)
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("鎻涙墜鍥炵府鎭㈠京闀峰害mm")  //"S UnRet+mm" swap_retract_recover_length, additional swap recover length (mm, added to retract length when recovering from extruder change)
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("鍥炵府鎭㈠京寰岄�叉枡閫熺巼mm/s")  //"UnRet  V" retract_recover_feedrate_mm_s, feedrate for recovering from retraction (mm/s)
#define MSG_AUTORETRACT                     _UxGT("鑷嫊鍥炵府")  //"AutoRetr." autoretract_enabled,
#define MSG_FILAMENTCHANGE                  _UxGT("鏇存彌绲叉枡")  //"Change filament"
#define MSG_INIT_SDCARD                     _UxGT("鍒濆鍖栬鎲跺崱")  //"Init. SD card"
#define MSG_CNG_SDCARD                      _UxGT("鏇存彌瑷樻喍鍗�")  //"Change SD card"
#define MSG_ZPROBE_OUT                      _UxGT("Z鎺㈤嚌鍦ㄧ啽搴婁箣澶�")  //"Z probe out. bed" Z probe is not within the physical limits
#define MSG_HOME                            _UxGT("姝镐綅")  //"Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("鍏�")  //"first"
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z鍋忕Щ")  //"Z Offset"
#define MSG_BABYSTEP_X                      _UxGT("寰噺瑾挎暣X杌�")  //"Babystep X" lcd_babystep_x, Babystepping enables the user to control the axis in tiny amounts
#define MSG_BABYSTEP_Y                      _UxGT("寰噺瑾挎暣Y杌�")  //"Babystep Y"
#define MSG_BABYSTEP_Z                      _UxGT("寰噺瑾挎暣Z杌�")  //"Babystep Z"
#define MSG_ENDSTOP_ABORT                   _UxGT("鎿嬪绲傛")  //"Endstop abort"
#define MSG_HEATING_FAILED_LCD              _UxGT("鍔犵啽澶辨晽")  //"Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("閷锛歊EDUNDANT TEMP")  //"Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 _UxGT("婧帶澶辨帶")  //"THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     _UxGT("閷锛氭渶楂樻韩搴�")  //"Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     _UxGT("閷锛氭渶浣庢韩搴�")  //"Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 _UxGT("閷锛氭渶楂樼啽搴婃韩搴�")  //"Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 _UxGT("閷锛氭渶浣庣啽搴婃韩搴�")  //"Err: MINTEMP BED"
#define MSG_HALTED                          _UxGT("鍗拌〃姗熷仠姗�")  //"PRINTER HALTED"
#define MSG_PLEASE_RESET                    _UxGT("璜嬮噸缃�")  //"Please reset"
#define MSG_SHORT_DAY                       _UxGT("澶�")  //"d" // One character only
#define MSG_SHORT_HOUR                      _UxGT("鏅�")  //"h" // One character only
#define MSG_SHORT_MINUTE                    _UxGT("鍒�")  //"m" // One character only
#define MSG_HEATING                         _UxGT("鍔犵啽涓� ...")  //"Heating..."
#define MSG_HEATING_COMPLETE                _UxGT("瀹屾垚鍔犵啽")  //"Heating done."
#define MSG_BED_HEATING                     _UxGT("鍔犵啽鐔卞簥涓�")  //"Bed Heating."
#define MSG_BED_DONE                        _UxGT("瀹屾垚鍔犵啽鐔卞簥")  //"Bed done."
#define MSG_DELTA_CALIBRATE                 _UxGT("鈯挎牎婧�")  //"Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               _UxGT("鏍℃簴X")  //"Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               _UxGT("鏍℃簴Y")  //"Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               _UxGT("鏍℃簴Z")  //"Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("鏍℃簴涓績")  //"Calibrate Center"

#define MSG_INFO_MENU                       _UxGT("闂滄柤鍗拌〃姗�")  //"About Printer"
#define MSG_INFO_PRINTER_MENU               _UxGT("鍗拌〃姗熻▕鎭�")  //"Printer Info"
#define MSG_INFO_STATS_MENU                 _UxGT("鍗拌〃姗熺当瑷�")  //"Printer Stats"
#define MSG_INFO_BOARD_MENU                 _UxGT("涓绘澘瑷婃伅")  //"Board Info"
#define MSG_INFO_THERMISTOR_MENU            _UxGT("婧害瑷�")  //"Thermistors"
#define MSG_INFO_EXTRUDERS                  _UxGT("鎿犲嚭姗�")  //"Extruders"
#define MSG_INFO_BAUDRATE                   _UxGT("鍌宠几鐜�")  //"Baud"
#define MSG_INFO_PROTOCOL                   _UxGT("鍗旇")  //"Protocol"

#if LCD_WIDTH > 19
#define MSG_INFO_PRINT_COUNT              _UxGT("鍒楀嵃瑷堟暩")  //"Print Count"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("宸插畬鎴�")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("绺藉垪鍗版檪闁�")  //"Total print time"
#define MSG_INFO_PRINT_LONGEST            _UxGT("鏈�闀峰伐浣滄檪闁�")  //"Longest job time"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("绺借▓鎿犲嚭")  //"Extruded total"
#else
#define MSG_INFO_PRINT_COUNT              _UxGT("鍒楀嵃鏁�")  //"Prints"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("瀹屾垚")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("绺藉叡")  //"Total"
#define MSG_INFO_PRINT_LONGEST            _UxGT("鏈�闀�")  //"Longest"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("宸叉摖鍑�")  //"Extruded"
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("鏈�浣庢韩搴�")  //"Min Temp"
#define MSG_INFO_MAX_TEMP                   _UxGT("鏈�楂樻韩搴�")  //"Max Temp"
#define MSG_INFO_PSU                        _UxGT("闆绘簮渚涙噳")  //"Power Supply"

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("鎿犲嚭鏇村")  //"Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("鎭㈠京鍒楀嵃")  //"Resume print"

#if LCD_HEIGHT >= 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("绛夊緟闁嬪")  //"Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("绲叉枡")  //"of the filament"
#define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("璁婃洿")  //"change"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("绛夊緟")  //"Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("鍗镐笅绲叉枡")  //"filament unload"
#define MSG_FILAMENT_CHANGE_UNLOAD_3        _UxGT("")  //""
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("鎻掑叆绲叉枡")  //"Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("涓︽寜閸�")  //"and press button"
#define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("绻肩簩 ...")  //"to continue..."
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("绛夊緟")  //"Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("閫叉枡")  //"filament load"
#define MSG_FILAMENT_CHANGE_LOAD_3          _UxGT("")  //""
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("绛夊緟")  //"Wait for"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("绲叉枡鎿犲嚭")  //"filament extrude"
#define MSG_FILAMENT_CHANGE_EXTRUDE_3       _UxGT("")  //""
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("绛夊緟鍒楀嵃")  //"Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("鎭㈠京")  //"to resume"
#define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("")  //""

#else // LCD_HEIGHT < 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("璜嬬瓑寰� ...")  //"Please wait..."
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("閫�鍑轰腑 ...")  //"Ejecting..."
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("鎻掑叆涓﹂粸鎿�")  //"Insert and Click"
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("杓夊叆涓� ...")  //"Loading..."
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("鎿犲嚭涓� ...")  //"Extruding..."
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("鎭㈠京涓� ...")  //"Resuming..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_ZH_TW_H
