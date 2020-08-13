/*
 * arduino_simulink_types.h
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

#ifndef RTW_HEADER_arduino_simulink_types_h_
#define RTW_HEADER_arduino_simulink_types_h_
#include "rtwtypes.h"

/* Model Code Variants */

/* Custom Type definition for MATLABSystem: '<Root>/Analog Input' */
#include "MW_SVD.h"
#ifndef struct_tag_Gc8EcsaAa6B4PVRJCSARvB
#define struct_tag_Gc8EcsaAa6B4PVRJCSARvB

struct tag_Gc8EcsaAa6B4PVRJCSARvB
{
  MW_Handle_Type MW_ANALOGIN_HANDLE;
};

#endif                                 /*struct_tag_Gc8EcsaAa6B4PVRJCSARvB*/

#ifndef typedef_f_arduinodriver_ArduinoAnalog_T
#define typedef_f_arduinodriver_ArduinoAnalog_T

typedef struct tag_Gc8EcsaAa6B4PVRJCSARvB f_arduinodriver_ArduinoAnalog_T;

#endif                               /*typedef_f_arduinodriver_ArduinoAnalog_T*/

#ifndef struct_tag_IH4ZAEwYd2ouei4lGVnLsG
#define struct_tag_IH4ZAEwYd2ouei4lGVnLsG

struct tag_IH4ZAEwYd2ouei4lGVnLsG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  f_arduinodriver_ArduinoAnalog_T AnalogInDriverObj;
  real_T SampleTime;
};

#endif                                 /*struct_tag_IH4ZAEwYd2ouei4lGVnLsG*/

#ifndef typedef_codertarget_arduinobase_inter_T
#define typedef_codertarget_arduinobase_inter_T

typedef struct tag_IH4ZAEwYd2ouei4lGVnLsG codertarget_arduinobase_inter_T;

#endif                               /*typedef_codertarget_arduinobase_inter_T*/

/* Parameters (default storage) */
typedef struct P_arduino_simulink_T_ P_arduino_simulink_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_arduino_simulink_T RT_MODEL_arduino_simulink_T;

#endif                                /* RTW_HEADER_arduino_simulink_types_h_ */
