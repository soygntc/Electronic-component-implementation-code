/********************************************************
 * Componente: Display OLED
 * Autora: Giulianna Torres Campodónico
 ********************************************************/
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>

// pin definitions for SPI
#define OLED_MOSI   11
#define OLED_CLK    13
#define OLED_DC     9
#define OLED_CS     10
#define OLED_RESET  8

// Create display object for SPI
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
                         OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

void setup() {
  Serial.begin(9600);

  if (!display.begin(SSD1306_SWITCHCAPVCC)) {
    Serial.println(F("OLED not found via SPI"));
    while (true); //  // initialize the OLED display and stop if display not found
  }

  display.clearDisplay();               // clear the screen
  display.setTextSize(1);               // set text size (1 to 3)
  display.setTextColor(SSD1306_WHITE);  // set text color
  display.setCursor(0, 0);              // set cursor position (x, y)
  display.println("Hello, world!");     // text to display
  display.display();                    // update the screen
}

void loop() {
  // your SPI display code goes here
}
