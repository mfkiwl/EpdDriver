/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter (ST) for emWin V5.40.                      *
*        Compiled Mar 17 2017, 15:33:27                              *
*                                                                    *
*        (c) 1998 - 2017 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: button_back                                           *
* Dimensions:  74 * 17                                               *
* NumColors:   32bpp: 16777216 + 256                                 *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmbutton_back;

#if defined(__ICCARM__)
#pragma location="ExtFlashSection"
GUI_KEEP
#else
__attribute__((section(".ExtFlashSection")))
#endif
static GUI_CONST_STORAGE unsigned long _acbutton_back[] = {
#if (GUI_USE_ARGB == 1)
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x2DFFFFFF, 0xBFFFFFFF, 0xF8FFFFFF, 0xBFFFFFFF, 0x21FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x0EFFFFFF, 0x33FAFFFF, 0x33FAFFFF, 0x33FAFFFF, 0x33FAFFFF, 0x30FAFFFF, 0x16FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x28FFFFFF, 0x33FAFFFF, 
        0x01FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x24FFFFFF, 0x4EFCFFFF, 0x5FFCFFFF, 0x43FBFFFF, 0x0AFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x1CFFFFFF, 0x33FAFFFF, 0x16FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x30FAFFFF, 0x33FAFFFF, 0x18FFFFFF,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x06FFFFFF, 0x80FFFFFF, 0xF9FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xCBFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xF4FCFFFF, 0xA4FCFFFF, 0x1AFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0EFFFFFF, 0xF5FCFFFF, 0xFFFCFFFF, 
        0x3CFBFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x26FFFFFF, 0xBCFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xEFFCFFFF, 0x6FFDFFFF, 0x01FFFFFF, 0x00000000, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0x6FFDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x78FDFFFF, 0xFFFCFFFF, 0xDBFCFFFF, 0x14FFFFFF,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x34FFFFFF, 0xD2FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x15FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xD9FBFFFF, 0x77FDFFFF, 0x77FDFFFF, 0x7AFDFFFF, 0x93FCFFFF, 0xDEFCFFFF, 0xFFFCFFFF, 0xDAFBFFFF, 0x09FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x64FCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 
        0x9CFCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x2FFAFFFF, 0xEDFCFFFF, 0xFEFCFFFF, 0xAAFCFFFF, 0x5AFCFFFF, 0x51FCFFFF, 0x81FBFFFF, 0xEFFCFFFF, 0xFFFCFFFF, 0x7FFDFFFF, 0x00000000, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0x6FFDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x5BFCFFFF, 0xFEFCFFFF, 0xEBFCFFFF, 0x24FFFFFF, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x08FFFFFF, 0x80FFFFFF, 0xFAFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1EFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xB7FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x06FFFFFF, 0xCDFDFFFF, 0xFFFCFFFF, 0x5FFCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xC4FCFFFF, 0xF9FCFFFF, 0xDBFCFFFF, 
        0xF1FCFFFF, 0x0AFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x04FFFFFF, 0xCEFDFFFF, 0xFFFCFFFF, 0x6BFDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x28FFFFFF, 0xF6FCFFFF, 0xFBFCFFFF, 0x24FFFFFF, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0x6FFDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x42FBFFFF, 0xF9FCFFFF, 0xF6FCFFFF, 0x39FBFFFF, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x3AFFFFFF, 0xD7FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1EFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xB7FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x7AFDFFFF, 0xFFFCFFFF, 0x8CFBFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x25FFFFFF, 0xFEFCFFFF, 0xB0FCFFFF, 0x77FDFFFF, 
        0xFFFCFFFF, 0x5CFCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x4AFCFFFF, 0xFFFCFFFF, 0xC3FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x97FCFFFF, 0xFFFCFFFF, 0x7EFDFFFF, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0x6FFDFFFF, 0x00000000, 0x00000000, 0x2DF9FFFF, 0xF0FCFFFF, 0xFDFCFFFF, 0x52FCFFFF, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x0AFFFFFF, 0x88FFFFFF, 0xFDFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1EFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xB7FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x87FBFFFF, 0xFFFCFFFF, 0x7FFDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x83FBFFFF, 0xFFFCFFFF, 0x55FCFFFF, 0x1EFFFFFF, 
        0xFDFCFFFF, 0xBCFCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x9AFCFFFF, 0xFFFCFFFF, 0x68FDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x43FBFFFF, 0xBBFCFFFF, 0x7EFDFFFF, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0x6FFDFFFF, 0x00000000, 0x1CFFFFFF, 0xE3FCFFFF, 0xFFFCFFFF, 0x70FDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x2FFFFFFF, 0xDFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1EFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xB7FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x2AFFFFFF, 0xECFCFFFF, 0xFAFCFFFF, 0x28FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x02FFFFFF, 0xE1FCFFFF, 0xF1FCFFFF, 0x08FFFFFF, 0x00000000, 
        0xC0FCFFFF, 0xFDFCFFFF, 0x1FFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xC0FCFFFF, 0xFFFCFFFF, 0x37FAFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0x6FFDFFFF, 0x0FFFFFFF, 0xD2FDFFFF, 0xFFFCFFFF, 0x90FBFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0xC7FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1EFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xE2FCFFFF, 0x99FCFFFF, 0x99FCFFFF, 0x9DFCFFFF, 0xBEFCFFFF, 0xFAFCFFFF, 0xEDFCFFFF, 0x51FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x43FBFFFF, 0xFFFCFFFF, 0x9EFCFFFF, 0x00000000, 0x00000000, 
        0x65FCFFFF, 0xFFFCFFFF, 0x7DFDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xD7FBFFFF, 0xFFFCFFFF, 0x26FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0x74FDFFFF, 0xBCFCFFFF, 0xFFFCFFFF, 0xCFFDFFFF, 0x02FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0xF0FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1EFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xD8FBFFFF, 0x4DFCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xA3FCFFFF, 0xFFFCFFFF, 0x43FBFFFF, 0x00000000, 0x00000000, 
        0x11FFFFFF, 0xF8FCFFFF, 0xDBFCFFFF, 0x01FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xDDFCFFFF, 0xFFFCFFFF, 0x22FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0xECFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFDFCFFFF, 0x47FBFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0xB9FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1EFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xB7FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x0EFFFFFF, 0x48FBFFFF, 0xDFFCFFFF, 0xFCFCFFFF, 0x47FBFFFF, 0x00000000, 0x00000000, 0x00000000, 0x0EFFFFFF, 0xF5FCFFFF, 0xE5FCFFFF, 0x03FFFFFF, 0x00000000, 0x00000000, 
        0x00000000, 0xAEFCFFFF, 0xFFFCFFFF, 0x3DFBFFFF, 0x00000000, 0x00000000, 0x00000000, 0xD8FBFFFF, 0xFFFCFFFF, 0x29FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xC9FCFFFF, 0x6EFDFFFF, 0xFFFCFFFF, 0xE9FCFFFF, 0x1AFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x22FFFFFF, 0xD5FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1EFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xB7FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x47FBFFFF, 0xFFFCFFFF, 0xC3FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x63FCFFFF, 0xFFFCFFFF, 0xCDFDFFFF, 0x77FDFFFF, 0x77FDFFFF, 0x77FDFFFF, 
        0x77FDFFFF, 0xAFFCFFFF, 0xFFFCFFFF, 0x9DFCFFFF, 0x00000000, 0x00000000, 0x00000000, 0xC7FCFFFF, 0xFFFCFFFF, 0x44FBFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0xD3FDFFFF, 0x12FFFFFF, 0x00000000, 0xA1FCFFFF, 0xFFFCFFFF, 0xBFFCFFFF, 0x03FFFFFF, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x05FFFFFF, 0x77FFFFFF, 0xF9FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1EFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xB7FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0FFFFFFF, 0xFFFCFFFF, 0xF2FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0xC2FCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 
        0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xF2FCFFFF, 0x0BFFFFFF, 0x00000000, 0x00000000, 0x9CFCFFFF, 0xFFFCFFFF, 0x68FDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x3CFBFFFF, 0xAAFCFFFF, 0x73FDFFFF, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0x6FFDFFFF, 0x00000000, 0x00000000, 0x0BFFFFFF, 0xD6FBFFFF, 0xFFFCFFFF, 0x82FBFFFF, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x2EFFFFFF, 0xCBFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1EFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xB7FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x24FFFFFF, 0xFFFCFFFF, 0xEAFCFFFF, 0x00000000, 0x00000000, 0x24FFFFFF, 0xFEFCFFFF, 0xD6FBFFFF, 0x33FAFFFF, 0x33FAFFFF, 0x33FAFFFF, 0x33FAFFFF, 
        0x33FAFFFF, 0x33FAFFFF, 0xA9FCFFFF, 0xFFFCFFFF, 0x5DFCFFFF, 0x00000000, 0x00000000, 0x53FCFFFF, 0xFFFCFFFF, 0xC0FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x95FCFFFF, 0xFFFCFFFF, 0x7DFDFFFF, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0x6FFDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x2CF9FFFF, 0xF5FCFFFF, 0xFDFCFFFF, 0x43FBFFFF, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x04FFFFFF, 0x77FFFFFF, 0xF8FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1EFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xB7FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x02FFFFFF, 0xA0FCFFFF, 0xFFFCFFFF, 0xAAFCFFFF, 0x00000000, 0x00000000, 0x82FBFFFF, 0xFFFCFFFF, 0x7BFDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x00000000, 0x41FBFFFF, 0xFFFCFFFF, 0xBCFCFFFF, 0x00000000, 0x00000000, 0x05FFFFFF, 0xD9FBFFFF, 0xFFFCFFFF, 0x60FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x25FFFFFF, 0xF4FCFFFF, 0xF9FCFFFF, 0x22FFFFFF, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0x6FFDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x63FCFFFF, 0xFFFCFFFF, 0xE7FCFFFF, 0x18FFFFFF, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x29FFFFFF, 0xC6FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x18FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xD9FBFFFF, 0x77FDFFFF, 0x77FDFFFF, 0x77FDFFFF, 0x8BFBFFFF, 0xCFFDFFFF, 0xFFFCFFFF, 0xF0FCFFFF, 0x28FFFFFF, 0x00000000, 0x02FFFFFF, 0xE0FCFFFF, 0xFEFCFFFF, 0x22FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x00000000, 0x02FFFFFF, 0xE3FCFFFF, 0xFDFCFFFF, 0x1FFFFFFF, 0x00000000, 0x00000000, 0x36FAFFFF, 0xF3FCFFFF, 0xFDFCFFFF, 0x9CFCFFFF, 0x51FCFFFF, 0x53FCFFFF, 0x82FBFFFF, 0xEDFCFFFF, 0xFFFCFFFF, 0x78FDFFFF, 0x00000000, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0x6FFDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xA3FCFFFF, 0xFFFCFFFF, 0xBCFCFFFF, 0x02FFFFFF,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x03FFFFFF, 0x70FFFFFF, 0xF5FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD9FFFFFF, 0x01FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x45FBFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFAFCFFFF, 0xB3FCFFFF, 0x29FFFFFF, 0x00000000, 0x00000000, 0x42FBFFFF, 0xFFFCFFFF, 0xC5FCFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x00000000, 0x00000000, 0x89FBFFFF, 0xFFFCFFFF, 0x7DFDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x34FAFFFF, 0xCFFDFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xFFFCFFFF, 0xE9FCFFFF, 0x68FDFFFF, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x8DFBFFFF, 0xFFFCFFFF, 0x6FFDFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0CFFFFFF, 0xD8FBFFFF, 0xFFFCFFFF, 0x7DFDFFFF,
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x23FFFFFF, 0xB0FFFFFF, 0xF4FFFFFF, 0xCAFFFFFF, 0x2CFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x0EFFFFFF, 0x33FAFFFF, 0x33FAFFFF, 0x33FAFFFF, 0x33FAFFFF, 0x33FAFFFF, 0x26FFFFFF, 0x09FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x19FFFFFF, 0x33FAFFFF, 0x1DFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x00000000, 0x00000000, 0x11FFFFFF, 0x33FAFFFF, 0x24FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x2EF9FFFF, 0x58FCFFFF, 0x5CFCFFFF, 0x3CFBFFFF, 0x07FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x1CFFFFFF, 0x33FAFFFF, 0x16FFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x17FFFFFF, 0x33FAFFFF, 0x30FAFFFF
#else
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xD2FFFFFF, 0x40FFFFFF, 0x07FFFFFF, 0x40FFFFFF, 0xDEFFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xF1FFFFFF, 0xCCFFFFFA, 0xCCFFFFFA, 0xCCFFFFFA, 0xCCFFFFFA, 0xCFFFFFFA, 0xE9FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xD7FFFFFF, 0xCCFFFFFA, 
        0xFEFFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xDBFFFFFF, 0xB1FFFFFC, 0xA0FFFFFC, 0xBCFFFFFB, 0xF5FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xE3FFFFFF, 0xCCFFFFFA, 0xE9FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xCFFFFFFA, 0xCCFFFFFA, 0xE7FFFFFF,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF9FFFFFF, 0x7FFFFFFF, 0x06FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x34FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x0BFFFFFC, 0x5BFFFFFC, 0xE5FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF1FFFFFF, 0x0AFFFFFC, 0x00FFFFFC, 
        0xC3FFFFFB, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xD9FFFFFF, 0x43FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x10FFFFFC, 0x90FFFFFD, 0xFEFFFFFF, 0xFF000000, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x90FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x87FFFFFD, 0x00FFFFFC, 0x24FFFFFC, 0xEBFFFFFF,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xCBFFFFFF, 0x2DFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xEAFFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x26FFFFFB, 0x88FFFFFD, 0x88FFFFFD, 0x85FFFFFD, 0x6CFFFFFC, 0x21FFFFFC, 0x00FFFFFC, 0x25FFFFFB, 0xF6FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x9BFFFFFC, 0x00FFFFFC, 0x00FFFFFC, 
        0x63FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xD0FFFFFA, 0x12FFFFFC, 0x01FFFFFC, 0x55FFFFFC, 0xA5FFFFFC, 0xAEFFFFFC, 0x7EFFFFFB, 0x10FFFFFC, 0x00FFFFFC, 0x80FFFFFD, 0xFF000000, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x90FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xA4FFFFFC, 0x01FFFFFC, 0x14FFFFFC, 0xDBFFFFFF, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF7FFFFFF, 0x7FFFFFFF, 0x05FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xE1FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x48FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF9FFFFFF, 0x32FFFFFD, 0x00FFFFFC, 0xA0FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x3BFFFFFC, 0x06FFFFFC, 0x24FFFFFC, 
        0x0EFFFFFC, 0xF5FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFBFFFFFF, 0x31FFFFFD, 0x00FFFFFC, 0x94FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xD7FFFFFF, 0x09FFFFFC, 0x04FFFFFC, 0xDBFFFFFF, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x90FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xBDFFFFFB, 0x06FFFFFC, 0x09FFFFFC, 0xC6FFFFFB, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xC5FFFFFF, 0x28FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xE1FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x48FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x85FFFFFD, 0x00FFFFFC, 0x73FFFFFB, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xDAFFFFFF, 0x01FFFFFC, 0x4FFFFFFC, 0x88FFFFFD, 
        0x00FFFFFC, 0xA3FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xB5FFFFFC, 0x00FFFFFC, 0x3CFFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x68FFFFFC, 0x00FFFFFC, 0x81FFFFFD, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x90FFFFFD, 0xFF000000, 0xFF000000, 0xD2FFFFF9, 0x0FFFFFFC, 0x02FFFFFC, 0xADFFFFFC, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xF5FFFFFF, 0x77FFFFFF, 0x02FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xE1FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x48FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x78FFFFFB, 0x00FFFFFC, 0x80FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x7CFFFFFB, 0x00FFFFFC, 0xAAFFFFFC, 0xE1FFFFFF, 
        0x02FFFFFC, 0x43FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x65FFFFFC, 0x00FFFFFC, 0x97FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xBCFFFFFB, 0x44FFFFFC, 0x81FFFFFD, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x90FFFFFD, 0xFF000000, 0xE3FFFFFF, 0x1CFFFFFC, 0x00FFFFFC, 0x8FFFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xD0FFFFFF, 0x20FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xE1FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x48FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xD5FFFFFF, 0x13FFFFFC, 0x05FFFFFC, 0xD7FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFDFFFFFF, 0x1EFFFFFC, 0x0EFFFFFC, 0xF7FFFFFF, 0xFF000000, 
        0x3FFFFFFC, 0x02FFFFFC, 0xE0FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x3FFFFFFC, 0x00FFFFFC, 0xC8FFFFFA, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x90FFFFFD, 0xF0FFFFFF, 0x2DFFFFFD, 0x00FFFFFC, 0x6FFFFFFB, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0x38FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xE1FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x1DFFFFFC, 0x66FFFFFC, 0x66FFFFFC, 0x62FFFFFC, 0x41FFFFFC, 0x05FFFFFC, 0x12FFFFFC, 0xAEFFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xBCFFFFFB, 0x00FFFFFC, 0x61FFFFFC, 0xFF000000, 0xFF000000, 
        0x9AFFFFFC, 0x00FFFFFC, 0x82FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x28FFFFFB, 0x00FFFFFC, 0xD9FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x8BFFFFFD, 0x43FFFFFC, 0x00FFFFFC, 0x30FFFFFD, 0xFDFFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0x0FFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xE1FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x27FFFFFB, 0xB2FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x5CFFFFFC, 0x00FFFFFC, 0xBCFFFFFB, 0xFF000000, 0xFF000000, 
        0xEEFFFFFF, 0x07FFFFFC, 0x24FFFFFC, 0xFEFFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0x22FFFFFC, 0x00FFFFFC, 0xDDFFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x13FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x02FFFFFC, 0xB8FFFFFB, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0x46FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xE1FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x48FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xF1FFFFFF, 0xB7FFFFFB, 0x20FFFFFC, 0x03FFFFFC, 0xB8FFFFFB, 0xFF000000, 0xFF000000, 0xFF000000, 0xF1FFFFFF, 0x0AFFFFFC, 0x1AFFFFFC, 0xFCFFFFFF, 0xFF000000, 0xFF000000, 
        0xFF000000, 0x51FFFFFC, 0x00FFFFFC, 0xC2FFFFFB, 0xFF000000, 0xFF000000, 0xFF000000, 0x27FFFFFB, 0x00FFFFFC, 0xD6FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x00FFFFFC, 0x36FFFFFC, 0x91FFFFFD, 0x00FFFFFC, 0x16FFFFFC, 0xE5FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xDDFFFFFF, 0x2AFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xE1FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x48FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xB8FFFFFB, 0x00FFFFFC, 0x3CFFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0x9CFFFFFC, 0x00FFFFFC, 0x32FFFFFD, 0x88FFFFFD, 0x88FFFFFD, 0x88FFFFFD, 
        0x88FFFFFD, 0x50FFFFFC, 0x00FFFFFC, 0x62FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0x38FFFFFC, 0x00FFFFFC, 0xBBFFFFFB, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x2CFFFFFD, 0xEDFFFFFF, 0xFF000000, 0x5EFFFFFC, 0x00FFFFFC, 0x40FFFFFC, 0xFCFFFFFF, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFAFFFFFF, 0x88FFFFFF, 0x06FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xE1FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x48FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF0FFFFFF, 0x00FFFFFC, 0x0DFFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0x3DFFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 
        0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x0DFFFFFC, 0xF4FFFFFF, 0xFF000000, 0xFF000000, 0x63FFFFFC, 0x00FFFFFC, 0x97FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xC3FFFFFB, 0x55FFFFFC, 0x8CFFFFFD, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x90FFFFFD, 0xFF000000, 0xFF000000, 0xF4FFFFFF, 0x29FFFFFB, 0x00FFFFFC, 0x7DFFFFFB, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xD1FFFFFF, 0x34FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xE1FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x48FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xDBFFFFFF, 0x00FFFFFC, 0x15FFFFFC, 0xFF000000, 0xFF000000, 0xDBFFFFFF, 0x01FFFFFC, 0x29FFFFFB, 0xCCFFFFFA, 0xCCFFFFFA, 0xCCFFFFFA, 0xCCFFFFFA, 
        0xCCFFFFFA, 0xCCFFFFFA, 0x56FFFFFC, 0x00FFFFFC, 0xA2FFFFFC, 0xFF000000, 0xFF000000, 0xACFFFFFC, 0x00FFFFFC, 0x3FFFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x6AFFFFFC, 0x00FFFFFC, 0x82FFFFFD, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x90FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xD3FFFFF9, 0x0AFFFFFC, 0x02FFFFFC, 0xBCFFFFFB, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFBFFFFFF, 0x88FFFFFF, 0x07FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xE1FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x48FFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFDFFFFFF, 0x5FFFFFFC, 0x00FFFFFC, 0x55FFFFFC, 0xFF000000, 0xFF000000, 0x7DFFFFFB, 0x00FFFFFC, 0x84FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xBEFFFFFB, 0x00FFFFFC, 0x43FFFFFC, 0xFF000000, 0xFF000000, 0xFAFFFFFF, 0x26FFFFFB, 0x00FFFFFC, 0x9FFFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xDAFFFFFF, 0x0BFFFFFC, 0x06FFFFFC, 0xDDFFFFFF, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x90FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x9CFFFFFC, 0x00FFFFFC, 0x18FFFFFC, 0xE7FFFFFF, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xD6FFFFFF, 0x39FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xE7FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x26FFFFFB, 0x88FFFFFD, 0x88FFFFFD, 0x88FFFFFD, 0x74FFFFFB, 0x30FFFFFD, 0x00FFFFFC, 0x0FFFFFFC, 0xD7FFFFFF, 0xFF000000, 0xFDFFFFFF, 0x1FFFFFFC, 0x01FFFFFC, 0xDDFFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFDFFFFFF, 0x1CFFFFFC, 0x02FFFFFC, 0xE0FFFFFF, 0xFF000000, 0xFF000000, 0xC9FFFFFA, 0x0CFFFFFC, 0x02FFFFFC, 0x63FFFFFC, 0xAEFFFFFC, 0xACFFFFFC, 0x7DFFFFFB, 0x12FFFFFC, 0x00FFFFFC, 0x87FFFFFD, 0xFF000000, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x90FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x5CFFFFFC, 0x00FFFFFC, 0x43FFFFFC, 0xFDFFFFFF,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFCFFFFFF, 0x8FFFFFFF, 0x0AFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x26FFFFFF, 0xFEFFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xBAFFFFFB, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x05FFFFFC, 0x4CFFFFFC, 0xD6FFFFFF, 0xFF000000, 0xFF000000, 0xBDFFFFFB, 0x00FFFFFC, 0x3AFFFFFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0x76FFFFFB, 0x00FFFFFC, 0x82FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xCBFFFFFA, 0x30FFFFFD, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x00FFFFFC, 0x16FFFFFC, 0x97FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0x72FFFFFB, 0x00FFFFFC, 0x90FFFFFD, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF3FFFFFF, 0x27FFFFFB, 0x00FFFFFC, 0x82FFFFFD,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xDCFFFFFF, 0x4FFFFFFF, 0x0BFFFFFF, 0x35FFFFFF, 0xD3FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xF1FFFFFF, 0xCCFFFFFA, 0xCCFFFFFA, 0xCCFFFFFA, 0xCCFFFFFA, 0xCCFFFFFA, 0xD9FFFFFF, 0xF6FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xE6FFFFFF, 0xCCFFFFFA, 0xE2FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xEEFFFFFF, 0xCCFFFFFA, 0xDBFFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xD1FFFFF9, 0xA7FFFFFC, 0xA3FFFFFC, 0xC3FFFFFB, 0xF8FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xE3FFFFFF, 0xCCFFFFFA, 0xE9FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xE8FFFFFF, 0xCCFFFFFA, 0xCFFFFFFA
#endif
};

GUI_CONST_STORAGE GUI_BITMAP bmbutton_back = {
  74, // xSize
  17, // ySize
  296, // BytesPerLine
  32, // BitsPerPixel
  (unsigned char *)_acbutton_back,  // Pointer to picture data
  NULL,  // Pointer to palette
#if (GUI_USE_ARGB == 1)
  GUI_DRAW_BMPM8888I
#else
  GUI_DRAW_BMP8888
#endif
};

/*************************** End of file ****************************/
