#include "OLED_Driver.h"
#include "GUI_paint.h"
#include "DEV_Config.h"
#include "Debug.h"
#include "ImageData.h"

// Define eye parameters
#define EYE_WIDTH 50
#define EYE_HEIGHT 100
#define EYE_RADIUS 26
#define PUPIL_RADIUS 8
#define EYE_COLOR WHITE
#define PUPIL_COLOR BLACK
#define EYE_BLINK_DELAY 500 // milliseconds

// Define pixel size
#define PIXEL_SIZE DOT_PIXEL_DFT

void setup() {
  System_Init();
  if (USE_IIC) {
    Serial.print("Only USE_SPI_4W, Please revise DEV_config.h !!!");
    return 0;
  }

  Serial.print(F("OLED_Init()...\r\n"));
  OLED_1in5_rgb_Init();
  Driver_Delay_ms(500);
  OLED_1in5_rgb_Clear();

  // Create a new image
  UBYTE *BlackImage;
  Serial.print("Paint_NewImage\r\n");
  Paint_NewImage(BlackImage, OLED_1in5_RGB_WIDTH, OLED_1in5_RGB_HEIGHT, 0, BLACK);
  Paint_SetScale(65);
}

void loop() {
  // Clear the image
  // OLED_1in5_rgb_Clear();

  // Draw the eyes
  int eye1X = (OLED_1in5_RGB_WIDTH - EYE_WIDTH) / 2 - EYE_WIDTH / 1.4;
  int eye2X = (OLED_1in5_RGB_WIDTH - EYE_WIDTH) / 2 + EYE_WIDTH / 1.4;
  int eyeY = (OLED_1in5_RGB_HEIGHT - EYE_HEIGHT) / 2;

  // Draw outer circle of eye 1
  Paint_DrawCircle(eye1X + EYE_WIDTH / 2, eyeY + EYE_HEIGHT / 2, EYE_RADIUS, EYE_COLOR, PIXEL_SIZE, DRAW_FILL_FULL);
  
  // Draw inner circle (pupil) of eye 1
  Paint_DrawCircle(eye1X + EYE_WIDTH / 2, eyeY + EYE_HEIGHT / 2, PUPIL_RADIUS, PUPIL_COLOR, PIXEL_SIZE, DRAW_FILL_FULL);

  // Draw outer circle of eye 2
  Paint_DrawCircle(eye2X + EYE_WIDTH / 2, eyeY + EYE_HEIGHT / 2, EYE_RADIUS, EYE_COLOR, PIXEL_SIZE, DRAW_FILL_FULL);

  // Draw inner circle (pupil) of eye 2
  Paint_DrawCircle(eye2X + EYE_WIDTH / 2, eyeY + EYE_HEIGHT / 2, PUPIL_RADIUS, PUPIL_COLOR, PIXEL_SIZE, DRAW_FILL_FULL);

  // Update the OLED display
  // Blinking animation
  // delay(EYE_BLINK_DELAY);
  // OLED_1in5_rgb_Clear();
  delay(2000);
}
