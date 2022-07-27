#include <Arduino.h>
#include "Tasks.h"
#include "Interface.h"



void InitTask()
{
    pinMode(LED, OUTPUT);
    pinMode(POT, INPUT);

    BlinkLED_initialize();

}

void InputsTask_10ms()
{
    Update_Inputs();
}
void MainTask_10ms()
{
    BlinkLED_step();

}
void OutputsTask_10ms()
{
    Update_Outputs();
}
