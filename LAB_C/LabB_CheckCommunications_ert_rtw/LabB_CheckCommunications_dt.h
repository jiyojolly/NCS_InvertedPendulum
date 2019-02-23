/*
 * LabB_CheckCommunications_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "LabB_CheckCommunications".
 *
 * Model version              : 1.466
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Thu Nov  8 21:49:52 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(soMPU6050Accel_LabB_CheckCommun),
  sizeof(codertarget_arduinobase_blocks_),
  sizeof(soMPU6050Gyro_LabB_CheckCommuni),
  sizeof(Encoder_arduino_LabB_CheckCommu),
  sizeof(codertarget_arduinobase_inter_f)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "soMPU6050Accel_LabB_CheckCommun",
  "codertarget_arduinobase_blocks_",
  "soMPU6050Gyro_LabB_CheckCommuni",
  "Encoder_arduino_LabB_CheckCommu",
  "codertarget_arduinobase_inter_f"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&LabB_CheckCommunications_B.Gain), 0, 0, 3 },

  { (char_T *)(&LabB_CheckCommunications_B.M2V3LeftConnector1819), 6, 0, 1 }
  ,

  { (char_T *)(&LabB_CheckCommunications_DWork.obj), 18, 0, 1 },

  { (char_T *)(&LabB_CheckCommunications_DWork.obj_g), 14, 0, 1 },

  { (char_T *)(&LabB_CheckCommunications_DWork.obj_p), 15, 0, 1 },

  { (char_T *)(&LabB_CheckCommunications_DWork.obj_pd), 16, 0, 1 },

  { (char_T *)(&LabB_CheckCommunications_DWork.obj_c), 17, 0, 1 },

  { (char_T *)(&LabB_CheckCommunications_DWork.angularvelocitytoangle_DSTATE), 0,
    0, 3 },

  { (char_T *)(&LabB_CheckCommunications_DWork.accelerometer_PWORK.LoggedData),
    11, 0, 4 },

  { (char_T *)(&LabB_CheckCommunications_DWork.systemEnable), 6, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  10U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&LabB_CheckCommunications_P.Constant1_Value), 0, 0, 25 },

  { (char_T *)(&LabB_CheckCommunications_P.Switch_Threshold), 4, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  2U,
  rtPTransitions
};

/* [EOF] LabB_CheckCommunications_dt.h */
