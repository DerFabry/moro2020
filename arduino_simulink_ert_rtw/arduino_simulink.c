/*
 * arduino_simulink.c
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

#include "arduino_simulink.h"
#include "arduino_simulink_private.h"

/* Block states (default storage) */
DW_arduino_simulink_T arduino_simulink_DW;

/* Real-time model */
RT_MODEL_arduino_simulink_T arduino_simulink_M_;
RT_MODEL_arduino_simulink_T *const arduino_simulink_M = &arduino_simulink_M_;

/* Forward declaration for local functions */
static void arduino_simu_SystemCore_release(codertarget_arduinobase_inter_T *obj);
static void arduino_simul_SystemCore_delete(codertarget_arduinobase_inter_T *obj);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_inter_T *obj);
static void arduino_simu_SystemCore_release(codertarget_arduinobase_inter_T *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(14UL);
    MW_AnalogIn_Close(obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE);
  }
}

static void arduino_simul_SystemCore_delete(codertarget_arduinobase_inter_T *obj)
{
  arduino_simu_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_inter_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    arduino_simul_SystemCore_delete(obj);
  }
}

/* Model step function */
void arduino_simulink_step(void)
{
  uint16_T tmp;
  codertarget_arduinobase_inter_T *obj;

  /* MATLABSystem: '<Root>/Analog Input' */
  if (arduino_simulink_DW.obj.SampleTime !=
      arduino_simulink_P.AnalogInput_SampleTime) {
    arduino_simulink_DW.obj.SampleTime =
      arduino_simulink_P.AnalogInput_SampleTime;
  }

  obj = &arduino_simulink_DW.obj;
  obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(14UL);
  MW_AnalogInSingle_ReadResult
    (arduino_simulink_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE, &tmp, 3);

  /* End of MATLABSystem: '<Root>/Analog Input' */
}

/* Model initialize function */
void arduino_simulink_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(arduino_simulink_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&arduino_simulink_DW, 0,
                sizeof(DW_arduino_simulink_T));

  {
    codertarget_arduinobase_inter_T *obj;

    /* Start for MATLABSystem: '<Root>/Analog Input' */
    arduino_simulink_DW.obj.matlabCodegenIsDeleted = true;
    arduino_simulink_DW.obj.isInitialized = 0L;
    arduino_simulink_DW.obj.SampleTime = -1.0;
    arduino_simulink_DW.obj.matlabCodegenIsDeleted = false;
    arduino_simulink_DW.obj.SampleTime =
      arduino_simulink_P.AnalogInput_SampleTime;
    obj = &arduino_simulink_DW.obj;
    arduino_simulink_DW.obj.isSetupComplete = false;
    arduino_simulink_DW.obj.isInitialized = 1L;
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(14UL);
    arduino_simulink_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void arduino_simulink_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  matlabCodegenHandle_matlabCodeg(&arduino_simulink_DW.obj);
}
