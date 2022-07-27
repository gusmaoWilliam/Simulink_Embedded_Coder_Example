#ifndef INTERFACE_H
#define INTERFACE_H

#include <Arduino.h>


#include "BlinkLED.h"

const int LED  = 3;
const int POT = A0;

void Update_Inputs();
void Update_Outputs();


#endif
