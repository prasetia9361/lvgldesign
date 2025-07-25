/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: --user-data-dir=C:\Users\ACER\AppData\Roaming\eezstudio --app-path=C:\Users\ACER\AppData\Local\Programs\eezstudio\resources\app.asar --no-sandbox --no-zygote --node-integration-in-worker --lang=en-US --device-scale-factor=1.5 --num-raster-threads=4 --enable-main-frame-before-activation --renderer-client-id=5 --time-ticks-at-unix-epoch=-1752585452703512 --launch-time-ticks=259519894848 --mojo-platform-channel-handle=2592 --field-trial-handle=1668,i,9806301549760338575,13850132661832984463,262144 --enable-features=kWebSQLAccess --disable-features=SpareRendererForSitePerProcess,WinDelaySpellcheckServiceInit,WinRetrieveSuggestionsOnlyOnDemand --variations-seed-version /prefetch:1
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef UI_FONT_INCONSOLATA_16
#define UI_FONT_INCONSOLATA_16 1
#endif

#if UI_FONT_INCONSOLATA_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xb, 0x70, 0xea, 0xe, 0x90, 0xd8, 0xc, 0x70,
    0xb6, 0xa, 0x50, 0x94, 0x1, 0x0, 0xd8, 0xd,
    0x80,

    /* U+0022 "\"" */
    0xd6, 0x6d, 0xd6, 0x6d, 0xc5, 0x6c, 0xa4, 0x4a,
    0x41, 0x14,

    /* U+0023 "#" */
    0x0, 0x4b, 0x9, 0x60, 0x0, 0x69, 0xa, 0x50,
    0x0, 0x77, 0xc, 0x30, 0x4c, 0xed, 0xcf, 0xc7,
    0x0, 0xb3, 0xf, 0x0, 0x0, 0xc2, 0x1e, 0x0,
    0x0, 0xe0, 0x2c, 0x0, 0x6b, 0xfb, 0xce, 0xb3,
    0x1, 0xd0, 0x69, 0x0, 0x3, 0xb0, 0x87, 0x0,
    0x5, 0x90, 0xa5, 0x0,

    /* U+0024 "$" */
    0x0, 0x3, 0xb0, 0x0, 0x0, 0x7d, 0xfc, 0x30,
    0x6, 0xb5, 0xb5, 0xc0, 0xb, 0x63, 0xb0, 0x0,
    0x7, 0xd6, 0xb0, 0x0, 0x0, 0x9f, 0xd5, 0x0,
    0x0, 0x4, 0xdd, 0xb0, 0x0, 0x3, 0xb0, 0xe4,
    0x1, 0x3, 0xb0, 0xc4, 0xd, 0x75, 0xb7, 0xd0,
    0x2, 0xae, 0xfa, 0x10, 0x0, 0x3, 0xb0, 0x0,

    /* U+0025 "%" */
    0xa, 0xc4, 0x1, 0xd0, 0x58, 0x1d, 0x8, 0x60,
    0x87, 0xf, 0x1d, 0x0, 0x5a, 0x3d, 0x86, 0x0,
    0xa, 0xe5, 0xc0, 0x0, 0x0, 0x8, 0x60, 0x0,
    0x0, 0x1c, 0x0, 0x0, 0x0, 0x85, 0x2d, 0xc1,
    0x1, 0xc0, 0xb4, 0x69, 0x8, 0x50, 0xb2, 0x49,
    0x1c, 0x0, 0x3b, 0xb2,

    /* U+0026 "&" */
    0x0, 0x9f, 0xc1, 0x0, 0x5, 0xd1, 0x9a, 0x0,
    0x8, 0x90, 0x4c, 0x0, 0x3, 0xe0, 0x97, 0x0,
    0x0, 0xbd, 0xc0, 0x0, 0x3, 0xef, 0x50, 0x0,
    0xd, 0x65, 0xe1, 0x75, 0x4e, 0x0, 0xaa, 0xd4,
    0x6d, 0x0, 0x1f, 0xa0, 0x2f, 0x62, 0xad, 0xe1,
    0x5, 0xee, 0x90, 0x94, 0x0, 0x0, 0x0, 0x0,

    /* U+0027 "'" */
    0xaa, 0xa9, 0x99, 0x77, 0x22,

    /* U+0028 "(" */
    0x0, 0x0, 0x22, 0x0, 0x5, 0xf5, 0x0, 0x4f,
    0x40, 0x0, 0xe6, 0x0, 0x7, 0xd0, 0x0, 0xc,
    0x60, 0x0, 0xf, 0x30, 0x0, 0xf, 0x10, 0x0,
    0xf, 0x30, 0x0, 0xc, 0x60, 0x0, 0x7, 0xc0,
    0x0, 0x1, 0xf4, 0x0, 0x0, 0x5e, 0x20, 0x0,
    0x7, 0xf4, 0x0, 0x0, 0x44,

    /* U+0029 ")" */
    0x4, 0x0, 0x0, 0xd, 0xb0, 0x0, 0x1, 0xcb,
    0x0, 0x0, 0x1e, 0x60, 0x0, 0x6, 0xe0, 0x0,
    0x0, 0xf3, 0x0, 0x0, 0xc6, 0x0, 0x0, 0xa7,
    0x0, 0x0, 0xc6, 0x0, 0x0, 0xe3, 0x0, 0x5,
    0xe0, 0x0, 0xd, 0x70, 0x0, 0xac, 0x0, 0xb,
    0xd1, 0x0, 0x8, 0x0, 0x0,

    /* U+002A "*" */
    0x0, 0x8, 0x90, 0x0, 0x1, 0x7, 0x80, 0x0,
    0x2f, 0x87, 0x78, 0xe2, 0x1, 0x7e, 0xe7, 0x10,
    0x0, 0x3c, 0xc3, 0x0, 0x1, 0xe3, 0x3e, 0x10,
    0x5, 0x80, 0x9, 0x40, 0x0, 0x0, 0x0, 0x0,

    /* U+002B "+" */
    0x0, 0x1, 0x10, 0x0, 0x0, 0x7, 0x90, 0x0,
    0x0, 0x7, 0x90, 0x0, 0x0, 0x7, 0x90, 0x0,
    0x4e, 0xef, 0xfe, 0xe4, 0x1, 0x18, 0x91, 0x10,
    0x0, 0x7, 0x90, 0x0, 0x0, 0x7, 0x90, 0x0,

    /* U+002C "," */
    0xd, 0x80, 0xdd, 0x6, 0xa0, 0xc2, 0x14, 0x0,

    /* U+002D "-" */
    0x3f, 0xff, 0xf3, 0x2, 0x22, 0x20,

    /* U+002E "." */
    0xd, 0x70, 0xd8,

    /* U+002F "/" */
    0x0, 0x0, 0x2, 0x0, 0x0, 0x5c, 0x0, 0x0,
    0xc6, 0x0, 0x3, 0xe0, 0x0, 0xa, 0x80, 0x0,
    0x1f, 0x10, 0x0, 0x8a, 0x0, 0x0, 0xe3, 0x0,
    0x5, 0xc0, 0x0, 0xc, 0x50, 0x0, 0x3e, 0x0,
    0x0, 0xa7, 0x0, 0x0, 0x71, 0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0x6e, 0xe6, 0x0, 0x4, 0xe3, 0x3e, 0x40,
    0xb, 0x80, 0xb, 0xd0, 0xe, 0x30, 0xf, 0xf0,
    0xf, 0x10, 0xa6, 0xf0, 0x1f, 0x16, 0x81, 0xf1,
    0xf, 0x4b, 0x1, 0xf0, 0xf, 0xf2, 0x3, 0xe0,
    0xd, 0xd0, 0x7, 0xb0, 0x4, 0xe3, 0x3e, 0x40,
    0x0, 0x7e, 0xe6, 0x0,

    /* U+0031 "1" */
    0x2, 0xbc, 0x5e, 0xcc, 0x0, 0x5c, 0x0, 0x5c,
    0x0, 0x5c, 0x0, 0x5c, 0x0, 0x5c, 0x0, 0x5c,
    0x0, 0x5c, 0x0, 0x5c, 0x0, 0x5c,

    /* U+0032 "2" */
    0x0, 0x8e, 0xfa, 0x0, 0xa, 0xb2, 0x1b, 0x90,
    0x8, 0x0, 0x4, 0xe0, 0x0, 0x0, 0x4, 0xe0,
    0x0, 0x0, 0x8, 0xb0, 0x0, 0x0, 0x1e, 0x40,
    0x0, 0x0, 0xb9, 0x0, 0x0, 0x9, 0xc0, 0x0,
    0x0, 0x7d, 0x10, 0x0, 0x5, 0xe2, 0x0, 0x10,
    0xd, 0xff, 0xff, 0xf0,

    /* U+0033 "3" */
    0x1a, 0xee, 0x70, 0x37, 0x13, 0xf4, 0x0, 0x0,
    0xb7, 0x0, 0x0, 0xd5, 0x0, 0x5a, 0xb0, 0x1,
    0xbe, 0x90, 0x0, 0x0, 0xb7, 0x0, 0x0, 0x6c,
    0x0, 0x0, 0x7b, 0xa8, 0x12, 0xe6, 0x3b, 0xfe,
    0x70,

    /* U+0034 "4" */
    0x0, 0x0, 0x1e, 0x40, 0x0, 0x0, 0xaf, 0x40,
    0x0, 0x4, 0xde, 0x40, 0x0, 0xd, 0x3e, 0x40,
    0x0, 0x89, 0xe, 0x40, 0x3, 0xe1, 0xe, 0x40,
    0xd, 0x50, 0xe, 0x40, 0x3f, 0xff, 0xff, 0xf8,
    0x0, 0x0, 0xe, 0x40, 0x0, 0x0, 0xe, 0x40,
    0x0, 0x0, 0xe, 0x40,

    /* U+0035 "5" */
    0x5f, 0xff, 0xfc, 0x6, 0xa1, 0x11, 0x0, 0x79,
    0x0, 0x0, 0x8, 0x80, 0x0, 0x0, 0x9d, 0xee,
    0x90, 0x8, 0x91, 0x2c, 0x90, 0x0, 0x0, 0x3f,
    0x0, 0x0, 0x0, 0xf1, 0x10, 0x0, 0x3f, 0xb,
    0xa2, 0x2c, 0x90, 0x1a, 0xfe, 0x90, 0x0,

    /* U+0036 "6" */
    0x2, 0xbf, 0xc4, 0x0, 0xd8, 0x16, 0x60, 0x6b,
    0x0, 0x0, 0xa, 0x60, 0x0, 0x0, 0xd6, 0xbd,
    0x80, 0xe, 0xd5, 0x3c, 0x70, 0xe5, 0x0, 0x3d,
    0xc, 0x40, 0x1, 0xf0, 0x98, 0x0, 0x3e, 0x2,
    0xf5, 0x2c, 0x80, 0x5, 0xdf, 0x90, 0x0,

    /* U+0037 "7" */
    0xbf, 0xff, 0xfe, 0x12, 0x22, 0xa9, 0x0, 0x0,
    0xe4, 0x0, 0x4, 0xe0, 0x0, 0x9, 0x90, 0x0,
    0xe, 0x40, 0x0, 0x3f, 0x0, 0x0, 0x8b, 0x0,
    0x0, 0xd6, 0x0, 0x1, 0xf2, 0x0, 0x6, 0xe0,
    0x0,

    /* U+0038 "8" */
    0x0, 0x8e, 0xfa, 0x0, 0x5, 0xd2, 0x2c, 0x80,
    0x8, 0x90, 0x6, 0xa0, 0x6, 0xd0, 0xa, 0x70,
    0x0, 0xcc, 0x8c, 0x0, 0x0, 0x8d, 0xea, 0x0,
    0x7, 0xb0, 0x1c, 0x90, 0xe, 0x30, 0x3, 0xf0,
    0xf, 0x30, 0x2, 0xf0, 0xa, 0xc2, 0x3b, 0xa0,
    0x1, 0xaf, 0xfa, 0x10,

    /* U+0039 "9" */
    0x6, 0xee, 0x60, 0x5, 0xd2, 0x2d, 0x40, 0xb5,
    0x0, 0x6b, 0xd, 0x30, 0x2, 0xf0, 0xc4, 0x0,
    0x1f, 0x7, 0xc1, 0x9, 0xf0, 0x9, 0xff, 0xcf,
    0x0, 0x0, 0x5, 0xb0, 0x0, 0x0, 0xa7, 0x4,
    0x50, 0x5e, 0x10, 0x3c, 0xfd, 0x30, 0x0,

    /* U+003A ":" */
    0xd, 0x80, 0xd8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xd8, 0xe, 0x80,

    /* U+003B ";" */
    0xd, 0x80, 0xd8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x52, 0x1f, 0xc0, 0x8c, 0x8, 0x62, 0xa0, 0x0,
    0x0,

    /* U+003C "<" */
    0x0, 0x0, 0x0, 0x33, 0x0, 0x0, 0x2a, 0xe3,
    0x0, 0x8, 0xe8, 0x0, 0x6, 0xe9, 0x10, 0x0,
    0x6f, 0x40, 0x0, 0x0, 0x8, 0xe6, 0x0, 0x0,
    0x0, 0x2c, 0xd3, 0x0, 0x0, 0x0, 0x6e, 0xa1,
    0x0, 0x0, 0x1, 0xa5, 0x0, 0x0, 0x0, 0x0,

    /* U+003D "=" */
    0x4f, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4e, 0xee, 0xee, 0xe4,
    0x1, 0x11, 0x11, 0x10,

    /* U+003E ">" */
    0x33, 0x0, 0x0, 0x0, 0x3e, 0xa2, 0x0, 0x0,
    0x0, 0x8e, 0x81, 0x0, 0x0, 0x1, 0x9e, 0x60,
    0x0, 0x0, 0x4, 0xf7, 0x0, 0x0, 0x6e, 0x80,
    0x0, 0x3c, 0xc2, 0x0, 0x19, 0xe6, 0x0, 0x0,
    0x5a, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x1a, 0xef, 0xb1, 0xb9, 0x21, 0xbb, 0x20, 0x0,
    0x3e, 0x0, 0x0, 0x5c, 0x0, 0x1, 0xd4, 0x0,
    0xd, 0x50, 0x0, 0x4c, 0x0, 0x0, 0x48, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8c, 0x0, 0x0, 0x8d,
    0x0,

    /* U+0040 "@" */
    0x0, 0x5d, 0xea, 0x10, 0x6, 0xb1, 0x5, 0xc0,
    0xd, 0x10, 0x0, 0xa3, 0x4a, 0x2, 0xad, 0xf6,
    0x77, 0xd, 0x50, 0x87, 0x77, 0x2d, 0x0, 0xa7,
    0x68, 0xe, 0x11, 0xe7, 0x3c, 0x4, 0xcb, 0xa6,
    0xe, 0x30, 0x0, 0x0, 0x4, 0xe5, 0x1, 0x40,
    0x0, 0x4c, 0xfe, 0x70,

    /* U+0041 "A" */
    0x0, 0x2, 0x20, 0x0, 0x0, 0x7, 0x70, 0x0,
    0x0, 0xd, 0xd0, 0x0, 0x0, 0x2c, 0xd2, 0x0,
    0x0, 0x87, 0x88, 0x0, 0x0, 0xd2, 0x2d, 0x0,
    0x3, 0xd0, 0xd, 0x30, 0x8, 0xfe, 0xef, 0x80,
    0xe, 0x20, 0x3, 0xe0, 0x3d, 0x0, 0x0, 0xe3,
    0x98, 0x0, 0x0, 0x99,

    /* U+0042 "B" */
    0x3f, 0xff, 0xd8, 0x0, 0x3e, 0x0, 0x3d, 0x80,
    0x3e, 0x0, 0x4, 0xd0, 0x3e, 0x0, 0x4, 0xd0,
    0x3e, 0x0, 0x1b, 0x80, 0x3f, 0xee, 0xfc, 0x0,
    0x3e, 0x11, 0x3a, 0xa0, 0x3e, 0x0, 0x0, 0xf2,
    0x3e, 0x0, 0x0, 0xe3, 0x3e, 0x0, 0x29, 0xe0,
    0x3f, 0xff, 0xea, 0x20,

    /* U+0043 "C" */
    0x0, 0x5c, 0xfc, 0x40, 0x5, 0xe3, 0x4, 0xf2,
    0xd, 0x50, 0x0, 0x51, 0x2f, 0x0, 0x0, 0x0,
    0x4d, 0x0, 0x0, 0x0, 0x5c, 0x0, 0x0, 0x0,
    0x4d, 0x0, 0x0, 0x0, 0x2f, 0x10, 0x0, 0x0,
    0xd, 0x70, 0x0, 0x20, 0x4, 0xf5, 0x15, 0xf2,
    0x0, 0x5d, 0xfd, 0x40,

    /* U+0044 "D" */
    0x2f, 0xff, 0xd5, 0x0, 0x2e, 0x1, 0x5f, 0x50,
    0x2e, 0x0, 0x6, 0xd0, 0x2e, 0x0, 0x0, 0xf2,
    0x2e, 0x0, 0x0, 0xd4, 0x2e, 0x0, 0x0, 0xc5,
    0x2e, 0x0, 0x0, 0xd4, 0x2e, 0x0, 0x0, 0xf1,
    0x2e, 0x0, 0x5, 0xc0, 0x2e, 0x0, 0x5e, 0x40,
    0x2f, 0xff, 0xc4, 0x0,

    /* U+0045 "E" */
    0x1f, 0xff, 0xff, 0xf1, 0x1f, 0x11, 0x11, 0x10,
    0x1f, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0x20,
    0x1f, 0x22, 0x22, 0x0, 0x1f, 0x0, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x0, 0x1f, 0x11, 0x11, 0x10,
    0x1f, 0xff, 0xff, 0xf0,

    /* U+0046 "F" */
    0xcf, 0xff, 0xff, 0xc6, 0x0, 0x0, 0xc6, 0x0,
    0x0, 0xc6, 0x0, 0x0, 0xc6, 0x0, 0x0, 0xcf,
    0xee, 0xe1, 0xc7, 0x11, 0x10, 0xc6, 0x0, 0x0,
    0xc6, 0x0, 0x0, 0xc6, 0x0, 0x0, 0xc6, 0x0,
    0x0,

    /* U+0047 "G" */
    0x0, 0x6d, 0xfb, 0x20, 0x6, 0xd4, 0x17, 0xe1,
    0xe, 0x30, 0x0, 0x50, 0x3d, 0x0, 0x0, 0x0,
    0x5b, 0x0, 0x0, 0x0, 0x6b, 0x0, 0x0, 0x0,
    0x5c, 0x0, 0x7e, 0xe5, 0x3e, 0x0, 0x1, 0xb5,
    0xe, 0x50, 0x0, 0xb5, 0x5, 0xe4, 0x13, 0xd5,
    0x0, 0x5d, 0xfd, 0x60,

    /* U+0048 "H" */
    0x3f, 0x0, 0x2, 0xf1, 0x3f, 0x0, 0x2, 0xf0,
    0x3f, 0x0, 0x2, 0xf0, 0x3f, 0x0, 0x2, 0xf0,
    0x3f, 0x0, 0x2, 0xf0, 0x3f, 0xee, 0xee, 0xf0,
    0x3f, 0x11, 0x13, 0xf0, 0x3f, 0x0, 0x2, 0xf0,
    0x3f, 0x0, 0x2, 0xf0, 0x3f, 0x0, 0x2, 0xf0,
    0x3f, 0x0, 0x2, 0xf0,

    /* U+0049 "I" */
    0x9f, 0xff, 0xf5, 0x0, 0xb6, 0x0, 0x0, 0xb6,
    0x0, 0x0, 0xb6, 0x0, 0x0, 0xb6, 0x0, 0x0,
    0xb6, 0x0, 0x0, 0xb6, 0x0, 0x0, 0xb6, 0x0,
    0x0, 0xb6, 0x0, 0x0, 0xb6, 0x0, 0xbf, 0xff,
    0xf7,

    /* U+004A "J" */
    0x0, 0x4f, 0xff, 0xf5, 0x0, 0x0, 0x5c, 0x0,
    0x0, 0x0, 0x5c, 0x0, 0x0, 0x0, 0x5c, 0x0,
    0x0, 0x0, 0x5c, 0x0, 0x0, 0x0, 0x5c, 0x0,
    0x0, 0x0, 0x5c, 0x0, 0x0, 0x0, 0x5c, 0x0,
    0x0, 0x0, 0x6a, 0x0, 0xc, 0x32, 0xd5, 0x0,
    0x7, 0xee, 0x80, 0x0,

    /* U+004B "K" */
    0x0, 0x0, 0x0, 0x0, 0x5e, 0x0, 0x7, 0xd0,
    0x5e, 0x0, 0x4e, 0x20, 0x5e, 0x2, 0xe4, 0x0,
    0x5e, 0xd, 0x70, 0x0, 0x5e, 0xab, 0x0, 0x0,
    0x5f, 0xde, 0x10, 0x0, 0x5e, 0xb, 0xa0, 0x0,
    0x5e, 0x2, 0xf4, 0x0, 0x5e, 0x0, 0x7d, 0x0,
    0x5e, 0x0, 0xd, 0x80, 0x5e, 0x0, 0x3, 0xf3,

    /* U+004C "L" */
    0xf4, 0x0, 0x0, 0xf, 0x30, 0x0, 0x0, 0xf3,
    0x0, 0x0, 0xf, 0x30, 0x0, 0x0, 0xf3, 0x0,
    0x0, 0xf, 0x30, 0x0, 0x0, 0xf3, 0x0, 0x0,
    0xf, 0x30, 0x0, 0x0, 0xf3, 0x0, 0x0, 0xf,
    0x30, 0x0, 0x0, 0xff, 0xff, 0xff, 0x0,

    /* U+004D "M" */
    0x5c, 0x0, 0x0, 0xb5, 0x5f, 0x30, 0x3, 0xf5,
    0x5f, 0xa0, 0xa, 0xf5, 0x5b, 0xe2, 0x2d, 0xb5,
    0x5b, 0x79, 0x96, 0xb5, 0x5b, 0x1e, 0xd0, 0xb5,
    0x5b, 0x9, 0x70, 0xb5, 0x5b, 0x0, 0x0, 0xb5,
    0x5b, 0x0, 0x0, 0xb5, 0x5b, 0x0, 0x0, 0xb5,
    0x5b, 0x0, 0x0, 0xb5,

    /* U+004E "N" */
    0x3f, 0x20, 0x0, 0xe3, 0x3f, 0xa0, 0x0, 0xe2,
    0x3e, 0xf2, 0x0, 0xe2, 0x3e, 0x8a, 0x0, 0xe2,
    0x3e, 0x1f, 0x30, 0xe2, 0x3e, 0x8, 0xb0, 0xe2,
    0x3e, 0x1, 0xf3, 0xe2, 0x3e, 0x0, 0x8b, 0xe2,
    0x3e, 0x0, 0x1f, 0xf2, 0x3e, 0x0, 0x7, 0xf2,
    0x3e, 0x0, 0x0, 0xe2,

    /* U+004F "O" */
    0x0, 0x9e, 0xe9, 0x0, 0x9, 0xc2, 0x2c, 0x90,
    0x1f, 0x20, 0x2, 0xf1, 0x5c, 0x0, 0x0, 0xc5,
    0x8a, 0x0, 0x0, 0xa7, 0x89, 0x0, 0x0, 0x98,
    0x8a, 0x0, 0x0, 0xa7, 0x6c, 0x0, 0x0, 0xc5,
    0x2f, 0x10, 0x1, 0xf1, 0xa, 0xc2, 0x2c, 0xa0,
    0x0, 0x9e, 0xe9, 0x0,

    /* U+0050 "P" */
    0x1f, 0xff, 0xfb, 0x20, 0x1f, 0x32, 0x2a, 0xe0,
    0x1f, 0x10, 0x0, 0xf3, 0x1f, 0x10, 0x0, 0xe3,
    0x1f, 0x10, 0x6, 0xe0, 0x1f, 0xff, 0xfe, 0x40,
    0x1f, 0x32, 0x10, 0x0, 0x1f, 0x10, 0x0, 0x0,
    0x1f, 0x10, 0x0, 0x0, 0x1f, 0x10, 0x0, 0x0,
    0x1f, 0x10, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x7e, 0xe8, 0x0, 0x7, 0xc2, 0x2c, 0x80,
    0xf, 0x20, 0x2, 0xf1, 0x4d, 0x0, 0x0, 0xc5,
    0x7a, 0x0, 0x0, 0x97, 0x89, 0x0, 0x0, 0x88,
    0x79, 0x0, 0x0, 0x87, 0x6b, 0x0, 0x0, 0xa6,
    0x2f, 0x0, 0x0, 0xe3, 0xc, 0x80, 0x6, 0xd0,
    0x2, 0xec, 0xbf, 0x40, 0x0, 0x1a, 0xc2, 0x0,
    0x0, 0x4, 0xe3, 0x20, 0x0, 0x0, 0x9f, 0xf0,

    /* U+0052 "R" */
    0x1f, 0xff, 0xfa, 0x10, 0x1f, 0x22, 0x3c, 0xc0,
    0x1f, 0x0, 0x2, 0xf1, 0x1f, 0x0, 0x0, 0xf1,
    0x1f, 0x0, 0x8, 0xc0, 0x1f, 0xff, 0xfe, 0x20,
    0x1f, 0x22, 0xd5, 0x0, 0x1f, 0x0, 0x6c, 0x0,
    0x1f, 0x0, 0xe, 0x40, 0x1f, 0x0, 0x8, 0xb0,
    0x1f, 0x0, 0x1, 0xf3,

    /* U+0053 "S" */
    0x0, 0x9e, 0xfb, 0x20, 0x9, 0xc1, 0x16, 0xb0,
    0xc, 0x50, 0x0, 0x10, 0xa, 0x90, 0x0, 0x0,
    0x2, 0xeb, 0x30, 0x0, 0x0, 0x1a, 0xfa, 0x10,
    0x0, 0x0, 0x2b, 0xd0, 0x0, 0x0, 0x0, 0xe3,
    0x3, 0x0, 0x0, 0xe3, 0xe, 0x82, 0x29, 0xd0,
    0x3, 0xbf, 0xfb, 0x10,

    /* U+0054 "T" */
    0x8f, 0xff, 0xff, 0xf6, 0x1, 0x1b, 0x81, 0x10,
    0x0, 0xa, 0x70, 0x0, 0x0, 0xa, 0x70, 0x0,
    0x0, 0xa, 0x70, 0x0, 0x0, 0xa, 0x70, 0x0,
    0x0, 0xa, 0x70, 0x0, 0x0, 0xa, 0x70, 0x0,
    0x0, 0xa, 0x70, 0x0, 0x0, 0xa, 0x70, 0x0,
    0x0, 0xa, 0x70, 0x0,

    /* U+0055 "U" */
    0x3e, 0x0, 0x0, 0xd4, 0x3e, 0x0, 0x0, 0xd4,
    0x3e, 0x0, 0x0, 0xd4, 0x3e, 0x0, 0x0, 0xd4,
    0x3e, 0x0, 0x0, 0xd4, 0x3e, 0x0, 0x0, 0xd4,
    0x3e, 0x0, 0x0, 0xd4, 0x2f, 0x0, 0x0, 0xd3,
    0xf, 0x10, 0x0, 0xf1, 0x9, 0xb1, 0x1a, 0xb0,
    0x1, 0xaf, 0xfa, 0x10,

    /* U+0056 "V" */
    0x7b, 0x0, 0x0, 0x97, 0x2f, 0x0, 0x0, 0xe2,
    0xd, 0x50, 0x2, 0xe0, 0x8, 0xa0, 0x7, 0x90,
    0x3, 0xe0, 0xc, 0x40, 0x0, 0xe3, 0xe, 0x0,
    0x0, 0x98, 0x5a, 0x0, 0x0, 0x4d, 0x95, 0x0,
    0x0, 0xf, 0xf1, 0x0, 0x0, 0xa, 0xc0, 0x0,
    0x0, 0x5, 0x70, 0x0,

    /* U+0057 "W" */
    0xa6, 0x0, 0x10, 0x3b, 0x88, 0x2, 0x80, 0x59,
    0x5a, 0x6, 0xc0, 0x77, 0x3d, 0xa, 0xf0, 0x94,
    0x1f, 0xc, 0xc3, 0xb2, 0xe, 0x4a, 0x87, 0xc0,
    0xc, 0xa6, 0x4b, 0xc0, 0xa, 0xf3, 0xf, 0xb0,
    0x7, 0xe0, 0xc, 0x90, 0x5, 0xb0, 0x9, 0x60,
    0x3, 0x70, 0x5, 0x40,

    /* U+0058 "X" */
    0x1f, 0x20, 0x3, 0xe0, 0x8, 0xa0, 0xa, 0x70,
    0x1, 0xf2, 0x2f, 0x10, 0x0, 0x9a, 0xa8, 0x0,
    0x0, 0x1f, 0xf1, 0x0, 0x0, 0xc, 0xc0, 0x0,
    0x0, 0x2f, 0xf3, 0x0, 0x0, 0xa9, 0x8b, 0x0,
    0x2, 0xf1, 0x1f, 0x30, 0x9, 0x90, 0x8, 0xb0,
    0x1f, 0x20, 0x1, 0xf3,

    /* U+0059 "Y" */
    0x5e, 0x0, 0x0, 0xd5, 0xd, 0x60, 0x3, 0xe0,
    0x6, 0xd0, 0xa, 0x70, 0x0, 0xe5, 0x1f, 0x10,
    0x0, 0x7c, 0x7a, 0x0, 0x0, 0x1f, 0xf3, 0x0,
    0x0, 0x9, 0xd0, 0x0, 0x0, 0x7, 0xb0, 0x0,
    0x0, 0x7, 0xb0, 0x0, 0x0, 0x7, 0xb0, 0x0,
    0x0, 0x7, 0xb0, 0x0,

    /* U+005A "Z" */
    0xf, 0xff, 0xff, 0xf2, 0x1, 0x11, 0x17, 0xc0,
    0x0, 0x0, 0xe, 0x40, 0x0, 0x0, 0x8b, 0x0,
    0x0, 0x1, 0xf2, 0x0, 0x0, 0xa, 0x90, 0x0,
    0x0, 0x2f, 0x10, 0x0, 0x0, 0xb8, 0x0, 0x0,
    0x4, 0xe0, 0x0, 0x0, 0xd, 0x71, 0x11, 0x11,
    0x3f, 0xff, 0xff, 0xf6,

    /* U+005B "[" */
    0xef, 0xff, 0xae, 0x20, 0x0, 0xe2, 0x0, 0xe,
    0x20, 0x0, 0xe2, 0x0, 0xe, 0x20, 0x0, 0xe2,
    0x0, 0xe, 0x20, 0x0, 0xe2, 0x0, 0xe, 0x20,
    0x0, 0xe2, 0x0, 0xe, 0x20, 0x0, 0xef, 0xff,
    0xa0,

    /* U+005C "\\" */
    0x20, 0x0, 0x0, 0xc5, 0x0, 0x0, 0x6c, 0x0,
    0x0, 0xe, 0x30, 0x0, 0x8, 0xa0, 0x0, 0x1,
    0xf1, 0x0, 0x0, 0xa8, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0xc, 0x50, 0x0, 0x5, 0xc0, 0x0, 0x0,
    0xe3, 0x0, 0x0, 0x7a, 0x0, 0x0, 0x17,

    /* U+005D "]" */
    0xef, 0xff, 0xb0, 0x0, 0x5b, 0x0, 0x5, 0xb0,
    0x0, 0x5b, 0x0, 0x5, 0xb0, 0x0, 0x5b, 0x0,
    0x5, 0xb0, 0x0, 0x5b, 0x0, 0x5, 0xb0, 0x0,
    0x5b, 0x0, 0x5, 0xb0, 0x0, 0x5b, 0xef, 0xff,
    0xa0,

    /* U+005E "^" */
    0x0, 0x58, 0x0, 0x0, 0xde, 0x10, 0x7, 0xa9,
    0x80, 0x1e, 0x11, 0xe1, 0x36, 0x0, 0x72,

    /* U+005F "_" */
    0x6f, 0xff, 0xff, 0xf6, 0x1, 0x11, 0x11, 0x10,

    /* U+0060 "`" */
    0x14, 0x3, 0xe0, 0x8, 0x70, 0x1,

    /* U+0061 "a" */
    0x2, 0xbf, 0xea, 0x10, 0x5, 0x61, 0x1a, 0xa0,
    0x0, 0x0, 0x1, 0xf0, 0x0, 0x8d, 0xee, 0xf1,
    0xc, 0x91, 0x0, 0xf2, 0x2f, 0x0, 0x2, 0xf2,
    0x1f, 0x30, 0x2b, 0xf2, 0x5, 0xdf, 0xc5, 0xf2,

    /* U+0062 "b" */
    0xf, 0x20, 0x0, 0x0, 0xf, 0x20, 0x0, 0x0,
    0xf, 0x20, 0x0, 0x0, 0xf, 0x4c, 0xfb, 0x10,
    0xf, 0xd3, 0x2b, 0xb0, 0xf, 0x60, 0x1, 0xf1,
    0xf, 0x30, 0x0, 0xe4, 0xf, 0x20, 0x0, 0xf4,
    0xf, 0x50, 0x2, 0xf1, 0xf, 0xd3, 0x2c, 0x90,
    0xd, 0x4d, 0xea, 0x0,

    /* U+0063 "c" */
    0x0, 0x4d, 0xfd, 0x50, 0x4, 0xe5, 0x14, 0xe1,
    0xd, 0x60, 0x0, 0x10, 0x1f, 0x20, 0x0, 0x0,
    0x1f, 0x20, 0x0, 0x0, 0xd, 0x70, 0x0, 0x0,
    0x4, 0xf7, 0x25, 0xc0, 0x0, 0x4d, 0xfd, 0x50,

    /* U+0064 "d" */
    0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0x1, 0xf0, 0x1, 0xae, 0xd5, 0xf0,
    0xa, 0xa1, 0x2d, 0xf0, 0x1f, 0x10, 0x6, 0xf0,
    0x4e, 0x0, 0x3, 0xf0, 0x3f, 0x0, 0x3, 0xf0,
    0x1f, 0x20, 0x6, 0xf0, 0x9, 0xc2, 0x3d, 0xf0,
    0x0, 0x9e, 0xd4, 0xf1,

    /* U+0065 "e" */
    0x0, 0x7e, 0xea, 0x10, 0x7, 0xb1, 0xa, 0xa0,
    0xf, 0x10, 0x2, 0xf0, 0x2f, 0xff, 0xff, 0xf1,
    0x2f, 0x0, 0x0, 0x0, 0xf, 0x30, 0x0, 0x0,
    0x8, 0xd3, 0x4, 0x80, 0x0, 0x7d, 0xfc, 0x30,

    /* U+0066 "f" */
    0x0, 0x7e, 0xfb, 0x20, 0x3f, 0x30, 0x63, 0x6,
    0xb0, 0x0, 0xf, 0xff, 0xff, 0x10, 0x6, 0xb0,
    0x0, 0x0, 0x6b, 0x0, 0x0, 0x6, 0xb0, 0x0,
    0x0, 0x6b, 0x0, 0x0, 0x6, 0xb0, 0x0, 0x0,
    0x6b, 0x0, 0x0, 0x6, 0xb0, 0x0, 0x0,

    /* U+0067 "g" */
    0x1, 0xbf, 0xd6, 0xc7, 0xb, 0x81, 0x5f, 0x31,
    0xe, 0x10, 0xd, 0x20, 0xb, 0x70, 0x3e, 0x0,
    0x4, 0xff, 0xe4, 0x0, 0x9, 0x41, 0x0, 0x0,
    0xb, 0x82, 0x10, 0x0, 0x8, 0xef, 0xff, 0x80,
    0x3c, 0x0, 0x3, 0xf1, 0x4d, 0x20, 0x4, 0xe0,
    0x7, 0xde, 0xec, 0x30,

    /* U+0068 "h" */
    0xd5, 0x0, 0x0, 0xd4, 0x0, 0x0, 0xd4, 0x0,
    0x0, 0xd5, 0x9f, 0xc2, 0xdd, 0x62, 0xba, 0xd8,
    0x0, 0x4d, 0xd4, 0x0, 0x3e, 0xd4, 0x0, 0x3e,
    0xd4, 0x0, 0x3e, 0xd4, 0x0, 0x3e, 0xd4, 0x0,
    0x3e,

    /* U+0069 "i" */
    0x0, 0xa9, 0x0, 0x0, 0x66, 0x0, 0x0, 0x0,
    0x0, 0x4f, 0xfa, 0x0, 0x0, 0x8a, 0x0, 0x0,
    0x8a, 0x0, 0x0, 0x8a, 0x0, 0x0, 0x8a, 0x0,
    0x0, 0x8a, 0x0, 0x0, 0x8a, 0x0, 0x6f, 0xff,
    0xf5,

    /* U+006A "j" */
    0x0, 0x0, 0x6d, 0x0, 0x0, 0x4, 0x90, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xe0, 0x0, 0x0,
    0x4e, 0x0, 0x0, 0x4, 0xe0, 0x0, 0x0, 0x4e,
    0x0, 0x0, 0x4, 0xe0, 0x0, 0x0, 0x4e, 0x0,
    0x0, 0x4, 0xe0, 0x0, 0x0, 0x4e, 0x0, 0x0,
    0x5, 0xc0, 0xc, 0x32, 0xd7, 0x0, 0x7e, 0xf9,
    0x0,

    /* U+006B "k" */
    0xf4, 0x0, 0x0, 0xf, 0x30, 0x0, 0x0, 0xf3,
    0x0, 0x0, 0xf, 0x30, 0xa, 0xa0, 0xf3, 0xa,
    0xb0, 0xf, 0x3a, 0xb0, 0x0, 0xfc, 0xf5, 0x0,
    0xf, 0xa7, 0xe1, 0x0, 0xf3, 0xa, 0xc0, 0xf,
    0x30, 0x1e, 0x80, 0xf3, 0x0, 0x3f, 0x40,

    /* U+006C "l" */
    0xaf, 0xf9, 0x0, 0x0, 0x99, 0x0, 0x0, 0x99,
    0x0, 0x0, 0x99, 0x0, 0x0, 0x99, 0x0, 0x0,
    0x99, 0x0, 0x0, 0x99, 0x0, 0x0, 0x99, 0x0,
    0x0, 0x99, 0x0, 0x0, 0x99, 0x0, 0xbf, 0xff,
    0xfb,

    /* U+006D "m" */
    0x6c, 0xad, 0x6b, 0xd2, 0x6e, 0x9, 0xe0, 0x97,
    0x6a, 0x7, 0xa0, 0x88, 0x6a, 0x7, 0x90, 0x88,
    0x6a, 0x7, 0x90, 0x88, 0x6a, 0x7, 0x90, 0x88,
    0x6a, 0x7, 0x90, 0x88, 0x6a, 0x7, 0x90, 0x88,

    /* U+006E "n" */
    0xd5, 0xae, 0xc1, 0xdd, 0x30, 0x99, 0xd7, 0x0,
    0x4d, 0xd4, 0x0, 0x3e, 0xd4, 0x0, 0x3e, 0xd4,
    0x0, 0x3e, 0xd4, 0x0, 0x3e, 0xd4, 0x0, 0x3e,

    /* U+006F "o" */
    0x0, 0x9e, 0xe9, 0x0, 0xa, 0xc2, 0x2c, 0xa0,
    0x2f, 0x20, 0x2, 0xf2, 0x5e, 0x0, 0x0, 0xe5,
    0x5e, 0x0, 0x0, 0xe5, 0x2f, 0x20, 0x2, 0xf2,
    0xa, 0xc2, 0x2c, 0xa0, 0x0, 0x9e, 0xe9, 0x0,

    /* U+0070 "p" */
    0xf, 0x5c, 0xea, 0x10, 0xf, 0xc1, 0x8, 0xc0,
    0xf, 0x60, 0x0, 0xf3, 0xf, 0x20, 0x0, 0xd6,
    0xf, 0x20, 0x0, 0xd5, 0xf, 0x50, 0x1, 0xf2,
    0xf, 0xd3, 0x2b, 0xb0, 0xf, 0x5d, 0xfa, 0x0,
    0xf, 0x20, 0x0, 0x0, 0xf, 0x20, 0x0, 0x0,
    0xf, 0x20, 0x0, 0x0,

    /* U+0071 "q" */
    0x0, 0xaf, 0xe5, 0xf1, 0x9, 0xb1, 0x1b, 0xf1,
    0x1f, 0x10, 0x4, 0xf1, 0x4e, 0x0, 0x2, 0xf1,
    0x4e, 0x0, 0x3, 0xf1, 0x1f, 0x20, 0x6, 0xf1,
    0xa, 0xc2, 0x4d, 0xf1, 0x0, 0xaf, 0xc4, 0xf1,
    0x0, 0x0, 0x1, 0xf1, 0x0, 0x0, 0x1, 0xf1,
    0x0, 0x0, 0x1, 0xf1,

    /* U+0072 "r" */
    0x1f, 0x4c, 0xec, 0x11, 0xfc, 0x10, 0x60, 0x1f,
    0x50, 0x0, 0x1, 0xf1, 0x0, 0x0, 0x1f, 0x10,
    0x0, 0x1, 0xf1, 0x0, 0x0, 0x1f, 0x10, 0x0,
    0x1, 0xf1, 0x0, 0x0,

    /* U+0073 "s" */
    0x1, 0xbf, 0xeb, 0x30, 0x9, 0xa0, 0x6, 0xa0,
    0x8, 0xc1, 0x0, 0x0, 0x0, 0xaf, 0xa4, 0x0,
    0x0, 0x1, 0x7e, 0x90, 0x2, 0x0, 0x3, 0xf0,
    0xe, 0x71, 0x18, 0xd0, 0x3, 0xbf, 0xfb, 0x20,

    /* U+0074 "t" */
    0x0, 0x10, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x4,
    0xd0, 0x0, 0xe, 0xff, 0xff, 0x60, 0x5, 0xd0,
    0x0, 0x0, 0x5c, 0x0, 0x0, 0x6, 0xb0, 0x0,
    0x0, 0x6b, 0x0, 0x0, 0x5, 0xc0, 0x0, 0x0,
    0x3f, 0x22, 0x80, 0x0, 0x9e, 0xe8, 0x0,

    /* U+0075 "u" */
    0xf2, 0x0, 0x3e, 0xf, 0x20, 0x3, 0xe0, 0xf2,
    0x0, 0x3e, 0xf, 0x20, 0x3, 0xe0, 0xf2, 0x0,
    0x3e, 0xd, 0x40, 0x6, 0xe0, 0x9b, 0x12, 0xde,
    0x1, 0xbf, 0xc4, 0xf0,

    /* U+0076 "v" */
    0x2f, 0x0, 0x0, 0xe2, 0xd, 0x50, 0x2, 0xe0,
    0x7, 0xb0, 0x7, 0x80, 0x1, 0xf1, 0xd, 0x30,
    0x0, 0xb6, 0x3c, 0x0, 0x0, 0x6c, 0xa6, 0x0,
    0x0, 0xf, 0xf0, 0x0, 0x0, 0xa, 0xa0, 0x0,

    /* U+0077 "w" */
    0xa5, 0x1, 0x10, 0x6a, 0x78, 0x7, 0x90, 0x78,
    0x4b, 0xa, 0xe0, 0x85, 0x1e, 0xc, 0xc2, 0xa3,
    0xe, 0x3a, 0x86, 0xc1, 0xb, 0xa6, 0x4b, 0xd0,
    0x8, 0xf2, 0xe, 0xb0, 0x5, 0xe0, 0xb, 0x90,

    /* U+0078 "x" */
    0xd, 0x60, 0x8, 0xa0, 0x3, 0xe1, 0x2e, 0x10,
    0x0, 0x9a, 0xb7, 0x0, 0x0, 0xe, 0xd0, 0x0,
    0x0, 0x1e, 0xe1, 0x0, 0x0, 0xa9, 0xaa, 0x0,
    0x4, 0xe1, 0x1e, 0x50, 0xe, 0x50, 0x5, 0xe1,

    /* U+0079 "y" */
    0x1f, 0x10, 0x2, 0xf0, 0xb, 0x70, 0x5, 0xc0,
    0x5, 0xd0, 0xa, 0x70, 0x0, 0xe2, 0xe, 0x20,
    0x0, 0x98, 0x3d, 0x0, 0x0, 0x3e, 0x87, 0x0,
    0x0, 0xd, 0xf2, 0x0, 0x0, 0x8, 0xe0, 0x0,
    0x0, 0x7, 0x80, 0x0, 0x22, 0x2e, 0x20, 0x0,
    0x5e, 0xe6, 0x0, 0x0,

    /* U+007A "z" */
    0xd, 0xff, 0xff, 0xc0, 0x1, 0x11, 0x2e, 0x50,
    0x0, 0x0, 0xb9, 0x0, 0x0, 0x7, 0xd0, 0x0,
    0x0, 0x3f, 0x20, 0x0, 0x1, 0xe6, 0x0, 0x0,
    0xb, 0xb1, 0x11, 0x10, 0x3f, 0xff, 0xff, 0xf3,

    /* U+007B "{" */
    0x0, 0x5, 0xdf, 0x80, 0x1, 0xf3, 0x0, 0x0,
    0x5c, 0x0, 0x0, 0x6, 0xc0, 0x0, 0x0, 0x6b,
    0x0, 0x0, 0xb, 0x60, 0x0, 0x2f, 0xb0, 0x0,
    0x0, 0xb, 0x50, 0x0, 0x0, 0x6a, 0x0, 0x0,
    0x6, 0xb0, 0x0, 0x0, 0x7b, 0x0, 0x0, 0x6,
    0xc0, 0x0, 0x0, 0x3f, 0x40, 0x0, 0x0, 0x6d,
    0xe7,

    /* U+007C "|" */
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88,

    /* U+007D "}" */
    0x2f, 0xe9, 0x0, 0x0, 0x0, 0xb7, 0x0, 0x0,
    0x6, 0xb0, 0x0, 0x0, 0x5c, 0x0, 0x0, 0x4,
    0xc0, 0x0, 0x0, 0x1e, 0x30, 0x0, 0x0, 0x5f,
    0x80, 0x0, 0xe, 0x30, 0x0, 0x4, 0xd0, 0x0,
    0x0, 0x5c, 0x0, 0x0, 0x4, 0xd0, 0x0, 0x0,
    0x5c, 0x0, 0x0, 0x1c, 0x90, 0x1, 0xfe, 0x90,
    0x0,

    /* U+007E "~" */
    0x3d, 0xe6, 0x18, 0x28, 0x31, 0x9e, 0xa0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 128, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 27, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 119, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 211, .adv_w = 128, .box_w = 2, .box_h = 5, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 216, .adv_w = 128, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 261, .adv_w = 128, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 306, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 338, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 370, .adv_w = 128, .box_w = 3, .box_h = 5, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 378, .adv_w = 128, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 384, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 128, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 426, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 724, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 768, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 128, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 128, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 835, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 875, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 895, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 968, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1056, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1144, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1188, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1232, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1265, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1309, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1353, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1386, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1430, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1478, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1517, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1561, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1605, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1649, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1693, .adv_w = 128, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1749, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1793, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1837, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1881, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1925, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1969, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2013, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2057, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2101, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2145, .adv_w = 128, .box_w = 5, .box_h = 13, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2178, .adv_w = 128, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2217, .adv_w = 128, .box_w = 5, .box_h = 13, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2250, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2265, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2273, .adv_w = 128, .box_w = 3, .box_h = 4, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 2279, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2311, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2355, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2387, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2431, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2463, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2502, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2546, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2579, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2612, .adv_w = 128, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2661, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2700, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2733, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2765, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2789, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2821, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2865, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2909, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2937, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2969, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3008, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3036, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3068, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3100, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3132, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3176, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3208, .adv_w = 128, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3257, .adv_w = 128, .box_w = 2, .box_h = 14, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 3271, .adv_w = 128, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3320, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 5}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_inconsolata_16 = {
#else
lv_font_t ui_font_inconsolata_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
    .fallback = NULL,
    .user_data = NULL
};



#endif /*#if UI_FONT_INCONSOLATA_16*/

