/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_CheckCommunications_data.c
 *
 * Code generated for Simulink model 'LabB_CheckCommunications'.
 *
 * Model version                  : 1.466
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Thu Nov  8 21:49:52 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabB_CheckCommunications.h"
#include "LabB_CheckCommunications_private.h"

/* Block parameters (default storage) */
Parameters_LabB_CheckCommunicat LabB_CheckCommunications_P = {
  /* Expression: 1
   * Referenced by: '<S1>/Constant1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant2'
   */
  0.0,

  /* Expression: pi/2
   * Referenced by: '<S1>/angle offset'
   */
  1.5707963267948966,

  /* Expression: 1 / 2048
   * Referenced by: '<S1>/raw y acceleration to g_y'
   */
  0.00048828125,

  /* Expression: 1 / 2048
   * Referenced by: '<S1>/raw z acceleration to g_z'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S1>/accelerometer angle bias'
   */
  0.0,

  /* Expression: 180/pi
   * Referenced by: '<S2>/Gain'
   */
  57.295779513082323,

  /* Computed Parameter: angularvelocitytoangle_gainval
   * Referenced by: '<S1>/angular velocity to angle'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S1>/angular velocity to angle'
   */
  0.0,

  /* Expression: 180/pi
   * Referenced by: '<S3>/Gain'
   */
  57.295779513082323,

  /* Expression: 1
   * Referenced by: '<Root>/Sine Wave'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Sine Wave'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<Root>/Sine Wave'
   */
  5.0,

  /* Computed Parameter: SineWave_Hsin
   * Referenced by: '<Root>/Sine Wave'
   */
  0.049979169270678331,

  /* Computed Parameter: SineWave_HCos
   * Referenced by: '<Root>/Sine Wave'
   */
  0.99875026039496628,

  /* Computed Parameter: SineWave_PSin
   * Referenced by: '<Root>/Sine Wave'
   */
  -0.049979169270678331,

  /* Computed Parameter: SineWave_PCos
   * Referenced by: '<Root>/Sine Wave'
   */
  0.99875026039496628,

  /* Expression: 1 / 131
   * Referenced by: '<S1>/raw x velocity to deg. // sec.'
   */
  0.0076335877862595417,

  /* Expression: pi/180
   * Referenced by: '<S4>/Gain1'
   */
  0.017453292519943295,

  /* Expression: 0
   * Referenced by: '<S1>/gyro velocity bias'
   */
  0.0,

  /* Expression: 255/5
   * Referenced by: '<S1>/conversion to duty cycle (convert to int)'
   */
  51.0,

  /* Expression: 10
   * Referenced by: '<S1>/Constant3'
   */
  10.0,

  /* Expression: 255
   * Referenced by: '<S1>/Saturation 0 to 255'
   */
  255.0,

  /* Expression: 0
   * Referenced by: '<S1>/Saturation 0 to 255'
   */
  0.0,

  /* Expression: 255
   * Referenced by: '<S1>/Gain1'
   */
  255.0,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S1>/Switch'
   */
  0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
