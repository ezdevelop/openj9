/*******************************************************************************
 * Copyright (c) 2002, 2014 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *******************************************************************************/
#define true 1
#define false 0
#include "floatsanityg.h"


   void group_java_lang_Math_sqrt_double() {
      int i=0, groupNum=47,numTests=37;
      int testsPassed=0, testsFailed=0;
      unsigned int op_0 [] = {
         0xbff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0xc0200000, 0x00000000,
         0x40100000, 0x00000000,
         0xc03b0000, 0x00000000,
         0x40220000, 0x00000000,
         0xc0500000, 0x00000000,
         0x40300000, 0x00000000,
         0xc05f4000, 0x00000000,
         0x40390000, 0x00000000,
         0xc06b0000, 0x00000000,
         0x40420000, 0x00000000,
         0xc0757000, 0x00000000,
         0x40488000, 0x00000000,
         0xc0800000, 0x00000000,
         0x40500000, 0x00000000,
         0xc086c800, 0x00000000,
         0x40544000, 0x00000000,
         0xc08f4000, 0x00000000,
         0x40590000, 0x00000000,
         0xc094cc00, 0x00000000,
         0x405e4000, 0x00000000,
         0xc09b0000, 0x00000000,
         0x40620000, 0x00000000,
         0xc0a12a00, 0x00000000,
         0x40652000, 0x00000000,
         0xc0a57000, 0x00000000,
         0x40688000, 0x00000000,
         0xc0aa5e00, 0x00000000,
         0x406c2000, 0x00000000,
         0xc0b00000, 0x00000000,
         0x40700000, 0x00000000,
         0x7ff00000, 0x00000000,
         0x0, 0x0,
         0x80000000, 0x00000000,
         0xfff00000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x0, 0x0};
      unsigned int result [] = {
         0x7ff80000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40000000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40080000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40100000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40140000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40180000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x401c0000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40200000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40220000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40240000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40260000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40280000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x402a0000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x402c0000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x402e0000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40300000, 0x00000000,
         0x7ff00000, 0x00000000,
         0x0, 0x0,
         0x80000000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x0, 0x0};
      double *p0=(double *) op_0;
      double *erp=(double*) result, r, *rp=&r;
      for (i=0; i<numTests; i++) {
         r = java_lang_Math_sqrt_double(*(p0));
         if ( IS_DNAN(erp) ){
            if ( !(IS_DNAN(&r)) ){
               printf("%d.%d: op_0=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *(int *)p0, *((int *)p0+1), *(int *)erp, *((int *) erp + 1), *(int *)&r, *((int *) &r + 1));
               testsFailed++;
            } else {
               testsPassed++;
            }

         } else {
            if ( (HIWORD(&r) != HIWORD(erp)) || (LOWORD(&r) != LOWORD(erp)) ){
               printf("%d.%d: op_0=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *(int *)p0, *((int *)p0+1), *(int *)erp, *((int *) erp + 1), *(int *)&r, *((int *) &r + 1));
               testsFailed++;
            } else {
               testsPassed++;
            }
         }

         p0++;erp++;
      }
      printf("[%d] %s Passed %d Failed %d Total %d \n", groupNum,"java_lang_Math_sqrt_double", testsPassed, testsFailed, numTests);
      totalNumTest +=numTests; totalTestsPassed +=testsPassed; totalTestsFailed +=testsFailed;
   }

