/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_CheckCommunications.c
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
#include "LabB_CheckCommunications_dt.h"
#define LabB_CheckCommunicati_PinNumber (6.0)
#define LabB_CheckCommunicatio_DLPFmode (0.0)
#define LabB_CheckCommunication_Encoder (1.0)
#define LabB_CheckCommunications_PinA  (19.0)
#define LabB_CheckCommunications_PinB  (18.0)

/* Block signals (default storage) */
BlockIO_LabB_CheckCommunication LabB_CheckCommunications_B;

/* Block states (default storage) */
D_Work_LabB_CheckCommunications LabB_CheckCommunications_DWork;

/* Real-time model */
RT_MODEL_LabB_CheckCommunicatio LabB_CheckCommunications_M_;
RT_MODEL_LabB_CheckCommunicatio *const LabB_CheckCommunications_M =
  &LabB_CheckCommunications_M_;

/* Forward declaration for local functions */
static void SystemProp_matlabCodegenSet_fhh(soMPU6050Accel_LabB_CheckCommun *obj,
  boolean_T value);
static void matlabCodegenHandle_matlabC_fhh(soMPU6050Accel_LabB_CheckCommun *obj);
static void SystemProp_matlabCodegenSetA_fh(Encoder_arduino_LabB_CheckCommu *obj,
  boolean_T value);
static void matlabCodegenHandle_matlabCo_fh(Encoder_arduino_LabB_CheckCommu *obj);
static void SystemProp_matlabCodegenSetAn_f(soMPU6050Gyro_LabB_CheckCommuni *obj,
  boolean_T value);
static void matlabCodegenHandle_matlabCod_f(soMPU6050Gyro_LabB_CheckCommuni *obj);
static void SystemProp_matlabCodegenSe_fhhy(codertarget_arduinobase_blocks_ *obj,
  boolean_T value);
static void matlabCodegenHandle_matlab_fhhy(codertarget_arduinobase_blocks_ *obj);
static void SystemProp_matlabCodegenSetAnyP(codertarget_arduinobase_inter_f *obj,
  boolean_T value);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_inter_f *obj);
static codertarget_arduinobase_inter_f *arduino_PWMOutput_arduino_PWMOu
  (codertarget_arduinobase_inter_f *obj);
real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int16_T u0_0;
  int16_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(u0_0, u1_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

static void SystemProp_matlabCodegenSet_fhh(soMPU6050Accel_LabB_CheckCommun *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void matlabCodegenHandle_matlabC_fhh(soMPU6050Accel_LabB_CheckCommun *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSet_fhh(obj, true);
  }
}

static void SystemProp_matlabCodegenSetA_fh(Encoder_arduino_LabB_CheckCommu *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void matlabCodegenHandle_matlabCo_fh(Encoder_arduino_LabB_CheckCommu *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetA_fh(obj, true);
  }
}

static void SystemProp_matlabCodegenSetAn_f(soMPU6050Gyro_LabB_CheckCommuni *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void matlabCodegenHandle_matlabCod_f(soMPU6050Gyro_LabB_CheckCommuni *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAn_f(obj, true);
  }
}

static void SystemProp_matlabCodegenSe_fhhy(codertarget_arduinobase_blocks_ *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void matlabCodegenHandle_matlab_fhhy(codertarget_arduinobase_blocks_ *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSe_fhhy(obj, true);
  }
}

static void SystemProp_matlabCodegenSetAnyP(codertarget_arduinobase_inter_f *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_inter_f *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
  }
}

