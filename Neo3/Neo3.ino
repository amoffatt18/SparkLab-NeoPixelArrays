#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(64, 6);

int colors;

void setup() {
  strip.begin();
  strip.clear();
  strip.setBrightness(30);

}

void loop() {
  for (int i = 0; i < strip.numPixels(); i++) {
    int red = 255;
    strip.setPixelColor(i, red, 0, 0);
  }
  strip.show();
  delay (500);
}
