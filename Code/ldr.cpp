#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   
}
void brightness_control(void)
{
  unsigned short input_Val;
    //read the value from LDR sensor
  
  input_Val = analogRead(LDR_SENSOR);
 
  //scale it down from 0 to 1023 To 0 to 255
  input_Val=input_Val/4;

  //set the pwm from 255 to 0
  input_Val = 255- input_Val;
  
  analogWrite (GARDEN_LIGHT, input_Val);
  
  delay(10);
}
