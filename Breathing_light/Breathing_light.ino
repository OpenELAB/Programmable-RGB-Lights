
#include "Adafruit_NeoPixel.h"     //Library file
#define PIN A1                       //Define the pins of the RGB light
#define MAX_LED 8

Adafruit_NeoPixel strip = Adafruit_NeoPixel( MAX_LED, PIN, NEO_RGB + NEO_KHZ800 );
uint8_t i = 0;    
uint8_t brightness = 0; 
uint8_t fadeAmount = 1;                        


void setup()
{
  // put your setup code here, it will run once:
  strip.begin();           
  strip.show();           
}


void loop() 
{
   for(i = 0;i < MAX_LED;i++)   
  {
    strip.setPixelColor(i, 0, brightness, brightness);  
  }
   strip.show();
   brightness = brightness + fadeAmount;
   if (brightness <= 0 || brightness >=200)  // 亮度从1 到 200之间变化
   fadeAmount = -fadeAmount ;
   delay(10);
}
