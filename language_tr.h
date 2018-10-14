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
 * Turkish
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_TR_H
#define LANGUAGE_TR_H

#define MAPPER_C2C3_TR
#define DISPLAY_CHARSET_ISO10646_TR

#if DISABLED(DOGLCD)
  #error "Turkish needs a graphical display."
#endif

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" haz谋r.")                               // haz谋r.
#define MSG_SD_INSERTED                     _UxGT("SD Yerle艧ti.")                                       // SD Yerle艧ti.
#define MSG_SD_REMOVED                      _UxGT("SD 脟谋kar谋ld谋.")                                      // SD 脟谋kar谋ld谋.
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstops") // Max length 8 characters                // Endstops
#define MSG_MAIN                            _UxGT("Ana")                                                // Ana
#define MSG_BACK                            _UxGT("Geri")                                               // Geri
#define MSG_AUTOSTART                       _UxGT("Otoba艧lat")                                          // Otoba艧lat
#define MSG_DISABLE_STEPPERS                _UxGT("Motorlar谋 Durdur")                                   // Motorlar谋 Durdur
#define MSG_DEBUG_MENU                      _UxGT("Hata Ay谋klama")                                      // Hata Ay谋klama
#define MSG_PROGRESS_BAR_TEST               _UxGT("Durum 脟ubu臒u Testi")                                 // Durum 脟ubu臒u Testi
#define MSG_AUTO_HOME                       _UxGT("Eksenleri S谋f谋rla")                                  // Eksenleri S谋f谋rla
#define MSG_AUTO_HOME_X                     _UxGT("X S谋f谋rla")                                          // X S谋f谋rla
#define MSG_AUTO_HOME_Y                     _UxGT("Y S谋f谋rla")                                          // Y S谋f谋rla
#define MSG_AUTO_HOME_Z                     _UxGT("Z S谋f谋rla")                                          // Z S谋f谋rla
#define MSG_LEVEL_BED_HOMING                _UxGT("XYZ S谋f谋rlan谋yor")                                   // XYZ S谋f谋rlan谋yor
#define MSG_LEVEL_BED_WAITING               _UxGT("Ba艧latmak i莽in t谋kla")                               // Ba艧latmak i莽in t谋kla
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("S谋radaki Nokta")                                     // S谋radaki Nokta
#define MSG_LEVEL_BED_DONE                  _UxGT("Seviyeleme Tamam!")                                  // Seviyeleme Tamam!
#define MSG_SET_HOME_OFFSETS                _UxGT("Offset Ayarla")                                      // Offset Ayarla
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Offset Tamam")                                       // Offset Tamam
#define MSG_SET_ORIGIN                      _UxGT("S谋f谋r Belirle")                                      // S谋f谋r Belirle
#define MSG_PREHEAT_1                       _UxGT("脰n Is谋nma PLA")                                      // 脰n Is谋nma PLA
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")                                    //
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" T眉m")                                 //  T眉m
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" Noz眉l")                               //  Noz眉l
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" Tabla")                               //  Tabla
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" Ayar")                                //  Ayar
#define MSG_PREHEAT_2                       _UxGT("脰n Is谋nma ABS")                                      // 脰n Is谋nma ABS
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")                                    //
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" T眉m")                                 //  T眉m
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" Noz眉l")                               //  Noz眉l
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" Tabla")                               //  Tabla
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" Ayar")                                //  Ayar
#define MSG_COOLDOWN                        _UxGT("So臒ut")                                              // So臒ut
#define MSG_SWITCH_PS_ON                    _UxGT("G眉c眉 A莽")                                            // G眉c眉 A莽
#define MSG_SWITCH_PS_OFF                   _UxGT("G眉c眉 Kapat")                                         // G眉c眉 Kapat
#define MSG_EXTRUDE                         _UxGT("Extrude")                                            // Extrude
#define MSG_RETRACT                         _UxGT("Geri 脟ek")                                           // Geri 脟ek
#define MSG_MOVE_AXIS                       _UxGT("Eksen Y枚net")                                        // Eksenleri Y枚net
#define MSG_BED_LEVELING                    _UxGT("Tabla Seviyele")                                     // Tabla Seviyele
#define MSG_LEVEL_BED                       _UxGT("Tabla Seviyele")                                     // Tabla Seviyele
#define MSG_MOVING                          _UxGT("Konumlan谋yor...")                                    // Konumlan谋yor...
#define MSG_FREE_XY                         _UxGT("Durdur XY")                                          // Durdur XY
#define MSG_MOVE_X                          _UxGT("X")                                                  // X
#define MSG_MOVE_Y                          _UxGT("Y")                                                  // Y
#define MSG_MOVE_Z                          _UxGT("Z")                                                  // Z
#define MSG_MOVE_E                          _UxGT("Ekstruder")                                          // Ekstruder
#define MSG_MOVE_01MM                       _UxGT("0.1mm")                                              // 0.1mm
#define MSG_MOVE_1MM                        _UxGT("1mm")                                                // 1mm
#define MSG_MOVE_10MM                       _UxGT("10mm")                                               // 10mm
#define MSG_SPEED                           _UxGT("H谋z")                                                // H谋z
#define MSG_BED_Z                           _UxGT("Z Mesafesi")                                         // Z Mesafesi
#define MSG_NOZZLE                          _UxGT("Noz眉l")                                              // Noz眉l
#define MSG_BED                             _UxGT("Tabla")                                              // Tabla
#define MSG_FAN_SPEED                       _UxGT("Fan H谋z谋")                                           // Fan H谋z谋
#define MSG_FLOW                            _UxGT("Ak谋艧")                                               // Ak谋艧
#define MSG_CONTROL                         _UxGT("Kontrol")                                            // Kontrol
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")                //  Min
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")                //  Max
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 脟arpan")             //  脟arpan
#define MSG_AUTOTEMP                        _UxGT("Autotemp")                                           //  Autotemp
#define MSG_ON                              _UxGT("On ")                                                // On
#define MSG_OFF                             _UxGT("Off")                                                // Off
#define MSG_PID_P                           _UxGT("PID-P")                                              // PID-P
#define MSG_PID_I                           _UxGT("PID-I")                                              // PID-I
#define MSG_PID_D                           _UxGT("PID-D")                                              // PID-D
#define MSG_PID_C                           _UxGT("PID-C")                                              // PID-C
#define MSG_SELECT                          _UxGT("Se莽")                                                // Se莽
#define MSG_ACC                             _UxGT("陌vme")                                               // 陌vme
#define MSG_JERK                            _UxGT("Jerk")
#define MSG_VX_JERK                         _UxGT("Vx-Jerk")                                            // Vx-Jerk
#define MSG_VY_JERK                         _UxGT("Vy-Jerk")                                            // Vy-Jerk
#define MSG_VZ_JERK                         _UxGT("Vz-jerk")                                            // Vz-Jerk
#define MSG_VE_JERK                         _UxGT("Ve-jerk")                                            // Ve-Jerk
#define MSG_VMAX                            _UxGT("Vmax ")                                              // Vmax
#define MSG_VMIN                            _UxGT("Vmin")                                               // Vmin
#define MSG_VTRAV_MIN                       _UxGT("VTrav min")                                          // Vtrav min
#define MSG_AMAX                            _UxGT("Amax ")                                              // Amax
#define MSG_A_RETRACT                       _UxGT("A-retract")                                          // A-retract
#define MSG_A_TRAVEL                        _UxGT("A-travel")                                           // A-travel
#define MSG_STEPS_PER_MM                    _UxGT("Steps/mm")                                           // Xsteps/mm
#define MSG_XSTEPS                          _UxGT("Xsteps/mm")                                          // Xsteps/mm
#define MSG_YSTEPS                          _UxGT("Ysteps/mm")                                          // Ysteps/mm
#define MSG_ZSTEPS                          _UxGT("Zsteps/mm")                                          // Zsteps/mm
#define MSG_ESTEPS                          _UxGT("Esteps/mm")                                          // Esteps/mm
#define MSG_E1STEPS                         _UxGT("E1steps/mm")                                         // E1steps/mm
#define MSG_E2STEPS                         _UxGT("E2steps/mm")                                         // E2steps/mm
#define MSG_E3STEPS                         _UxGT("E3steps/mm")                                         // E3steps/mm
#define MSG_E4STEPS                         _UxGT("E4steps/mm")                                         // E4steps/mm
#define MSG_E5STEPS                         _UxGT("E5steps/mm")                                         // E4steps/mm
#define MSG_TEMPERATURE                     _UxGT("S谋cakl谋k")                                           // S谋cakl谋k
#define MSG_MOTION                          _UxGT("Hareket")                                            // Hareket
#define MSG_FILAMENT                        _UxGT("Filaman")                                            // Filaman
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")                                           // E in mm3
#define MSG_FILAMENT_DIAM                   _UxGT("Fil. 脟ap")                                           // Fil. 脟ap
#define MSG_ADVANCE_K                       _UxGT("K 陌lerlet")                                          // K 陌lerlet
#define MSG_CONTRAST                        _UxGT("LCD Kontrast")                                       // LCD Kontrast
#define MSG_STORE_EEPROM                    _UxGT("Haf谋zaya Al")                                        // Haf谋zaya Al
#define MSG_LOAD_EEPROM                     _UxGT("Haf谋zadan Y眉kle")                                    // Haf谋zadan Y眉kle
#define MSG_RESTORE_FAILSAFE                _UxGT("Fabrika Ayarlar谋")                                   // Fabrika Ayarlar谋
#define MSG_REFRESH                         _UxGT("Yenile")                                             // Yenile
#define MSG_WATCH                           _UxGT("Bilgi Ekran谋")                                       // Bilgi Ekran谋
#define MSG_PREPARE                         _UxGT("Haz谋rl谋k")                                           // Haz谋rl谋k
#define MSG_TUNE                            _UxGT("Ayar")                                               // Ayar
#define MSG_PAUSE_PRINT                     _UxGT("Duraklat")                                           // Duraklat
#define MSG_RESUME_PRINT                    _UxGT("S眉rd眉r")                                             // S眉rd眉r
#define MSG_STOP_PRINT                      _UxGT("Durdur")                                             // Durdur
#define MSG_CARD_MENU                       _UxGT("SD den Yazd谋r")                                      // SD den Yazd谋r
#define MSG_NO_CARD                         _UxGT("SD Kart Yok")                                        // SD Kart Yok
#define MSG_DWELL                           _UxGT("Uyku...")                                            // Uyku...
#define MSG_USERWAIT                        _UxGT("Operat枚r bekleniyor...")                             // Operat枚r bekleniyor...
#define MSG_RESUMING                        _UxGT("Bask谋 S眉rd眉r眉l眉yor")                                 // Bask谋 S眉rd眉r眉l眉yor
#define MSG_PRINT_ABORTED                   _UxGT("Bask谋 Durduruldu")                                   // Bask谋 Durduruldu
#define MSG_NO_MOVE                         _UxGT("陌艧lem yok.")                                         // 陌艧lem yok.
#define MSG_KILLED                          _UxGT("Kilitlendi. ")                                       // Kilitlendi.
#define MSG_STOPPED                         _UxGT("Durdu. ")                                            // Durdu.
#define MSG_CONTROL_RETRACT                 _UxGT("Geri 脟ek mm")                                        // Geri 脟ek mm
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Swap Re.mm")                                         // Swap Re.mm
#define MSG_CONTROL_RETRACTF                _UxGT("Geri 脟ekme  V")                                      // Geri 脟ekme V
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Hop mm")                                             // Hop mm
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")                                           // UnRet mm
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")                                         // S UnRetmm
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")                                           // UnRet V
#define MSG_AUTORETRACT                     _UxGT("AutoRetr.")                                          // AutoRetr.
#define MSG_FILAMENTCHANGE                  _UxGT("Filaman De臒i艧tir")                                   // Filaman De臒i艧tir
#define MSG_INIT_SDCARD                     _UxGT("Init. SD")                                           // Init. SD
#define MSG_CNG_SDCARD                      _UxGT("SD De臒i艧tir")                                        // SD De臒i艧tir
#define MSG_ZPROBE_OUT                      _UxGT("Z Prob A莽谋k. Tabla")                                 // Z Prob A莽谋k. Tabla
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Self-Test")                                  // BLTouch Self-Test
#define MSG_BLTOUCH_RESET                   _UxGT("S谋f谋rla BLTouch")                                    // S谋f谋rla BLTouch
#define MSG_HOME                            _UxGT("S谋f谋rla")                                            // S谋f谋rla
#define MSG_FIRST                           _UxGT("枚nce")                                               // 脰nce
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z Offset")                                           // Z Offset
#define MSG_BABYSTEP_X                      _UxGT("Miniad谋m X")                                         // Miniad谋m X
#define MSG_BABYSTEP_Y                      _UxGT("Miniad谋m Y")                                         // Miniad谋m Y
#define MSG_BABYSTEP_Z                      _UxGT("Miniad谋m Z")                                         // Miniad谋m Z
#define MSG_ENDSTOP_ABORT                   _UxGT("Endstop iptal")                                      // Endstop iptal
#define MSG_HEATING_FAILED_LCD              _UxGT("Is谋nma ba艧ar谋s谋z")                                   // Is谋nma ba艧ar谋s谋z
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Hata: Ge莽ersiz S谋cakl谋k")                            // Hata: Ge莽ersiz S谋cakl谋k
#define MSG_THERMAL_RUNAWAY                 _UxGT("TERMAL PROBLEM")                                     // TERMAL PROBLEM
#define MSG_ERR_MAXTEMP                     _UxGT("Hata: MAXSICAKLIK")                                  // Hata: MAXSICAKLIK
#define MSG_ERR_MINTEMP                     _UxGT("Hata: MINSICAKLIK")                                  // Hata: MINSICAKLIK
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Hata: MAXSIC. TABLA")                                // Hata: MAXSIC. TABLA
#define MSG_ERR_MINTEMP_BED                 _UxGT("Hata: MINSIC. TABLA")                                // Hata: MINSIC. TABLA
#define MSG_ERR_Z_HOMING                    _UxGT("G28 Z Yap谋lamaz")                                    // G28 Z Yap谋lamaz
#define MSG_HALTED                          _UxGT("YAZICI DURDURULDU")                                  // YAZICI DURDURULDU
#define MSG_PLEASE_RESET                    _UxGT("L眉tfen resetleyin")                                  // L眉tfen resetleyin
#define MSG_SHORT_DAY                       _UxGT("G") // One character only                            // G
#define MSG_SHORT_HOUR                      _UxGT("S") // One character only                            // S
#define MSG_SHORT_MINUTE                    _UxGT("D") // One character only                            // D
#define MSG_HEATING                         _UxGT("Is谋n谋yor...")                                        // Is谋n谋yor...
#define MSG_HEATING_COMPLETE                _UxGT("Is谋nma tamam.")                                      // Is谋nma tamam.
#define MSG_BED_HEATING                     _UxGT("Tabla Is谋n谋yor.")                                    // Tabla Is谋n谋yor.
#define MSG_BED_DONE                        _UxGT("Tabla haz谋r.")                                       // Tabla haz谋r.
#define MSG_DELTA_CALIBRATE                 _UxGT("Delta Kalibrasyonu")                                 // Delta Kalibrasyonu
#define MSG_DELTA_CALIBRATE_X               _UxGT("Ayarla X")                                           // Ayarla X
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Ayarla Y")                                           // Ayarla Y
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Ayarla Z")                                           // Ayarla Z
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Ayarla Merkez")                                      // Ayarla Merkez
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Oto Kalibrasyon")                                    // Oto Kalibrasyon
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Delta Y眉k. Ayarla")                                  // Delta Y眉k. Ayarla
#define MSG_INFO_MENU                       _UxGT("Yaz谋c谋 Hakk谋nda")                                    // Yaz谋c谋 Hakk谋nda
#define MSG_INFO_PRINTER_MENU               _UxGT("Yaz谋c谋 Bilgisi")                                     // Yaz谋c谋 Bilgisi
#define MSG_INFO_STATS_MENU                 _UxGT("陌statistikler")                                      // 陌statistikler
#define MSG_INFO_BOARD_MENU                 _UxGT("Kontrol枚r Bilgisi")                                  // Kontrol Bilgisi
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Termist枚rler")                                       // Termist枚rler
#define MSG_INFO_EXTRUDERS                  _UxGT("Ekstruderler")                                       // Ekstruderler
#define MSG_INFO_BAUDRATE                   _UxGT("陌leti艧im H谋z谋")                                      // 陌leti艧im H谋z谋
#define MSG_INFO_PROTOCOL                   _UxGT("Protokol")                                           // Protokol
#define MSG_CASE_LIGHT                      _UxGT("Ayd谋nlatmay谋")                                       // Ayd谋nlatmay谋 A莽

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Bask谋 Say谋s谋")                                       // Bask谋 Say谋s谋
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Tamamlanan")                                         // Tamamlanan
  #define MSG_INFO_PRINT_TIME               _UxGT("Toplam Bask谋 S眉resi")                                // Toplam Bask谋 S眉resi
  #define MSG_INFO_PRINT_LONGEST            _UxGT("En Uzun Bask谋 S眉resi")                               // En Uzun Bask谋 S眉resi
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Toplam Filaman")                                     // Toplam Filaman
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Bask谋")                                              // Bask谋
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Tamamlanan")                                         // Tamamlanan
  #define MSG_INFO_PRINT_TIME               _UxGT("S眉re")                                               // S眉re
  #define MSG_INFO_PRINT_LONGEST            _UxGT("En Uzun")                                            // En Uzun
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Filaman")                                            // Filaman
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("Min S谋c.")                                           // Min S谋cak.
#define MSG_INFO_MAX_TEMP                   _UxGT("Max S谋c.")                                           // Max S谋cak.
#define MSG_INFO_PSU                        _UxGT("G眉莽 Kayna臒谋")                                        // G眉莽 Kayna臒谋

