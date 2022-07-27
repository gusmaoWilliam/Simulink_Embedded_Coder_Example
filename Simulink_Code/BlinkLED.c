/*
 * File: BlinkLED.c
 *
 * Code generated for Simulink model 'BlinkLED'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Tue Jul 26 23:14:24 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BlinkLED.h"
#include "BlinkLED_private.h"

/* Exported block states */
uint32_T In_Potentiometer_MBD;         /* '<S1>/Data Store Memory' */
uint8_T Out_PWMLed_MBD;                /* '<S6>/Data Store Memory2' */

/* Real-time model */
RT_MODEL_BlinkLED_T BlinkLED_M_;
RT_MODEL_BlinkLED_T *const BlinkLED_M = &BlinkLED_M_;

/* Model step function */
void BlinkLED_step(void)
{
  /* S-Function (fcncallgen): '<S4>/Function-Call Generator' incorporates:
   *  SubSystem: '<S3>/Function-Call Subsystem'
   */
  /* S-Function (fcncallgen): '<S4>/Function-Call Generator' incorporates:
   *  SubSystem: '<S2>/Function-Call Subsystem'
   */
  /* DataStoreWrite: '<S6>/Data Store Write' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant1'
   *  DataStoreRead: '<S1>/Data Store Read'
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  DataTypeConversion: '<S5>/Data Type Conversion1'
   *  Product: '<S5>/Divide'
   *  Product: '<S5>/Product'
   */
  Out_PWMLed_MBD = (uint8_T)(int32_T)fmod((int32_T)floor((real_T)
    In_Potentiometer_MBD * 255.0 / 1023.0), 256.0);

  /* End of Outputs for S-Function (fcncallgen): '<S4>/Function-Call Generator' */
}

/* Model initialize function */
void BlinkLED_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(BlinkLED_M, (NULL));

  /* states (dwork) */

  /* exported global states */
  In_Potentiometer_MBD = 0U;
  Out_PWMLed_MBD = 0U;
}

/* Model terminate function */
void BlinkLED_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
