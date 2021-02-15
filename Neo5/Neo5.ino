#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip(64, 6);

void setup() {
  
  strip.begin();
  strip.setBrightness(50);
}

void loop() {
  
  strip.clear();


  for (int i = 0; i < strip.numPixels(); i++) {


    strip.setPixelColor(i, strip.Color(225, 0, 0));

    strip.show();
    delay(100);
  }
}
