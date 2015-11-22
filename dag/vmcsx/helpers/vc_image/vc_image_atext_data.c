/* ============================================================================
Copyright (c) 2006-2014, Broadcom Corporation
All rights reserved.
Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
============================================================================ */

/* System includes */

/* Project includes */

/******************************************************************************
Public functions written in this module.
Define as extern here.
******************************************************************************/

/* Check extern defs match above and loads #defines and typedefs */

/******************************************************************************
Extern functions (written in other modules).
Specify through module public interface include files or define
specifically as extern.
******************************************************************************/


/******************************************************************************
Private typedefs, macros and constants. May also be defined just before a
function or group of functions that use the declaration.
******************************************************************************/


/******************************************************************************
Private functions in this module.
Define as static.
******************************************************************************/


/******************************************************************************
Data segments - const and variable.
Declare global and static data here.
Include extern definitions for any external global data used by this module.
******************************************************************************/

const unsigned char atext_widths[96] = {
   6,3,5,7,6,6,6,3,4,4,6,6,4,6,3,6,
   6,6,6,6,6,6,6,6,6,6,3,4,6,6,6,6,
   7,6,6,7,7,6,6,7,7,2,6,6,6,8,6,8,
   6,8,6,6,6,6,6,8,6,6,6,4,6,4,6,6,
   3,6,6,6,6,6,4,6,6,2,3,5,2,8,6,6,
   6,6,5,6,4,6,6,8,6,6,6,6,4,6,6,6
};

const short atext_offsets[96] = {
   4,  0,  5, 14,4485, 26, 49, 11, 65, 72, 79, 88,217, 91,212, 94,
   97,109,114,4218,139,144,156,172,4272,194,4306,4311,221,225,231,235,
   244,262,4365,285,295,4400,4401,4408,4420,330,333,4436,349,353,359,367,
   4476,364,4473,4488,406,412,420,424,430,436,443,448,453,456,461,465,
   468,4567,487,499,509,4617,532,540,594,557,562,569,573,576,595,547,
   604,617,630,636,650,658,667,671,677,683,689,694,705,708,719,235
};

const unsigned char atext_data[729] = {
   16, 96,251,144,255, 19, 51,250, 17, 49,255, 16, 48,255, 17,145,
   250, 20,148,250, 48, 53,250,112,117,255, 17,252, 34,253, 49,252,
   32,253, 17,250,115,252,132,253,147,252,130,253,115,250, 20,144,
   255,148, 48,253, 17, 18,252, 51,253, 81,252,112,253,145,252,116,
   255, 18,252, 80, 96,253,162,255, 16,252, 82, 98,253,160,255, 34,
   114,250, 48,100,250, 52, 96,255, 66,130,250, 96,100,255, 20,160,
   255, 18,252, 68,100,253,146,252, 96, 64,253, 18,255, 33,252, 18,
   146,255, 48,253, 18,252, 68,144,148,255, 32,253, 18,252, 52,253,
   82, 81,250, 82,252,116,253,146,252,128,255,147, 19, 96,100,255,
   20, 16, 64, 66,252,116,100,253,146,252,128,255, 36,253, 18,252,
   48,112,253,146,252,116,100,253, 66,252, 80,255, 16, 20,145,255,
   82,252, 48,253, 18,252, 52,253, 82,252,112,253,146,252,116,253,
   82,255,128,253,146,252,116, 52,253, 18,252, 48, 64,253, 98,252,
   84,255,251, 80,251,144,255,251, 81,129,253,160,255, 36, 80,132,
   255, 64, 68,250,112,116,255, 32, 84,128,255, 48,253, 18,252, 52,
   98,251,146,255, 69, 67,252, 82,253, 99,101, 69,253, 19, 18,252,
   64, 80,253,147,149,255,144, 18,148,250, 97, 99,255,144, 16, 19,
   252, 52,253, 82, 80,250, 82,252,116,253,147,144,255, 37,253, 19,
   252, 80,253,147,252,133,255,144, 16, 19,252, 85,253,147,144,255,
   148,144, 16, 20,250, 80, 83,255, 37,253, 19,252, 80,253,147,252,
   101, 85, 83,255, 80, 85,250, 21,149,250, 16,144,255, 20,116,253,
   146,252,112,255, 16,144,250, 80, 20,250, 80,148,255, 16,144,148,
   255,144, 16,131, 22,150,255,144, 16,148, 20,255,116,150,250, 19,
   252, 86,253,147,252, 80,253, 19,255, 81,148,250,144, 16, 18,252,
   52,253, 82, 80,255,  2,162,250, 36,253, 18,252, 48,253, 82,252,
   116,253,146,252,128,255, 16, 20,250, 18,146,255, 16, 96,253,146,
   252,100, 20,255, 16,146, 20,255, 16,145, 19,149, 22,255, 16,148,
   250,144, 20,255, 16, 82,146,250, 82, 20,255, 16, 20,144,148,255,
   18, 16,160,162,255, 16,164,255, 16, 18,162,160,255, 64, 34, 68,
   255,160,165,255, 16, 49,255,208,253,194,195,252,212,244,148,147,
   146,252,240,253,226,228,255, 16,144,224,253,194,252,228,253,146,
   252,224,255,212,253,194,252,224,253,146,252,244,255, 20,148,228,
   253,194,252,224,253,146,252,228,255,224,228,253,194,252,224,253,
   146,252,132,255, 18,252, 48,144,250,192,194,255,196,148,253,178,
   252,160,250,224,253,194,252,228,253,146,252,224,255,251, 16,192,
   144,255,251, 17,193,145,253,176,255,195,224,147,250, 16,144,255,
   144,192,224,253,193,194,252,227,147,250,227,253,196,197,252,230,
   150,255, 16,192,144,224,253,194,252,228,148,255,192,176,250,224,
   253,194,252,228,253,146,252,224,255,196,180,250,224,253,194,252,
   228,253,146,252,224,255,144,192,224,253,195,255,212,253,194,252,
   208,253,226,252,244,253,146,252,128,255, 32,224,253,146,250,192,
   194,255,192,224,253,146,252,228,196,148,255,192,146,196,255,192,
   145,195,149,198,255,148,192,250,196,144,255,192,146,250,196,177,
   255,192,196,144,148,255, 20,252, 50,253, 80, 96,252,130,253,164,
   255, 17,161,255, 16,252, 50,253, 84,100,252,130,253,160,255, 48,
   253, 33,252, 50,253, 67,252, 52,255
};

/******************************************************************************
Global function definitions.
******************************************************************************/


