/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap converter for emWin V5.12.                           *
*        Compiled Jun 29 2011, 15:28:21                              *
*        (C) 1998 - 2010 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: yue                                                   *
* Dimensions:  14 * 16                                               *
* NumColors:   16bpp: 65536                                          *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif


static GUI_CONST_STORAGE unsigned short acyue[] = {
  0x4102, 0x40E2, 0x4943, 0x8BAD, 0x8BAD, 0x8BAD, 0x8BAD, 0x8BAD, 0x8BAD, 0x8BAD, 0x8BAD, 0x8BAD, 0x72A9, 0x40C1,
  0x4102, 0x3060, 0xE6FB, 0xFFFF, 0xC5F7, 0xCE17, 0xCE17, 0xCE17, 0xCE17, 0xCE17, 0xCE17, 0xDEBA, 0xFFFF, 0x2820,
  0x4102, 0x3060, 0xDEBA, 0x9430, 0x2000, 0x2860, 0x2860, 0x2860, 0x2860, 0x3060, 0x2820, 0x51A5, 0xFFFF, 0x2820,
  0x4102, 0x3040, 0xD699, 0x9450, 0x2800, 0x3080, 0x3080, 0x3080, 0x3080, 0x3080, 0x3040, 0x51E6, 0xFFFF, 0x2820,
  0x4102, 0x3040, 0xCE38, 0xC5D7, 0x9C50, 0x9C91, 0x9C91, 0x9C91, 0x9C91, 0x9C91, 0x9C71, 0xA4F2, 0xFFFF, 0x2820,
  0x4102, 0x3060, 0xC617, 0xBDB6, 0x9450, 0x9C71, 0x9C71, 0x9C71, 0x9C71, 0x9C71, 0x9C70, 0xA4D2, 0xF7DF, 0x2840,
  0x4102, 0x3060, 0xC617, 0x8BEF, 0x2020, 0x3080, 0x3080, 0x3080, 0x3080, 0x3080, 0x2840, 0x59E6, 0xF7FF, 0x2840,
  0x4102, 0x3060, 0xBDD7, 0x8BCE, 0x2800, 0x3080, 0x3080, 0x3080, 0x3080, 0x3080, 0x2840, 0x59E6, 0xEF9E, 0x2840,
  0x4102, 0x3060, 0xB575, 0xAD55, 0xAD34, 0xB554, 0xB554, 0xB554, 0xB554, 0xB554, 0xAD54, 0xAD13, 0xCE9A, 0x3060,
  0x4102, 0x3060, 0xAD54, 0x9471, 0x7B2B, 0x7B4C, 0x7B4C, 0x7B4C, 0x7B4C, 0x834C, 0x7B4C, 0x83AE, 0xC67A, 0x3060,
  0x4102, 0x2840, 0xC638, 0x7B2C, 0x2840, 0x30A1, 0x30A1, 0x30A1, 0x30A1, 0x30A1, 0x3060, 0x6227, 0xCE9A, 0x3060,
  0x40E2, 0x51A5, 0xB5D7, 0x6A89, 0x38A1, 0x40E2, 0x40E2, 0x40E2, 0x40E2, 0x40E2, 0x38C1, 0x6268, 0xC659, 0x3060,
  0x3060, 0x9450, 0xB5B6, 0x2860, 0x40E2, 0x4102, 0x4102, 0x40E2, 0x3060, 0x38A1, 0x38A0, 0x6A48, 0xB5D7, 0x40E2,
  0x72CA, 0xA555, 0x730B, 0x30A1, 0x4102, 0x4102, 0x40E2, 0x5184, 0xE77D, 0x8C0F, 0x5A06, 0x7B6C, 0xADB6, 0x40E2,
  0xE7BE, 0x8BEF, 0x2840, 0x40E2, 0x4102, 0x4102, 0x4102, 0x38A1, 0x6AA9, 0x9CD2, 0xC638, 0xB596, 0x7B4C, 0x38A1,
  0x2840, 0x3080, 0x38E2, 0x4102, 0x4102, 0x4102, 0x4102, 0x40E2, 0x38A1, 0x3080, 0x2860, 0x2860, 0x30A1, 0x4102
};

GUI_CONST_STORAGE GUI_BITMAP bmyue = {
  14, /* XSize */
  16, /* YSize */
  28, /* BytesPerLine */
  16, /* BitsPerPixel */
  (unsigned char *)acyue,  /* Pointer to picture data */
  NULL,  /* Pointer to palette */
  GUI_DRAW_BMP565
};

/* *** End of file *** */