#define MSG_DRIVE_STRENGTH                  _UxGT("S眉r眉c眉 G眉c眉")                                        // S眉r眉c眉 G眉c眉
#define MSG_DAC_PERCENT                     _UxGT("S眉r眉c眉 %")                                           // S眉r眉c眉 %
#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("Se莽enekler:")                                        // Se莽enekler:
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("Daha Ak谋t")                                          // Daha Ak谋t
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Bask谋y谋 s眉rd眉r")                                     // Bask谋y谋 s眉rd眉r
#define MSG_FILAMENT_CHANGE_MINTEMP         _UxGT("Min. S谋cakl谋k")                                      // Min. S谋cakl谋k:
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Noz眉l: ")                                          //   Noz眉l:

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Ba艧lama bekleniyor")                               // Ba艧lama bekleniyor
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("filaman谋n")                                        // filaman谋n
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("de臒i艧imi")                                         // de臒i艧imi
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Bekleniyor")                                       // Bekleniyor
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("filaman谋n 莽谋kmas谋")                                // filaman谋n 莽谋kmas谋
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Filaman谋 y眉kle")                                   // Filaman谋 y眉kle
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("ve devam i莽in")                                    // ve devam i莽in
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("tu艧a bas...")                                      // tu艧a bas...
  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Noz眉l眉 Is谋tmak i莽in")                              // Noz眉l眉 Is谋tmak i莽in
  #define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("Butona Bas.")                                      // Butona Bas.
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Noz眉l Is谋n谋yor")                                   // Noz眉l Is谋n谋yor
  #define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("L眉tfen Bekleyin...")                               // L眉tfen Bekleyin...
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Bekleniyor")                                       // Bekleniyor
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("filaman谋n y眉klenmesi")                             // filaman谋n y眉klenmesi
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Bekleniyor")                                       // Bekleniyor
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("filaman akmas谋")                                   // filaman akmas谋
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Bask谋n谋n s眉rd眉r眉lmesini")                          // Bask谋n谋n s眉rd眉r眉lmesini
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("bekle")                                            // bekle
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("L眉tfen bekleyiniz...")                             // L眉tfen bekleyiniz...
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("脟谋kart谋l谋yor...")                                  // 脟谋kart谋l谋yor...
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Y眉kle ve bas")                                     // Y眉kle ve bas
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Y眉kl眉yor...")                                      // Y眉kl眉yor...
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Ak谋t谋l谋yor...")                                    // Ak谋t谋l谋yor...
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("S眉rd眉r眉l眉yor...")                                  // S眉rd眉r眉l眉yor...
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_TR_H
