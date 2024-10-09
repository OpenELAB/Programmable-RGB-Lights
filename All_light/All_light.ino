
#include "./Adafruit_NeoPixel.h"     //Library file
#define PIN A1                        // Define the pins of the RGB light
#define MAX_LED 8                   //8 RGB light

Adafruit_NeoPixel strip = Adafruit_NeoPixel( MAX_LED, PIN, NEO_RGB + NEO_KHZ800 );
uint8_t i = 0;                            
uint32_t color = strip.Color(0,0,255);   //绿、红、蓝


void setup()
{
  // put your setup code here, it will run once:
  strip.begin();           
  strip.show();           
}


void loop()
{
  for(i=0;i<MAX_LED;i++)   //设置i的值控制点亮灯的序号
  {
    strip.setPixelColor(i, color);  //点亮所有RGB灯为蓝色
  }
    strip.show();
}
