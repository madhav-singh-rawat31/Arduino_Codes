#include<LiquidCrystal.h>
const int rs=12,en=11,d4=,d5=4,d6=3,d7=2;
LiquidCrystal led(rs,en,d4,d5,d6,d7);

void setup()
{
    led.begin(16,2);
}

void loop()
{
    led.setCursor(5,1);
    led.print("Mohit");
    
    led.setCursor(5,0);
    led.print("Satyam");
 }
