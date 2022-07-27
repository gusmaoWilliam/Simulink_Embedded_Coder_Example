#include "Interface.h"



void Update_Inputs()
{
    In_Potentiometer_MBD = analogRead(POT);
}
void Update_Outputs()
{
    analogWrite(LED, Out_PWMLed_MBD);

}