static codertarget_arduinobase_inter_f *arduino_PWMOutput_arduino_PWMOu
  (codertarget_arduinobase_inter_f *obj)
{
  codertarget_arduinobase_inter_f *b_obj;
  obj->isInitialized = 0L;
  b_obj = obj;
  obj->Hw.AvailablePwmPinNames.f1 = '2';
  obj->Hw.AvailablePwmPinNames.f2 = '3';
  obj->Hw.AvailablePwmPinNames.f3 = '4';
  obj->Hw.AvailablePwmPinNames.f4 = '5';
  obj->Hw.AvailablePwmPinNames.f5 = '6';
  obj->Hw.AvailablePwmPinNames.f6 = '7';
  obj->Hw.AvailablePwmPinNames.f7 = '8';
  obj->Hw.AvailablePwmPinNames.f8 = '9';
  obj->Hw.AvailablePwmPinNames.f9[0] = '1';
  obj->Hw.AvailablePwmPinNames.f9[1] = '0';
  obj->Hw.AvailablePwmPinNames.f10[0] = '1';
  obj->Hw.AvailablePwmPinNames.f10[1] = '1';
  obj->Hw.AvailablePwmPinNames.f11[0] = '1';
  obj->Hw.AvailablePwmPinNames.f11[1] = '2';
  obj->Hw.AvailablePwmPinNames.f12[0] = '1';
  obj->Hw.AvailablePwmPinNames.f12[1] = '3';
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

/* Model step function */
void LabB_CheckCommunications_step(void)
{
  int16_T out[3];
  real_T rtb_Switch;
  int16_T rtb_Abs;
  real_T u0;
  uint8_T rtb_Switch_0;

  /* MATLABSystem: '<S1>/Accelerometer' */
  MPU6050Accel_Read(out);

  /* Gain: '<S2>/Gain' incorporates:
   *  Constant: '<S1>/accelerometer angle bias'
   *  Constant: '<S1>/angle offset'
   *  DataTypeConversion: '<S1>/Data Type Conversion1'
   *  DataTypeConversion: '<S1>/Data Type Conversion2'
   *  Gain: '<S1>/raw y acceleration to g_y'
   *  Gain: '<S1>/raw z acceleration to g_z'
   *  MATLABSystem: '<S1>/Accelerometer'
   *  Sum: '<S1>/Sum1'
   *  Sum: '<S1>/Sum3'
   *  Trigonometry: '<S1>/g_y and g_z to angle in radians'
   */
  LabB_CheckCommunications_B.Gain = ((rt_atan2d_snf
    (LabB_CheckCommunications_P.rawyaccelerationtog_y_Gain * (real_T)out[1],
     LabB_CheckCommunications_P.rawzaccelerationtog_z_Gain * (real_T)out[2]) +
    LabB_CheckCommunications_P.accelerometeranglebias_Value) +
    LabB_CheckCommunications_P.angleoffset_Value) *
    LabB_CheckCommunications_P.Gain_Gain;

  /* MATLABSystem: '<S1>/M2V3 Left Connector 18, 19' */
  LabB_CheckCommunications_B.M2V3LeftConnector1819 = enc_output
    (LabB_CheckCommunication_Encoder);

  /* Gain: '<S3>/Gain' incorporates:
   *  Constant: '<S1>/angle offset'
   *  DiscreteIntegrator: '<S1>/angular velocity to angle'
   *  Sum: '<S1>/Sum'
   *  Sum: '<S1>/Sum4'
   */
  LabB_CheckCommunications_B.Gain_j =
    ((LabB_CheckCommunications_P.angleoffset_Value +
      LabB_CheckCommunications_DWork.angularvelocitytoangle_DSTATE) +
     LabB_CheckCommunications_P.angleoffset_Value) *
    LabB_CheckCommunications_P.Gain_Gain_o;

  /* Sin: '<Root>/Sine Wave' */
  if (LabB_CheckCommunications_DWork.systemEnable != 0L) {
    rtb_Switch = LabB_CheckCommunications_P.SineWave_Freq *
      LabB_CheckCommunications_M->Timing.taskTime0;
    LabB_CheckCommunications_DWork.lastSin = sin(rtb_Switch);
    LabB_CheckCommunications_DWork.lastCos = cos(rtb_Switch);
    LabB_CheckCommunications_DWork.systemEnable = 0L;
  }

  LabB_CheckCommunications_B.SineWave = ((LabB_CheckCommunications_DWork.lastSin
    * LabB_CheckCommunications_P.SineWave_PCos +
    LabB_CheckCommunications_DWork.lastCos *
    LabB_CheckCommunications_P.SineWave_PSin) *
    LabB_CheckCommunications_P.SineWave_HCos +
    (LabB_CheckCommunications_DWork.lastCos *
     LabB_CheckCommunications_P.SineWave_PCos -
     LabB_CheckCommunications_DWork.lastSin *
     LabB_CheckCommunications_P.SineWave_PSin) *
    LabB_CheckCommunications_P.SineWave_Hsin) *
    LabB_CheckCommunications_P.SineWave_Amp +
    LabB_CheckCommunications_P.SineWave_Bias;

  /* End of Sin: '<Root>/Sine Wave' */
  /* MATLABSystem: '<S1>/Gyroscope' */
  MPU6050Gyro_Read(out);

  /* Gain: '<S1>/conversion to duty cycle (convert to int)' */
  rtb_Switch = floor(LabB_CheckCommunications_P.conversiontodutycycleconverttoi *
                     LabB_CheckCommunications_B.SineWave);
  if (rtIsNaN(rtb_Switch) || rtIsInf(rtb_Switch)) {
    rtb_Switch = 0.0;
  } else {
    rtb_Switch = fmod(rtb_Switch, 65536.0);
  }

  rtb_Abs = rtb_Switch < 0.0 ? -(int16_T)(uint16_T)-rtb_Switch : (int16_T)
    (uint16_T)rtb_Switch;

  /* End of Gain: '<S1>/conversion to duty cycle (convert to int)' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant2'
   */
  if (rtb_Abs >= LabB_CheckCommunications_P.Switch_Threshold) {
    rtb_Switch = LabB_CheckCommunications_P.Constant2_Value;
  } else {
    rtb_Switch = LabB_CheckCommunications_P.Constant1_Value;
  }

  /* End of Switch: '<S1>/Switch' */

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  if (rtb_Switch < 256.0) {
    if (rtb_Switch >= 0.0) {
      rtb_Switch_0 = (uint8_T)rtb_Switch;
    } else {
      rtb_Switch_0 = 0U;
    }
  } else {
    rtb_Switch_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S5>/Data Type Conversion' */

  /* MATLABSystem: '<S5>/Digital Output' */
  writeDigitalPin((uint8_T)LabB_CheckCommunicati_PinNumber, rtb_Switch_0);

  /* Abs: '<S1>/Abs' */
  if (rtb_Abs < 0) {
    rtb_Abs = -rtb_Abs;
  }

  /* End of Abs: '<S1>/Abs' */

  /* Sum: '<S1>/Add2' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  u0 = LabB_CheckCommunications_P.Constant3_Value + (real_T)rtb_Abs;

  /* Saturate: '<S1>/Saturation 0 to 255' */
  if (u0 > LabB_CheckCommunications_P.Saturation0to255_UpperSat) {
    u0 = LabB_CheckCommunications_P.Saturation0to255_UpperSat;
  } else {
    if (u0 < LabB_CheckCommunications_P.Saturation0to255_LowerSat) {
      u0 = LabB_CheckCommunications_P.Saturation0to255_LowerSat;
    }
  }

  /* End of Saturate: '<S1>/Saturation 0 to 255' */

  /* MATLABSystem: '<S1>/PWM' incorporates:
   *  Abs: '<S1>/Abs3'
   *  Gain: '<S1>/Gain1'
   *  Sum: '<S1>/Add1'
   */
  MW_PWM_SetDutyCycle(LabB_CheckCommunications_DWork.obj.MW_PWM_HANDLE, fabs
                      (LabB_CheckCommunications_P.Gain1_Gain_b * rtb_Switch - u0));

  /* Update for DiscreteIntegrator: '<S1>/angular velocity to angle' incorporates:
   *  Constant: '<S1>/gyro velocity bias'
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  Gain: '<S1>/raw x velocity to deg. // sec.'
   *  Gain: '<S4>/Gain1'
   *  MATLABSystem: '<S1>/Gyroscope'
   *  Sum: '<S1>/Sum2'
   */
  LabB_CheckCommunications_DWork.angularvelocitytoangle_DSTATE +=
    (LabB_CheckCommunications_P.rawxvelocitytodegsec_Gain * (real_T)out[0] *
     LabB_CheckCommunications_P.Gain1_Gain +
     LabB_CheckCommunications_P.gyrovelocitybias_Value) *
    LabB_CheckCommunications_P.angularvelocitytoangle_gainval;

  /* Update for Sin: '<Root>/Sine Wave' */
  rtb_Switch = LabB_CheckCommunications_DWork.lastSin;
  LabB_CheckCommunications_DWork.lastSin =
    LabB_CheckCommunications_DWork.lastSin *
    LabB_CheckCommunications_P.SineWave_HCos +
    LabB_CheckCommunications_DWork.lastCos *
    LabB_CheckCommunications_P.SineWave_Hsin;
  LabB_CheckCommunications_DWork.lastCos =
    LabB_CheckCommunications_DWork.lastCos *
    LabB_CheckCommunications_P.SineWave_HCos - rtb_Switch *
    LabB_CheckCommunications_P.SineWave_Hsin;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.01s, 0.0s] */
    rtExtModeUpload(0, LabB_CheckCommunications_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.01s, 0.0s] */
    if ((rtmGetTFinal(LabB_CheckCommunications_M)!=-1) &&
        !((rtmGetTFinal(LabB_CheckCommunications_M)-
           LabB_CheckCommunications_M->Timing.taskTime0) >
          LabB_CheckCommunications_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(LabB_CheckCommunications_M, "Simulation finished");
    }

    if (rtmGetStopRequested(LabB_CheckCommunications_M)) {
      rtmSetErrorStatus(LabB_CheckCommunications_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  LabB_CheckCommunications_M->Timing.taskTime0 =
    (++LabB_CheckCommunications_M->Timing.clockTick0) *
    LabB_CheckCommunications_M->Timing.stepSize0;
}

/* Model initialize function */
void LabB_CheckCommunications_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)LabB_CheckCommunications_M, 0,
                sizeof(RT_MODEL_LabB_CheckCommunicatio));
  rtmSetTFinal(LabB_CheckCommunications_M, -1);
  LabB_CheckCommunications_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  LabB_CheckCommunications_M->Sizes.checksums[0] = (3948676997U);
  LabB_CheckCommunications_M->Sizes.checksums[1] = (934146650U);
  LabB_CheckCommunications_M->Sizes.checksums[2] = (3899614533U);
  LabB_CheckCommunications_M->Sizes.checksums[3] = (719601668U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[8];
    LabB_CheckCommunications_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(LabB_CheckCommunications_M->extModeInfo,
      &LabB_CheckCommunications_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(LabB_CheckCommunications_M->extModeInfo,
                        LabB_CheckCommunications_M->Sizes.checksums);
    rteiSetTPtr(LabB_CheckCommunications_M->extModeInfo, rtmGetTPtr
                (LabB_CheckCommunications_M));
  }

  /* block I/O */
  (void) memset(((void *) &LabB_CheckCommunications_B), 0,
                sizeof(BlockIO_LabB_CheckCommunication));

  /* states (dwork) */
  (void) memset((void *)&LabB_CheckCommunications_DWork, 0,
                sizeof(D_Work_LabB_CheckCommunications));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    LabB_CheckCommunications_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 19;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    codertarget_arduinobase_inter_f *obj;

    /* Start for MATLABSystem: '<S1>/Accelerometer' */
    LabB_CheckCommunications_DWork.obj_g.matlabCodegenIsDeleted = true;
    LabB_CheckCommunications_DWork.obj_g.isInitialized = 0L;
    LabB_CheckCommunications_DWork.obj_g.matlabCodegenIsDeleted = false;
    LabB_CheckCommunications_DWork.obj_g.isSetupComplete = false;
    LabB_CheckCommunications_DWork.obj_g.isInitialized = 1L;
    MPU6050Accel_Init();
    LabB_CheckCommunications_DWork.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/M2V3 Left Connector 18, 19' */
    LabB_CheckCommunications_DWork.obj_c.matlabCodegenIsDeleted = true;
    LabB_CheckCommunications_DWork.obj_c.isInitialized = 0L;
    LabB_CheckCommunications_DWork.obj_c.matlabCodegenIsDeleted = false;
    LabB_CheckCommunications_DWork.obj_c.isSetupComplete = false;
    LabB_CheckCommunications_DWork.obj_c.isInitialized = 1L;
    enc_init(LabB_CheckCommunication_Encoder, LabB_CheckCommunications_PinA,
             LabB_CheckCommunications_PinB);
    LabB_CheckCommunications_DWork.obj_c.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/Gyroscope' */
    LabB_CheckCommunications_DWork.obj_pd.matlabCodegenIsDeleted = true;
    LabB_CheckCommunications_DWork.obj_pd.isInitialized = 0L;
    LabB_CheckCommunications_DWork.obj_pd.matlabCodegenIsDeleted = false;
    LabB_CheckCommunications_DWork.obj_pd.isSetupComplete = false;
    LabB_CheckCommunications_DWork.obj_pd.isInitialized = 1L;
    MPU6050Gyro_Init(LabB_CheckCommunicatio_DLPFmode);
    LabB_CheckCommunications_DWork.obj_pd.isSetupComplete = true;

    /* Start for MATLABSystem: '<S5>/Digital Output' */
    LabB_CheckCommunications_DWork.obj_p.matlabCodegenIsDeleted = true;
    LabB_CheckCommunications_DWork.obj_p.isInitialized = 0L;
    LabB_CheckCommunications_DWork.obj_p.matlabCodegenIsDeleted = false;
    LabB_CheckCommunications_DWork.obj_p.isSetupComplete = false;
    LabB_CheckCommunications_DWork.obj_p.isInitialized = 1L;
    digitalIOSetup((uint8_T)LabB_CheckCommunicati_PinNumber, true);
    LabB_CheckCommunications_DWork.obj_p.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/PWM' */
    LabB_CheckCommunications_DWork.obj.matlabCodegenIsDeleted = true;
    arduino_PWMOutput_arduino_PWMOu(&LabB_CheckCommunications_DWork.obj);
    obj = &LabB_CheckCommunications_DWork.obj;
    LabB_CheckCommunications_DWork.obj.isSetupComplete = false;
    LabB_CheckCommunications_DWork.obj.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(8UL, 0.0, 0.0);
    MW_PWM_Start(LabB_CheckCommunications_DWork.obj.MW_PWM_HANDLE);
    LabB_CheckCommunications_DWork.obj.isSetupComplete = true;

    /* InitializeConditions for DiscreteIntegrator: '<S1>/angular velocity to angle' */
    LabB_CheckCommunications_DWork.angularvelocitytoangle_DSTATE =
      LabB_CheckCommunications_P.angularvelocitytoangle_IC;

    /* Enable for Sin: '<Root>/Sine Wave' */
    LabB_CheckCommunications_DWork.systemEnable = 1L;
  }
}

/* Model terminate function */
void LabB_CheckCommunications_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/Accelerometer' */
  matlabCodegenHandle_matlabC_fhh(&LabB_CheckCommunications_DWork.obj_g);

  /* Terminate for MATLABSystem: '<S1>/M2V3 Left Connector 18, 19' */
  matlabCodegenHandle_matlabCo_fh(&LabB_CheckCommunications_DWork.obj_c);

  /* Terminate for MATLABSystem: '<S1>/Gyroscope' */
  matlabCodegenHandle_matlabCod_f(&LabB_CheckCommunications_DWork.obj_pd);

  /* Terminate for MATLABSystem: '<S5>/Digital Output' */
  matlabCodegenHandle_matlab_fhhy(&LabB_CheckCommunications_DWork.obj_p);

  /* Terminate for MATLABSystem: '<S1>/PWM' */
  matlabCodegenHandle_matlabCodeg(&LabB_CheckCommunications_DWork.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
