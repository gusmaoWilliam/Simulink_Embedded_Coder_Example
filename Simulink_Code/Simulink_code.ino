#include "Tasks.h"

unsigned long base_time = millis();

void setup() {

  Serial.begin(9600);
  
  InitTask();
  // put your setup code here, to run once:

}

void loop() 
{
  if((millis() - base_time) >= 10)
  {
    InputsTask_10ms();
    MainTask_10ms();
    OutputsTask_10ms();

    base_time = millis();
    Serial.print("ADC: ");
    Serial.println(In_Potentiometer_MBD);
    Serial.print("PWM: ");
    Serial.println(Out_PWMLed_MBD);
    
  }

}
