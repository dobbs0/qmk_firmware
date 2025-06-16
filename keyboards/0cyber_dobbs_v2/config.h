
#pragma once

#define DISPLAY_DRIVER ST7789
#define QUANTUM_PAINTER_DEBUG

#define DISPLAY_WIDTH  240  
#define DISPLAY_HEIGHT 135  

#define SPI_DRIVER SPID1
#define SPI_SCK_PIN GP10        //CL Pin
#define SPI_MOSI_PIN GP11       //DA Pin
#define SPI_MISO_PIN NO_PIN
#define DISPLAY_CS_PIN   GP13   // Chip Select
#define DISPLAY_DC_PIN   GP15   // Data/Command
#define DISPLAY_RST_PIN  NO_PIN   // Reset pin, optional (can be NO_PIN)
#define DISPLAY_BACKLIGHT_PIN NO_PIN

// #define DISPLAY_ROTATION 0

// #define COLOR_BLACK 0x0000
// #define COLOR_WHITE 0xFFFF

// #define LCD_DC_PIN GP12
// #define LCD_CS_PIN GP9
// #define LCD_RST_PIN GP13

// #define QUANTUM_PAINTER_SUPPORTS_256_PALETTE TRUE
// #define QUANTUM_PAINTER_SUPPORTS_NATIVE_COLORS TRUE

// #define ENCODER_A_PINS { GP13 }
// #define ENCODER_B_PINS { GP14 }

// #define WS2812_DI_PIN GP0
// #define RGBLIGHT_LED_COUNT 17



