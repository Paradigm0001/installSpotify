/*
   NOTE: do not edit this file! It is auto-generated by the "tune" program.
   (Run "make tune" and then "./tune > tuning.c" to regenerate it.)
*/

/*
   tuning.c:  global tuning values

   Copyright (C) 2007, 2008, David Harvey

   This file is part of the zn_poly library (version 0.9).

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 2 of the License, or
   (at your option) version 3 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "zn_poly_internal.h"

size_t ZNP_mpn_smp_kara_thresh = 35;
size_t ZNP_mpn_mulmid_fallback_thresh = 458;

tuning_info_t tuning_info[] = 
{
   {  // bits = 0
   },
   {  // bits = 1
   },
   {  // bits = 2
        141,   // KS1 -> KS2 multiplication threshold
      14733,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
        102,   // KS1 -> KS2 squaring threshold
       3602,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
        102,   // KS1 -> KS2 middle product threshold
       1378,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 3
        112,   // KS1 -> KS2 multiplication threshold
       4308,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         61,   // KS1 -> KS2 squaring threshold
       4817,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
        102,   // KS1 -> KS2 middle product threshold
       2356,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 4
         80,   // KS1 -> KS2 multiplication threshold
       2576,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         57,   // KS1 -> KS2 squaring threshold
       1801,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         72,   // KS1 -> KS2 middle product threshold
       1053,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 5
         67,   // KS1 -> KS2 multiplication threshold
       3294,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         56,   // KS1 -> KS2 squaring threshold
       2303,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         65,   // KS1 -> KS2 middle product threshold
        901,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 6
         57,   // KS1 -> KS2 multiplication threshold
       1152,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         51,   // KS1 -> KS2 squaring threshold
        985,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         62,   // KS1 -> KS2 middle product threshold
        985,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 7
         47,   // KS1 -> KS2 multiplication threshold
       1540,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         43,   // KS1 -> KS2 squaring threshold
        788,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         51,   // KS1 -> KS2 middle product threshold
        451,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 8
         47,   // KS1 -> KS2 multiplication threshold
        901,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         35,   // KS1 -> KS2 squaring threshold
        753,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         43,   // KS1 -> KS2 middle product threshold
        576,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 9
         43,   // KS1 -> KS2 multiplication threshold
        589,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         43,   // KS1 -> KS2 squaring threshold
        493,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         39,   // KS1 -> KS2 middle product threshold
        302,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 10
         38,   // KS1 -> KS2 multiplication threshold
        824,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         35,   // KS1 -> KS2 squaring threshold
        576,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         38,   // KS1 -> KS2 middle product threshold
        337,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 11
         43,   // KS1 -> KS2 multiplication threshold
        431,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         33,   // KS1 -> KS2 squaring threshold
        377,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         33,   // KS1 -> KS2 middle product threshold
        247,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 12
         38,   // KS1 -> KS2 multiplication threshold
        482,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         33,   // KS1 -> KS2 squaring threshold
        403,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         33,   // KS1 -> KS2 middle product threshold
        216,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 13
         33,   // KS1 -> KS2 multiplication threshold
        345,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         30,   // KS1 -> KS2 squaring threshold
        315,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         33,   // KS1 -> KS2 middle product threshold
        189,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 14
         33,   // KS1 -> KS2 multiplication threshold
        345,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         29,   // KS1 -> KS2 squaring threshold
        286,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         31,   // KS1 -> KS2 middle product threshold
        116,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
         13    // nussbaumer squaring threshold
   },
   {  // bits = 15
         31,   // KS1 -> KS2 multiplication threshold
        322,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         23,   // KS1 -> KS2 squaring threshold
        226,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         29,   // KS1 -> KS2 middle product threshold
        121,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
       1000    // nussbaumer squaring threshold
   },
   {  // bits = 16
         29,   // KS1 -> KS2 multiplication threshold
        337,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         25,   // KS1 -> KS2 squaring threshold
        173,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         29,   // KS1 -> KS2 middle product threshold
        101,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
         13    // nussbaumer squaring threshold
   },
   {  // bits = 17
         29,   // KS1 -> KS2 multiplication threshold
        231,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         23,   // KS1 -> KS2 squaring threshold
        216,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         27,   // KS1 -> KS2 middle product threshold
         94,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
         13    // nussbaumer squaring threshold
   },
   {  // bits = 18
         25,   // KS1 -> KS2 multiplication threshold
        189,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         23,   // KS1 -> KS2 squaring threshold
        134,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         23,   // KS1 -> KS2 middle product threshold
         94,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         13    // nussbaumer squaring threshold
   },
   {  // bits = 19
         27,   // KS1 -> KS2 multiplication threshold
        226,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         21,   // KS1 -> KS2 squaring threshold
        216,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         21,   // KS1 -> KS2 middle product threshold
         86,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
         13    // nussbaumer squaring threshold
   },
   {  // bits = 20
         22,   // KS1 -> KS2 multiplication threshold
        144,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         21,   // KS1 -> KS2 squaring threshold
        119,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         21,   // KS1 -> KS2 middle product threshold
         80,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         13    // nussbaumer squaring threshold
   },
   {  // bits = 21
         25,   // KS1 -> KS2 multiplication threshold
        189,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         19,   // KS1 -> KS2 squaring threshold
        121,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         21,   // KS1 -> KS2 middle product threshold
         80,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         13    // nussbaumer squaring threshold
   },
   {  // bits = 22
         21,   // KS1 -> KS2 multiplication threshold
        102,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         21,   // KS1 -> KS2 squaring threshold
        102,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         21,   // KS1 -> KS2 middle product threshold
         70,   // KS2 -> KS4 middle product threshold
   SIZE_MAX,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         13    // nussbaumer squaring threshold
   },
   {  // bits = 23
         22,   // KS1 -> KS2 multiplication threshold
        147,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         17,   // KS1 -> KS2 squaring threshold
        102,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         19,   // KS1 -> KS2 middle product threshold
         72,   // KS2 -> KS4 middle product threshold
      23040,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         12    // nussbaumer squaring threshold
   },
   {  // bits = 24
         19,   // KS1 -> KS2 multiplication threshold
         86,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         19,   // KS1 -> KS2 squaring threshold
         72,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         19,   // KS1 -> KS2 middle product threshold
         66,   // KS2 -> KS4 middle product threshold
      20868,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         12    // nussbaumer squaring threshold
   },
   {  // bits = 25
         21,   // KS1 -> KS2 multiplication threshold
        149,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         19,   // KS1 -> KS2 squaring threshold
        102,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         21,   // KS1 -> KS2 middle product threshold
         66,   // KS2 -> KS4 middle product threshold
      20868,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         12    // nussbaumer squaring threshold
   },
   {  // bits = 26
         17,   // KS1 -> KS2 multiplication threshold
         86,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         16,   // KS1 -> KS2 squaring threshold
         72,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         66,   // KS2 -> KS4 middle product threshold
      16026,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         12    // nussbaumer squaring threshold
   },
   {  // bits = 27
         17,   // KS1 -> KS2 multiplication threshold
        119,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         16,   // KS1 -> KS2 squaring threshold
         64,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         16,   // KS1 -> KS2 middle product threshold
         66,   // KS2 -> KS4 middle product threshold
      16026,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 28
         23,   // KS1 -> KS2 multiplication threshold
        107,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         14,   // KS1 -> KS2 squaring threshold
         62,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         66,   // KS2 -> KS4 middle product threshold
       9451,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 29
         17,   // KS1 -> KS2 multiplication threshold
         85,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         14,   // KS1 -> KS2 squaring threshold
         65,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         16,   // KS1 -> KS2 middle product threshold
         61,   // KS2 -> KS4 middle product threshold
      14044,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 30
         17,   // KS1 -> KS2 multiplication threshold
         66,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         17,   // KS1 -> KS2 squaring threshold
         43,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         61,   // KS2 -> KS4 middle product threshold
      12307,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 31
         17,   // KS1 -> KS2 multiplication threshold
         73,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         13,   // KS1 -> KS2 squaring threshold
         35,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         57,   // KS2 -> KS4 middle product threshold
      16026,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 32
         17,   // KS1 -> KS2 multiplication threshold
         56,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         14,   // KS1 -> KS2 squaring threshold
         40,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         56,   // KS2 -> KS4 middle product threshold
       8013,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 33
         16,   // KS1 -> KS2 multiplication threshold
         47,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         15,   // KS1 -> KS2 squaring threshold
         29,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         14,   // KS1 -> KS2 middle product threshold
         51,   // KS2 -> KS4 middle product threshold
       8560,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 34
         16,   // KS1 -> KS2 multiplication threshold
         47,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         15,   // KS1 -> KS2 squaring threshold
         27,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         47,   // KS2 -> KS4 middle product threshold
       6154,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 35
         16,   // KS1 -> KS2 multiplication threshold
         47,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         13,   // KS1 -> KS2 squaring threshold
         29,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         43,   // KS2 -> KS4 middle product threshold
       7022,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 36
         16,   // KS1 -> KS2 multiplication threshold
         36,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         12,   // KS1 -> KS2 squaring threshold
         29,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         43,   // KS2 -> KS4 middle product threshold
       6154,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 37
         14,   // KS1 -> KS2 multiplication threshold
         36,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         12,   // KS1 -> KS2 squaring threshold
         25,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         14,   // KS1 -> KS2 middle product threshold
         47,   // KS2 -> KS4 middle product threshold
       7022,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 38
         16,   // KS1 -> KS2 multiplication threshold
         30,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         13,   // KS1 -> KS2 squaring threshold
         25,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         14,   // KS1 -> KS2 middle product threshold
         43,   // KS2 -> KS4 middle product threshold
       4726,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 39
         15,   // KS1 -> KS2 multiplication threshold
         32,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         12,   // KS1 -> KS2 squaring threshold
         23,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         40,   // KS2 -> KS4 middle product threshold
       5393,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 40
         13,   // KS1 -> KS2 multiplication threshold
         32,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         12,   // KS1 -> KS2 squaring threshold
         23,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         12,   // KS1 -> KS2 middle product threshold
         38,   // KS2 -> KS4 middle product threshold
       4726,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 41
         13,   // KS1 -> KS2 multiplication threshold
         25,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         12,   // KS1 -> KS2 squaring threshold
         21,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         33,   // KS2 -> KS4 middle product threshold
       4726,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 42
         13,   // KS1 -> KS2 multiplication threshold
         27,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         12,   // KS1 -> KS2 squaring threshold
         23,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         33,   // KS2 -> KS4 middle product threshold
       4280,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 43
         13,   // KS1 -> KS2 multiplication threshold
         24,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         12,   // KS1 -> KS2 squaring threshold
         21,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         31,   // KS2 -> KS4 middle product threshold
       4726,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 44
         13,   // KS1 -> KS2 multiplication threshold
         33,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         10,   // KS1 -> KS2 squaring threshold
         18,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         33,   // KS2 -> KS4 middle product threshold
       4280,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 45
         12,   // KS1 -> KS2 multiplication threshold
         23,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         10,   // KS1 -> KS2 squaring threshold
         19,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         29,   // KS2 -> KS4 middle product threshold
       3877,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 46
         15,   // KS1 -> KS2 multiplication threshold
         25,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         10,   // KS1 -> KS2 squaring threshold
         17,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         31,   // KS2 -> KS4 middle product threshold
       3877,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 47
         12,   // KS1 -> KS2 multiplication threshold
         23,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         12,   // KS1 -> KS2 squaring threshold
         17,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         12,   // KS1 -> KS2 middle product threshold
         29,   // KS2 -> KS4 middle product threshold
       3877,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 48
         13,   // KS1 -> KS2 multiplication threshold
         23,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          9,   // KS1 -> KS2 squaring threshold
         17,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         10,   // KS1 -> KS2 middle product threshold
         25,   // KS2 -> KS4 middle product threshold
       3877,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 49
         12,   // KS1 -> KS2 multiplication threshold
         19,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          8,   // KS1 -> KS2 squaring threshold
         16,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         10,   // KS1 -> KS2 middle product threshold
         25,   // KS2 -> KS4 middle product threshold
       3511,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 50
         10,   // KS1 -> KS2 multiplication threshold
         19,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          9,   // KS1 -> KS2 squaring threshold
         17,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         12,   // KS1 -> KS2 middle product threshold
         27,   // KS2 -> KS4 middle product threshold
       3511,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 51
         10,   // KS1 -> KS2 multiplication threshold
         19,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         10,   // KS1 -> KS2 squaring threshold
         16,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         10,   // KS1 -> KS2 middle product threshold
         23,   // KS2 -> KS4 middle product threshold
       2363,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 52
         12,   // KS1 -> KS2 multiplication threshold
         21,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         10,   // KS1 -> KS2 squaring threshold
         16,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          9,   // KS1 -> KS2 middle product threshold
         24,   // KS2 -> KS4 middle product threshold
       2697,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 53
         12,   // KS1 -> KS2 multiplication threshold
         19,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          8,   // KS1 -> KS2 squaring threshold
         16,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         10,   // KS1 -> KS2 middle product threshold
         24,   // KS2 -> KS4 middle product threshold
       2140,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 54
         12,   // KS1 -> KS2 multiplication threshold
         19,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          9,   // KS1 -> KS2 squaring threshold
         16,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         10,   // KS1 -> KS2 middle product threshold
         23,   // KS2 -> KS4 middle product threshold
       2363,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 55
          9,   // KS1 -> KS2 multiplication threshold
         16,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          8,   // KS1 -> KS2 squaring threshold
         12,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         10,   // KS1 -> KS2 middle product threshold
         19,   // KS2 -> KS4 middle product threshold
       1939,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 56
          9,   // KS1 -> KS2 multiplication threshold
         16,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          8,   // KS1 -> KS2 squaring threshold
         13,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          9,   // KS1 -> KS2 middle product threshold
         19,   // KS2 -> KS4 middle product threshold
       2140,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 57
         10,   // KS1 -> KS2 multiplication threshold
         16,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          9,   // KS1 -> KS2 squaring threshold
         15,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          9,   // KS1 -> KS2 middle product threshold
         21,   // KS2 -> KS4 middle product threshold
       2071,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 58
         12,   // KS1 -> KS2 multiplication threshold
         16,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          9,   // KS1 -> KS2 squaring threshold
         12,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         12,   // KS1 -> KS2 middle product threshold
         25,   // KS2 -> KS4 middle product threshold
       2071,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 59
          8,   // KS1 -> KS2 multiplication threshold
         16,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          7,   // KS1 -> KS2 squaring threshold
         13,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          8,   // KS1 -> KS2 middle product threshold
         19,   // KS2 -> KS4 middle product threshold
       1756,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 60
          8,   // KS1 -> KS2 multiplication threshold
         16,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          7,   // KS1 -> KS2 squaring threshold
         13,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          8,   // KS1 -> KS2 middle product threshold
         17,   // KS2 -> KS4 middle product threshold
       1756,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 61
          8,   // KS1 -> KS2 multiplication threshold
         12,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          7,   // KS1 -> KS2 squaring threshold
         12,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          8,   // KS1 -> KS2 middle product threshold
         19,   // KS2 -> KS4 middle product threshold
       1939,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 62
         10,   // KS1 -> KS2 multiplication threshold
         19,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          7,   // KS1 -> KS2 squaring threshold
         14,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          9,   // KS1 -> KS2 middle product threshold
         23,   // KS2 -> KS4 middle product threshold
       2697,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 63
          9,   // KS1 -> KS2 multiplication threshold
         25,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          7,   // KS1 -> KS2 squaring threshold
         19,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          9,   // KS1 -> KS2 middle product threshold
         23,   // KS2 -> KS4 middle product threshold
       2363,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 64
          9,   // KS1 -> KS2 multiplication threshold
         31,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          7,   // KS1 -> KS2 squaring threshold
         25,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          9,   // KS1 -> KS2 middle product threshold
         25,   // KS2 -> KS4 middle product threshold
       2697,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
};

// end of file ****************************************************************
