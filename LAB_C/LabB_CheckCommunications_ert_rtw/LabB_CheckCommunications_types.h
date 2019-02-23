/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_CheckCommunications_types.h
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

#ifndef RTW_HEADER_LabB_CheckCommunications_types_h_
#define RTW_HEADER_LabB_CheckCommunications_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Custom Type definition for MATLABSystem: '<S1>/PWM' */
#include "MW_SVD.h"
#ifndef typedef_soMPU6050Gyro_LabB_CheckCommuni
#define typedef_soMPU6050Gyro_LabB_CheckCommuni

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} soMPU6050Gyro_LabB_CheckCommuni;

#endif                                 /*typedef_soMPU6050Gyro_LabB_CheckCommuni*/

#ifndef typedef_Encoder_arduino_LabB_CheckCommu
#define typedef_Encoder_arduino_LabB_CheckCommu

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} Encoder_arduino_LabB_CheckCommu;

#endif                                 /*typedef_Encoder_arduino_LabB_CheckCommu*/

#ifndef typedef_soMPU6050Accel_LabB_CheckCommun
#define typedef_soMPU6050Accel_LabB_CheckCommun

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} soMPU6050Accel_LabB_CheckCommun;

#endif                                 /*typedef_soMPU6050Accel_LabB_CheckCommun*/

#ifndef typedef_codertarget_arduinobase_blocks_
#define typedef_codertarget_arduinobase_blocks_

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} codertarget_arduinobase_blocks_;

#endif                                 /*typedef_codertarget_arduinobase_blocks_*/

#ifndef typedef_cell_LabB_CheckCommunications
#define typedef_cell_LabB_CheckCommunications

typedef struct {
  char_T f1;
  char_T f2;
  char_T f3;
  char_T f4;
  char_T f5;
  char_T f6;
  char_T f7;
  char_T f8;
  char_T f9[2];
  char_T f10[2];
  char_T f11[2];
  char_T f12[2];
} cell_LabB_CheckCommunications;

#endif                                 /*typedef_cell_LabB_CheckCommunications*/

#ifndef typedef_codertarget_arduinobase_interna
#define typedef_codertarget_arduinobase_interna

typedef struct {
  cell_LabB_CheckCommunications AvailablePwmPinNames;
} codertarget_arduinobase_interna;

#endif                                 /*typedef_codertarget_arduinobase_interna*/

#ifndef typedef_codertarget_arduinobase_inter_f
#define typedef_codertarget_arduinobase_inter_f

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  codertarget_arduinobase_interna Hw;
  MW_Handle_Type MW_PWM_HANDLE;
} codertarget_arduinobase_inter_f;

#endif                                 /*typedef_codertarget_arduinobase_inter_f*/

/* Parameters (default storage) */
typedef struct Parameters_LabB_CheckCommunicat_ Parameters_LabB_CheckCommunicat;

/* Forward declaration for rtModel */
typedef struct tag_RTM_LabB_CheckCommunication RT_MODEL_LabB_CheckCommunicatio;

#endif                                 /* RTW_HEADER_LabB_CheckCommunications_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
