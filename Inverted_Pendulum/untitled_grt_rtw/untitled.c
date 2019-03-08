/*
 * untitled.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "untitled".
 *
 * Model version              : 1.0
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Thu Mar  7 20:43:02 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Block signals (default storage) */
B_untitled_T untitled_B;

/* External inputs (root inport signals with default storage) */
ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (untitled_M->Timing.TaskCounters.TID[1])++;
  if ((untitled_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [0.02s, 0.0s] */
    untitled_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function */
void untitled_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */
  /* Inport: '<S1>/In1' incorporates:
   *  Inport: '<Root>/In1'
   */
  untitled_B.In1 = untitled_U.In1;

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
  if (untitled_M->Timing.TaskCounters.TID[1] == 0) {
    /* Outputs for Atomic SubSystem: '<Root>/Subsystem1' */
    /* Outport: '<Root>/Out1' incorporates:
     *  Gain: '<S2>/Gain'
     */
    untitled_Y.Out1 = untitled_P.Gain_Gain * untitled_B.In1;

    /* End of Outputs for SubSystem: '<Root>/Subsystem1' */
  }

  /* Matfile logging */
  rt_UpdateTXYLogVars(untitled_M->rtwLogInfo, (&untitled_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.01s, 0.0s] */
    if ((rtmGetTFinal(untitled_M)!=-1) &&
        !((rtmGetTFinal(untitled_M)-untitled_M->Timing.taskTime0) >
          untitled_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(untitled_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++untitled_M->Timing.clockTick0)) {
    ++untitled_M->Timing.clockTickH0;
  }

  untitled_M->Timing.taskTime0 = untitled_M->Timing.clockTick0 *
    untitled_M->Timing.stepSize0 + untitled_M->Timing.clockTickH0 *
    untitled_M->Timing.stepSize0 * 4294967296.0;
  rate_scheduler();
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)untitled_M, 0,
                sizeof(RT_MODEL_untitled_T));
  rtmSetTFinal(untitled_M, 10.0);
  untitled_M->Timing.stepSize0 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    untitled_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(untitled_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(untitled_M->rtwLogInfo, (NULL));
    rtliSetLogT(untitled_M->rtwLogInfo, "tout");
    rtliSetLogX(untitled_M->rtwLogInfo, "");
    rtliSetLogXFinal(untitled_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(untitled_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(untitled_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(untitled_M->rtwLogInfo, 0);
    rtliSetLogDecimation(untitled_M->rtwLogInfo, 1);
    rtliSetLogY(untitled_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(untitled_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(untitled_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &untitled_B), 0,
                sizeof(B_untitled_T));

  /* external inputs */
  untitled_U.In1 = 0.0;

  /* external outputs */
  untitled_Y.Out1 = 0.0;

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(untitled_M->rtwLogInfo, 0.0, rtmGetTFinal
    (untitled_M), untitled_M->Timing.stepSize0, (&rtmGetErrorStatus(untitled_M)));
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}
