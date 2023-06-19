/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.9 and Signal Processing Toolbox 8.5.
 * Generated on: 23-May-2023 11:20:43
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II
 * Numerator Length    : 19
 * Denominator Length  : 19
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\Polyspace\R2020b\extern\include\tmwtypes.h 
 */
const int NL = 19;
const real64_T NUM[19] = {
  0.0002233581300223, -0.00253420933399,  0.01378538017592, -0.04769527178829,
     0.1170683429756,  -0.2143029987048,   0.2967939600509,  -0.3020887517376,
     0.1936033254904,-1.631276471862e-18,  -0.1936033254904,   0.3020887517376,
    -0.2967939600509,   0.2143029987048,  -0.1170683429756,  0.04769527178829,
   -0.01378538017592,  0.00253420933399,-0.0002233581300223
};
const int DL = 19;
const real64_T DEN[19] = {
                   1,   -13.92777425877,    93.25739474987,    -398.599128241,
      1218.029550976,   -2824.601864464,    5149.904935581,   -7546.303186913,
      9007.757278663,   -8823.441139122,    7109.088716608,   -4700.338987107,
      2531.593137165,   -1095.867700112,    372.9751419861,   -96.34060603309,
       17.7934718547,   -2.098229650665,   0.1189894793197
};