/*
 * File: BlinkLED.h
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

#ifndef RTW_HEADER_BlinkLED_h_
#define RTW_HEADER_BlinkLED_h_
#include <math.h>
#include <stddef.h>
#ifndef BlinkLED_COMMON_INCLUDES_
# define BlinkLED_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* BlinkLED_COMMON_INCLUDES_ */

#include "BlinkLED_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_BlinkLED_T {
  const char_T *errorStatus;
};

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern uint32_T In_Potentiometer_MBD;  /* '<S1>/Data Store Memory' */
extern uint8_T Out_PWMLed_MBD;         /* '<S6>/Data Store Memory2' */

/* Model entry point functions */
extern void BlinkLED_initialize(void);
extern void BlinkLED_step(void);
extern void BlinkLED_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BlinkLED_T *const BlinkLED_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'BlinkLED'
 * '<S1>'   : 'BlinkLED/Inputs'
 * '<S2>'   : 'BlinkLED/MainFunction'
 * '<S3>'   : 'BlinkLED/Output'
 * '<S4>'   : 'BlinkLED/Scheduler'
 * '<S5>'   : 'BlinkLED/MainFunction/Function-Call Subsystem'
 * '<S6>'   : 'BlinkLED/Output/Function-Call Subsystem'
 */
#endif                                 /* RTW_HEADER_BlinkLED_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
