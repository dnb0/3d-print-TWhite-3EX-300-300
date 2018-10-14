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

#ifndef UTF_MAPPER_H
#define UTF_MAPPER_H

#include "language.h"

#if ENABLED(DOGLCD)
  #define HARDWARE_CHAR_OUT(C) u8g.print((char)(C))
#else
  #define HARDWARE_CHAR_OUT(C) lcd.write((char)(C))
#endif

#if DISABLED(SIMULATE_ROMFONT) && ENABLED(DOGLCD)
  #if ENABLED(DISPLAY_CHARSET_ISO10646_1)     \
   || ENABLED(DISPLAY_CHARSET_ISO10646_5)     \
   || ENABLED(DISPLAY_CHARSET_ISO10646_KANA)  \
   || ENABLED(DISPLAY_CHARSET_ISO10646_GREEK) \
   || ENABLED(DISPLAY_CHARSET_ISO10646_TR)
    #define MAPPER_ONE_TO_ONE
  #endif
#else // SIMULATE_ROMFONT || !DOGLCD
  #if DISPLAY_CHARSET_HD44780 == JAPANESE
    #if ENABLED(MAPPER_C2C3)
      const PROGMEM uint8_t utf_recode[] =
           { // 0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f          This is fair for symbols
               0x20,0x3F,0xEC,0xED,0x3F,0x5C,0x7C,0x3F,0x22,0x63,0x61,0x7F,0x3F,0x3F,0x52,0xB0,  // c2a
             //' '        垄    拢         颅     l         "    c    a    芦              R
               0xDF,0x3F,0x32,0x33,0x27,0xE4,0xF1,0xA5,0x2C,0x31,0xDF,0x7E,0x3F,0x3F,0x3F,0x3F,  // c2b but relatively bad for letters.
             // 掳         2    3    `    N    p    .    ,    1    掳    禄
               0x3F,0x3F,0x3F,0x3F,0xE1,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,  // c38
             //                     盲
               0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0xEF,0x78,0x3F,0x3F,0x3F,0x3F,0xF5,0x3F,0x3F,0xE2,  // c39 missing characters display as '?'
             //                               枚    x                        眉              脽
               0x3F,0x3F,0x3F,0x3F,0xE1,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,  // c3a
             //                     盲
               0x3F,0xEE,0x3F,0x3F,0x3F,0x3F,0xEF,0xFD,0x3F,0x3F,0x3F,0x3F,0xF5,0x3F,0x3F,0x3F   // c3b
             //      n                        枚    梅                        眉
           };
    #elif ENABLED(MAPPER_E382E383)
      const PROGMEM uint8_t utf_recode[] =
           { // 0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f
               0x3D,0xB1,0xB1,0xA8,0xB2,0xA9,0xB3,0xAA,0xB4,0xAB,0xB5,0xB6,0xB6,0xB7,0xB7,0xB8,  // e382a Please test and correct
             // =    銈�    銈�    銈�    銈�    銈�    銈�    銈�    銈�    銈�    銈�   銈�    銈�    銈�   銈�    銈�
               0xB8,0xB9,0xB9,0xBA,0xBA,0xBB,0xBB,0xBC,0xBC,0xBD,0xBD,0xBE,0xBE,0xBF,0xBF,0xC0,  // e382b
             // 銈�    銈�    銈�   銈�    銈�    銈�    銈�    銈�    銈�   銈�    銈�    銈�    銈�    銈�   銈�    銈�
               0xC0,0xC1,0xC1,0xC2,0xC2,0xC2,0xC3,0xC3,0xC4,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,  // e3838
             // 銈�    銉�    銉�    銉�    銉�    銉�    銉�   銉�    銉�    銉�    銉�    銉�    銉�    銉�   銉�    銉�
               0xCA,0xCA,0xCB,0xCB,0xCB,0xCC,0xCC,0xCC,0xCD,0xCD,0xCD,0xCE,0xCE,0xCE,0xCF,0xD0,  // e3839
             // 銉�    銉�    銉�   銉�    銉�     銉�    銉�   銉�    銉�    銉�    銉�    銉�    銉�    銉�   銉�    銉�
               0xD1,0xD2,0xD3,0xD4,0xD4,0xD5,0xD5,0xAE,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDC,  // e383a
             // 銉�    銉�    銉�    銉�   銉�    銉�    銉�    銉�    銉�    銉�    銉�    銉�    銉�    銉�   銉�    銉�
               0xEC,0xA7,0xA6,0xDD,0xCC,0x3F,0x3F,0x3F,0x3F,0x3F,0xA6,0xA5,0xB0,0xA4,0xA4,0x3F   // e383b
             // 銉�    銉�    銉�    銉�    銉�    ?    ?   ?    ?    ?    銉�    銉�    銉�    銉�    銉�   ?
           };
    #elif ENABLED(MAPPER_D0D1)
      #error "Cyrillic on a JAPANESE display makes no sense. There are no matching symbols."
    #endif

  #elif DISPLAY_CHARSET_HD44780 == WESTERN
    #if ENABLED(MAPPER_C2C3)
      const PROGMEM uint8_t utf_recode[] =
           { // 0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f   This is relative complete.
               0x20,0xA1,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0x22,0xA9,0xAA,0xAB,0x3F,0x3F,0xAE,0x3F,  // c2a聽隆垄拢陇楼娄搂篓漏陋芦卢颅庐炉
             //' '   隆    垄    拢    陇    楼    娄    搂    "    漏    陋    芦    ?    ?    庐    ?
               0xB0,0xB1,0xB2,0xB3,0x27,0xB5,0xB6,0xB7,0x2C,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF,  // c2b 掳卤虏鲁麓碌露路赂鹿潞禄录陆戮驴
             // 掳    卤    鲁    虏    ?    碌    露    路    ,    鹿    潞    禄    录    陆    戮    驴
               0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,  // c38 脌脕脙脛脜脝脟脠脡脢脣脤脥脦脧
             // 脌    脕    脗    脙    脛    脜    脝    脟    脠    脡    脢    脣    脤    脥    脦    脧
               0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF,  // c39 脨脩脫脭脮脰脳脴脵脷脹脺脻脼脽
             // 脨    脩    脪    脫    脭    脮    脰    脳    脴    脵    脷    脹    脺    脻    脼    脽
               0xE0,0xE1,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,0xEC,0xED,0xEE,0xEF,  // c3a 脿谩茫盲氓忙莽猫茅锚毛矛铆卯茂
             // 脿    谩    芒    茫    盲    氓    忙    莽    猫    茅    锚    毛    矛    铆    卯    茂
               0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF   // c3b 冒帽贸么玫枚梅酶霉煤没眉媒镁每
             // 冒    帽    貌    贸    么    玫    枚    梅    酶    霉    煤    没    眉    媒    镁    每
           };
    #elif ENABLED(MAPPER_D0D1)
      #define MAPPER_D0D1_MOD
      const PROGMEM uint8_t utf_recode[] =
           {//0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f
               0x41,0x80,0x42,0x92,0x81,0x45,0x82,0x83,0x84,0x85,0x4B,0x86,0x4D,0x48,0x4F,0x87,  // d0a
             // A    袘    B    袚    袛    E    袞    袟    袠    袡    K    袥    M    H    O    袩
               0x50,0x43,0x54,0x88,0xD8,0x58,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x62,0x8F,0xAC,0xAD,  // d0b
             // P    C    T    校    肖    X    效    褔    楔    些    歇    蝎    b    协    挟    携
               0x61,0x36,0x42,0x92,0x81,0x65,0x82,0xB3,0x84,0x85,0x6B,0x86,0x4D,0x48,0x6F,0x87,  // d18
             // a    6    B    袚    袛    e    袞    鲁    袠    袡    k    袥    M    H    o    袩
               0x70,0x63,0x54,0x79,0xD8,0x78,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x62,0x8F,0xAC,0xAD   // d19
             // p    c    T    y    肖    x    效    褔    楔    些    歇    蝎    b    协    挟    携
            };
    #elif ENABLED(MAPPER_E382E383)
      #error "Katakana on a WESTERN display makes no sense. There are no matching symbols."
    #endif

  #elif DISPLAY_CHARSET_HD44780 == CYRILLIC
    #if ENABLED(MAPPER_D0D1)
      #define MAPPER_D0D1_MOD
      // it is a Russian alphabet translation
      // except 0401 --> 0xA2 = 衼, 0451 --> 0xB5 = 褢
      const PROGMEM uint8_t utf_recode[] =
               { 0x41,0xA0,0x42,0xA1,0xE0,0x45,0xA3,0xA4,   // unicode U+0400 to U+047f
               // A   袘->衼  B    袚    袛    E    袞    袟      // 0  衻 衼 袀 袃 袆 袇 袉 袊
                 0xA5,0xA6,0x4B,0xA7,0x4D,0x48,0x4F,0xA8,   //    袌 袎 袏 袐 袑 袓 袔 袕
               // 袠    袡    K    袥    M    H    O    袩      // 1  袗 袘 袙 袚 袛 袝 袞 袟
                 0x50,0x43,0x54,0xA9,0xAA,0x58,0xE1,0xAB,   //    袠 袡 袣 袥 袦 袧 袨 袩
               // P    C    T    校    肖    X    效    褔      // 2  袪 小 孝 校 肖 啸 袚 效
                 0xAC,0xE2,0xAD,0xAE,0x62,0xAF,0xB0,0xB1,   //    楔 些 歇 蝎 鞋 协 挟 携
               // 楔    些    歇    蝎    b    协    挟    携      // 3  邪 斜 胁 谐 写 械 卸 蟹
                 0x61,0xB2,0xB3,0xB4,0xE3,0x65,0xB6,0xB7,   //    懈 泄 泻 谢 屑 薪 芯 锌
               // a   斜->褢  胁    谐    写    e    卸    蟹      // 4  褉 褋 褌 褍 褎 褏 褑 褔
                 0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0x6F,0xBE,   //    褕 褖 褗 褘 褜 褝 褞 褟
               // 懈    泄    泻    谢    屑    薪    o    锌      // 5  褠 褢 褣 褤 褦 褧 褨 褩
                 0x70,0x63,0xBF,0x79,0xE4,0x78,0xE5,0xC0,   //    褬 褭 褮 褯 褱 褲 褳 褵
               // p    c    褌    y    褎    x    褑    褔      // 6  褷 选 癣 眩 绚 靴 薛 学
                 0xC1,0xE6,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7    //    血 雪 血 勋 熏 循 旬 询
               // 褕    褖    褗    褘    褜    褝    褞      褟      // 7  寻 驯 巡 殉 汛 训 讯 逊
             };                                             //    鸦 压 押 鸦 鸭 呀 丫 芽
    #elif ENABLED(MAPPER_C2C3)
      #error "Western languages on a CYRILLIC display makes no sense. There are no matching symbols."
    #elif ENABLED(MAPPER_E382E383)
      #error "Katakana on a CYRILLIC display makes no sense. There are no matching symbols."
    #endif
  #else
    #error "Something went wrong in the setting of DISPLAY_CHARSET_HD44780"
  #endif // DISPLAY_CHARSET_HD44780
