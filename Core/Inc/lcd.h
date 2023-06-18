/*
 * lcd.h
 *
 *  Created on: Jun 17, 2023
 *      Author: jwoj2
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_
//defining colors of tft display
#define BLACK     0x0000
#define RED       0xf800
#define GREEN     0x07e0
#define BLUE      0x001f
#define YELLOW    0xffe0
#define MAGENTA   0xf81f
#define CYAN      0x07ff
#define WHITE     0xffff

#endif /* INC_LCD_H_ */

#pragma once

#include <stdint.h>

void lcd_init(void);
void lcd_fill_box(int x, int y, int width, int height, uint16_t color);


