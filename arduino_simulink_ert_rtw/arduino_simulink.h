/*
 * arduino_simulink.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "arduino_simulink".
 *
 * Model version              : 1.2
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Aug 13 17:15:12 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_arduino_simulink_h_
#define RTW_HEADER_arduino_simulink_h_
#include <stddef.h>
#include <string.h>
#ifndef arduino_simulink_COMMON_INCLUDES_
# define arduino_simulink_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_AnalogIn.h"
#endif                                 /* arduino_simulink_COMMON_INCLUDES_ */

#include "arduino_simulink_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Analog Input' */
} DW_arduino_simulink_T;

/* Parameters (default storage) */
struct P_arduino_simulink_T_ {
  real_T AnalogInput_SampleTime;       /* Expression: -1
                                        * Referenced by: '<Root>/Analog Input'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_arduino_simulink_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_arduino_simulink_T arduino_simulink_P;

/* Block states (default storage) */
extern DW_arduino_simulink_T arduino_simulink_DW;

/* Model entry point functions */
extern void arduino_simulink_initialize(void);
extern void arduino_simulink_step(void);
extern void arduino_simulink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_arduino_simulink_T *const arduino_simulink_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<Root>' : 'arduino_simulink'
 */
#endif                                 /* RTW_HEADER_arduino_simulink_h_ */
