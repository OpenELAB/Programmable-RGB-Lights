
#include "./Adafruit_NeoPixel.h"     //Library file
#define PIN A1                        // Define the pins of the RGB light
#define MAX_LED 8                   //8 RGB light

Adafruit_NeoPixel strip = Adafruit_NeoPixel( MAX_LED, PIN, NEO_RGB + NEO_KHZ800 );

void setup()
{
  // put your setup code here, it will run once:
  strip.begin();           
  strip.show();           
}

void RGB_Light(int i, int R, int G, int B)
{
  uint32_t color = strip.Color(G, R, B);
  strip.setPixelColor(i, color);
  strip.show();
}

void RGB_OFF()
{ 
  uint8_t i = 0;
  uint32_t color = strip.Color(0, 0, 0);
  for(i=0;i<MAX_LED;i++)   
  {
    strip.setPixelColor(i, color);  
  }
    strip.show();
}

void loop()
{
  RGB_Light(0, 255, 64, 64 );
  delay(100);
  RGB_OFF();
  RGB_Light(1, 255, 165, 0 );
  delay(100);
  RGB_OFF();
  RGB_Light(2, 138, 255, 64 );
  delay(100);
  RGB_OFF();
  RGB_Light(3, 64, 255, 184 );
  delay(100);
  RGB_OFF();
  RGB_Light(4, 64, 174, 255 );
  delay(100);
  RGB_OFF();
  RGB_Light(5, 126, 64, 255 );
  delay(100);
  RGB_OFF();
  RGB_Light(6, 255, 64, 255 );
  delay(100);
  RGB_OFF();
  RGB_Light(7, 187, 132, 168 );
  delay(100);
  RGB_OFF();
}
