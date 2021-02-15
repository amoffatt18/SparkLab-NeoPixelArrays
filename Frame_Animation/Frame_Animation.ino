#include <Adafruit_NeoPixel.h>
#include "frames.h"
Adafruit_NeoPixel strip(64, 6);

int colors[7][3] {
  {255, 0 , 0},
  {0, 255 , 0},
  {0, 0 , 255},
  {255, 127, 80},
  {255, 0, 255},
  {173, 216 , 230},
  {255, 255, 0}
};

int whichFrame = 0;

void setup() {
  strip.begin();
  strip.clear();
  strip.setBrightness(50);

}

void loop() {
  for (int i = 0; i < strip.numPixels(); i++) {
    int whichColor = animation[whichFrame][i];
    int red = colors[whichColor][0];
    int green = colors[whichColor][1];
    int blue = colors[whichColor][2];
    int orange = colors[whichColor][3];
    int pink = colors[whichColor][4];
    int lBlue = colors[whichColor][5];
    int yellow = colors[whichColor][6];


    strip.setPixelColor(i, red, green, blue);
  }
  strip.show();
  whichFrame = (whichFrame + 1) % 5;
  delay (500);
}
