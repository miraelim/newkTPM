/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)

    Created by TpmStructures Version 2.7 Sept 13, 2016
    This file created on Sep 22, 2016, 05:27:02PM 

*/

#ifdef TPM_CC_StirRandom // Command must be defined
#ifndef _StirRandom_H
#define _StirRandom_H

// Input structure definition
typedef struct {
    TPM2B_SENSITIVE_DATA    inData;
} StirRandom_In;

// Response code modifiers
#define    RC_StirRandom_inData    (TPM_RC_P + TPM_RC_1)

// Function prototype
TPM_RC
TPM2_StirRandom(
    StirRandom_In *in
);


#endif  // _StirRandom_H
#endif  // TPM_CC_StirRandom
