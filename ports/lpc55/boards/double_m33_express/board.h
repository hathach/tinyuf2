/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef BOARD_H_
#define BOARD_H_

//--------------------------------------------------------------------+
// Button
//--------------------------------------------------------------------+

// ISP button
#define BUTTON_PORT           0
#define BUTTON_PIN            5
#define BUTTON_STATE_ACTIVE   0

//--------------------------------------------------------------------+
// LED
//--------------------------------------------------------------------+

#define LED_PORT              0
#define LED_PIN               1
#define LED_STATE_ON          1
#define TINYUF2_LED           1

//--------------------------------------------------------------------+
// Neopixel
//--------------------------------------------------------------------+

// Number of neopixels
#define NEOPIXEL_NUMBER       2
#define NEOPIXEL_PORT         0
#define NEOPIXEL_PIN          27
#define NEOPIXEL_CH           6
#define NEOPIXEL_TYPE         0

// Brightness percentage from 1 to 255
#define NEOPIXEL_BRIGHTNESS   0x10

//--------------------------------------------------------------------+
// USB UF2
//--------------------------------------------------------------------+

#define USB_VID           0x1fc9
#define USB_PID           0x0094
#define USB_MANUFACTURER  "Steiert Solutions"
#define USB_PRODUCT       "Double M33"

#define UF2_PRODUCT_NAME  USB_MANUFACTURER " " USB_PRODUCT
#define UF2_BOARD_ID      "Double M33 Express"
#define UF2_VOLUME_LABEL  "DblM33BOOT"
#define UF2_INDEX_URL     "https://www.crowdsupply.com/steiert-solutions/double-m33-express"

//--------------------------------------------------------------------+
// Flash
//--------------------------------------------------------------------+

#define BOARD_FLASH_SIZE     (0x98000U)

//--------------------------------------------------------------------+
// UART
//--------------------------------------------------------------------+

#define UART_DEV              USART0

// Pin initialization function
void board_pin_init(void);

#endif