#endif // SIMULATE_ROMFONT

#define PRINTABLE(C) (((C) & 0xC0u) != 0x80u)

#if ENABLED(MAPPER_C2C3)

  char charset_mapper(const char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_c2 = false;
    uint8_t d = c;
    if (d >= 0x80u) { // UTF-8 handling
      if (d >= 0xC0u && !seen_c2) {
        utf_hi_char = d - 0xC2u;
        seen_c2 = true;
        return 0;
      }
      else if (seen_c2) {
        d &= 0x3Fu;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT(pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT(0x80u + (utf_hi_char << 6) + d);
        #endif
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT(c);
    }
    seen_c2 = false;
    return 1;
  }

#elif ENABLED(MAPPER_C2C3_TR)

  // the C2C3-mapper extended for the 6 altered symbols from C4 and C5 range.

  char charset_mapper(const char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_c2 = false,
                seen_c4 = false,
                seen_c5 = false;
    uint8_t d = c;
    if (d >= 0x80u) { // UTF-8 handling
           if (d == 0xC4u) { seen_c4 = true; return 0; }
      else if (d == 0xC5u) { seen_c5 = true; return 0; }
      else if (d >= 0xC0u && !seen_c2) {
        utf_hi_char = d - 0xC2u;
        seen_c2 = true;
        return 0;
      }
      else if (seen_c4) {
        switch(d) {
          case 0x9Eu: d = 0xD0u; break;
          case 0x9Fu: d = 0xF0u; break;
          case 0xB0u: d = 0xDDu; break;
          case 0xB1u: d = 0xFDu; break;
          default: d = '?';
        }
        HARDWARE_CHAR_OUT(d);
      }
      else if (seen_c5) {
        switch(d) {
          case 0x9Eu: d = 0xDEu; break;
          case 0x9Fu: d = 0xFEu; break;
          default: d = '?';
        }
        HARDWARE_CHAR_OUT(d);
      }
      else if (seen_c2) {
        d &= 0x3Fu;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT(pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT(0x80u + (utf_hi_char << 6) + d);
        #endif
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT(c);
    }
    seen_c2 = seen_c4 = seen_c5 = false;
    return 1;
  }

#elif ENABLED(MAPPER_CECF)

  char charset_mapper(const char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_ce = false;
    uint8_t d = c;
    if (d >= 0x80) { // UTF-8 handling
      if (d >= 0xC0 && !seen_ce) {
        utf_hi_char = d - 0xCE;
        seen_ce = true;
        return 0;
      }
      else if (seen_ce) {
        d &= 0x3F;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT(pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT(0x80 + (utf_hi_char << 6) + d);
        #endif
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT(c);
    }
    seen_ce = false;
    return 1;
  }

#elif ENABLED(MAPPER_CECF)

  char charset_mapper(const char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_ce = false;
    uint8_t d = c;
    if (d >= 0x80) { // UTF-8 handling
      if (d >= 0xC0 && !seen_ce) {
        utf_hi_char = d - 0xCE;
        seen_ce = true;
        return 0;
      }
      else if (seen_ce) {
        d &= 0x3F;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT(pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT(0x80 + (utf_hi_char << 6) + d);
        #endif
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT(c);
    }
    seen_ce = false;
    return 1;
  }

#elif ENABLED(MAPPER_D0D1_MOD)

  char charset_mapper(const char c) {
    // it is a Russian alphabet translation
    // except 0401 --> 0xA2 = 衼, 0451 --> 0xB5 = 褢
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_d5 = false;
    uint8_t d = c;
    if (d >= 0x80) { // UTF-8 handling
      if (d >= 0xD0 && !seen_d5) {
        utf_hi_char = d - 0xD0;
        seen_d5 = true;
        return 0;
      }
      else if (seen_d5) {
        d &= 0x3F;
        if (!utf_hi_char && d == 1) {
          HARDWARE_CHAR_OUT(0xA2); // 衼
        }
        else if (utf_hi_char == 1 && d == 0x11) {
          HARDWARE_CHAR_OUT(0xB5); // 褢
        }
        else {
          HARDWARE_CHAR_OUT(pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x10));
        }
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT(c);
    }
    seen_d5 = false;
    return 1;
  }

#elif ENABLED(MAPPER_D0D1)

  char charset_mapper(const char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_d5 = false;
    uint8_t d = c;
    if (d >= 0x80u) { // UTF-8 handling
      if (d >= 0xD0u && !seen_d5) {
        utf_hi_char = d - 0xD0u;
        seen_d5 = true;
        return 0;
      }
      else if (seen_d5) {
        d &= 0x3Fu;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT(pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT(0xA0u + (utf_hi_char << 6) + d);
        #endif
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT(c);
    }
    seen_d5 = false;
    return 1;
  }

#elif ENABLED(MAPPER_E382E383)

  char charset_mapper(const char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_e3 = false,
                seen_82_83 = false;
    uint8_t d = c;
    if (d >= 0x80) { // UTF-8 handling
      if (d == 0xE3 && !seen_e3) {
        seen_e3 = true;
        return 0;      // eat 0xE3
      }
      else if (d >= 0x82 && seen_e3 && !seen_82_83) {
        utf_hi_char = d - 0x82;
        seen_82_83 = true;
        return 0;
      }
      else if (seen_e3 && seen_82_83) {
        d &= 0x3F;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT(pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT(0x80 + (utf_hi_char << 6) + d);
        #endif
      }
      else
        HARDWARE_CHAR_OUT('?');
    }
    else
      HARDWARE_CHAR_OUT(c);

    seen_e3 = false;
    seen_82_83 = false;
    return 1;
  }

#elif ENABLED(MAPPER_C3C4C5_PL)

  /**
   * 膭 C4 84 = 80
   * 膮 C4 85 = 81
   * 膯 C4 86 = 82
   * 膰 C4 87 = 83
   * 臉 C4 98 = 84
   * 臋 C4 99 = 85
   * 艁 C5 81 = 86
   * 艂 C5 82 = 87
   * 艃 C5 83 = 88
   * 艅 C5 84 = 89
   * 脫 C3 93 = 8A
   * 贸 C3 B3 = 8B
   * 艢 C5 9A = 8C
   * 艣 C5 9B = 8D
   * 殴 C5 B9 = 8E
   * 藕 C5 BA = 8F
   * 呕 C5 BB = 90
   * 偶 C5 BC = 91
   */

  char charset_mapper(const char c) {
    static bool seen_c3 = false,
                seen_c4 = false,
                seen_c5 = false;
    uint8_t d = c;
    if (d >= 0x80u) { // UTF-8 handling
           if (d == 0xC4u) { seen_c4 = true; return 0; }
      else if (d == 0xC5u) { seen_c5 = true; return 0; }
      else if (d == 0xC3u) { seen_c3 = true; return 0; }
      else if (seen_c4) {
        switch(d) {
          case 0x84u ... 0x87u: d -= 4; break;  //膭 - 膰
          case 0x98u ... 0x99u: d -= 20; break; //臉 i 臋
          default: d = '?';
        }
        HARDWARE_CHAR_OUT(d);
      }
      else if (seen_c5) {
        switch(d) {
          case 0x81u ... 0x84u: d += 5; break;  //艁 - 艅
          case 0x9Au ... 0x9Bu: d -= 0x0Eu; break; //艢 i 艣
          case 0xB9u ... 0xBCu: d -= 0x2Bu; break; //殴 - 偶
          default: d = '?';
        }
        HARDWARE_CHAR_OUT(d);
      }
      else if (seen_c3) {
        switch(d) {
          case 0x93u: d = 0x8Au; break; //脫
          case 0xB3u: d = 0x8Bu; break; //贸
          d = '?';
        }
        HARDWARE_CHAR_OUT(d);
      }

    }
    else
      HARDWARE_CHAR_OUT(c);

    seen_c3 = seen_c4 = seen_c5 = false;
    return 1;
  }

#elif ENABLED(MAPPER_C3C4C5_CZ)

  /**
   * 脕 C3 81 = 80
   * 脡 C3 89 = 81
   * 脥 C3 8D = 82
   * 脫 C3 93 = 83
   * 脷 C3 9A = 84
   * 脻 C3 9D = 85
   * 谩 C3 A1 = 86
   * 茅 C3 A9 = 87
   * 铆 C3 AD = 88
   * 贸 C3 B3 = 89
   * 煤 C3 BA = 8A
   * 媒 C3 BD = 8B
   * 膶 C4 8C = 8C
   * 膷 C4 8D = 8D
   * 膸 C4 8E = 8E
   * 膹 C4 8F = 8F
   * 臍 C4 9A = 90
   * 臎 C4 9B = 91
   * 艊 C5 87 = 92
   * 艌 C5 88 = 93
   * 艠 C5 98 = 94
   * 艡 C5 99 = 95
   * 艩 C5 A0 = 96
   * 拧 C5 A1 = 97
   * 扭 C5 A4 = 98
   * 钮 C5 A5 = 99
   * 女 C5 AE = 9A
   * 暖 C5 AF = 9B
   * 沤 C5 BD = 9C
   * 啪 C5 BE = 9D
   */

  char charset_mapper(const char c) {
    static bool seen_c3 = false,
                seen_c4 = false,
                seen_c5 = false;
    uint8_t d = c;
    if (d >= 0x80u) { // UTF-8 handling
           if (d == 0xC4u) { seen_c4 = true; return 0; }
      else if (d == 0xC5u) { seen_c5 = true; return 0; }
      else if (d == 0xC3u) { seen_c3 = true; return 0; }
      else if (seen_c4) {
        switch(d) {
          case 0x8Cu ... 0x8Fu: break;          // 膶膷膸膹 Mapping 1:1
          case 0x9Au ... 0x9Bu: d -= 10; break; // 臍臎
          default: d = '?';
        }
        HARDWARE_CHAR_OUT(d);
      }
      else if (seen_c5) {
        switch(d) {
          case 0x87u ... 0x88u: d += 0x0Bu; break;  // 艊艌
          case 0x98u ... 0x99u: d -= 0x04u; break;  // 艠艡
          case 0xA0u ... 0xA1u: d -= 0x0Au; break;  // 艩拧
          case 0xA4u ... 0xA5u: d -= 0x0Cu; break;  // 扭钮
          case 0xAEu ... 0xAFu: d -= 0x14u; break;  // 女暖
          case 0xBDu ... 0xBEu: d -= 0x21u; break;  // 沤啪
          default: d = '?';
        }
        HARDWARE_CHAR_OUT(d);
      }
      else if (seen_c3) {
        switch(d) {
          case 0x81u: d = 0x80u; break;  // 脕
          case 0x89u: d = 0x81u; break;  // 脡
          case 0x8Du: d = 0x82u; break;  // 脥
          case 0x93u: d = 0x83u; break;  // 脫
          case 0x9Au: d = 0x84u; break;  // 脷
          case 0x9Du: d = 0x85u; break;  // 脻
          case 0xA1u: d = 0x86u; break;  // 谩
          case 0xA9u: d = 0x87u; break;  // 茅
          case 0xADu: d = 0x88u; break;  // 铆
          case 0xB3u: d = 0x89u; break;  // 贸
          case 0xBAu: d = 0x8Au; break;  // 煤
          case 0xBDu: d = 0x8Bu; break;  // 媒
          default: d = '?';
        }
        HARDWARE_CHAR_OUT(d);
      }

    }
    else
      HARDWARE_CHAR_OUT(c);

    seen_c3 = seen_c4 = seen_c5 = false;
    return 1;
  }

#elif ENABLED(MAPPER_C3C4C5_SK)

  /**
   * 脕 C3 81 = 80
   * 脛 C3 84 = 81
   * 脡 C3 89 = 82
   * 脥 C3 8D = 83
   * 脫 C3 93 = 84
   * 脭 C3 94 = 85
   * 脷 C3 9A = 86
   * 脻 C3 9D = 87
   * 谩 C3 A1 = 88
   * 盲 C3 A4 = 89
   * 茅 C3 A9 = 8A
   * 铆 C3 AD = 8B
   * 贸 C3 B3 = 8C
   * 么 C3 B4 = 8D
   * 煤 C3 BA = 8E
   * 媒 C3 BD = 8F
   * 膶 C4 8C = 90
   * 膷 C4 8D = 91
   * 膸 C4 8E = 92
   * 膹 C4 8F = 93
   * 墓 C4 B9 = 94
   * 暮 C4 BA = 95
   * 慕 C4 BD = 96
   * 木 C4 BE = 97
   * 艊 C5 87 = 98
   * 艌 C5 88 = 99
   * 艛 C5 94 = 9A
   * 艜 C5 95 = 9B
   * 艩 C5 A0 = 9C
   * 拧 C5 A1 = 9D
   * 扭 C5 A4 = 9E
   * 钮 C5 A5 = 9F
   * 沤 C5 BD = A0
   * 啪 C5 BE = A1
   */

  char charset_mapper(const char c) {
    static bool seen_c3 = false,
                seen_c4 = false,
                seen_c5 = false;
    uint8_t d = c;
    if (d >= 0x80u) { // UTF-8 handling
           if (d == 0xC4u) { seen_c4 = true; return 0; }
      else if (d == 0xC5u) { seen_c5 = true; return 0; }
      else if (d == 0xC3u) { seen_c3 = true; return 0; }
      else if (seen_c4) {
        switch(d) {
          case 0x8Cu ... 0x8Fu: d += 0x04u; break;  // 膶膷膸膹
          case 0xB9u ... 0xBAu: d -= 0x25u; break;  // 墓暮
          case 0xBDu ... 0xBEu: d -= 0x27u; break;  // 慕木
          default: d = '?';
        }
        HARDWARE_CHAR_OUT(d);
      }
      else if (seen_c5) {
        switch(d) {
          case 0x87u ... 0x88u: d += 0x11u; break;  // 艊艌
          case 0x94u ... 0x95u: d += 0x06u; break;  // 艛艜
          case 0xA0u ... 0xA1u: d -= 0x04u; break;  // 艩拧
          case 0xA4u ... 0xA5u: d -= 0x06u; break;  // 扭钮
          case 0xBDu ... 0xBEu: d -= 0x1Du; break;  // 沤啪
          default: d = '?';
        }
        HARDWARE_CHAR_OUT(d);
      }
      else if (seen_c3) {
        switch(d) {
          case 0x81u: d = 0x80u; break;  // 脕
          case 0x84u: d = 0x81u; break;  // 脛
          case 0x89u: d = 0x82u; break;  // 脡
          case 0x8Du: d = 0x83u; break;  // 脥
          case 0x93u: d = 0x84u; break;  // 脫
          case 0x94u: d = 0x85u; break;  // 脭
          case 0x9Au: d = 0x86u; break;  // 脷
          case 0x9Du: d = 0x87u; break;  // 脻
          case 0xA1u: d = 0x88u; break;  // 谩
          case 0xA4u: d = 0x89u; break;  // 盲
          case 0xA9u: d = 0x8Au; break;  // 茅
          case 0xADu: d = 0x8Bu; break;  // 铆
          case 0xB3u: d = 0x8Cu; break;  // 贸
          case 0xB4u: d = 0x8Du; break;  // 么
          case 0xBAu: d = 0x8Eu; break;  // 煤
          case 0xBDu: d = 0x8Fu; break;  // 媒
          default: d = '?';
        }
        HARDWARE_CHAR_OUT(d);
      }

    }
    else
      HARDWARE_CHAR_OUT(c);

    seen_c3 = seen_c4 = seen_c5 = false;
    return 1;
  }

#else

  #define MAPPER_NON

  #undef PRINTABLE
  #define PRINTABLE(C) true

  char charset_mapper(const char c) {
    HARDWARE_CHAR_OUT(c);
    return 1;
  }

#endif // code mappers

#endif // UTF_MAPPER_H
