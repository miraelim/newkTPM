/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)

    Created by TpmStructures Version 2.7 Sept 13, 2016
    This file created on Sep 22, 2016, 05:27:02PM 

*/

#ifdef TPM_CC_ChangePPS // Command must be defined
#ifndef _ChangePPS_H
#define _ChangePPS_H

// Input structure definition
typedef struct {
    TPMI_RH_PLATFORM    authHandle;
} ChangePPS_In;

// Response code modifiers
#define    RC_ChangePPS_authHandle     (TPM_RC_H + TPM_RC_1)

// Function prototype
TPM_RC
TPM2_ChangePPS(
    ChangePPS_In *in
);


#endif  // _ChangePPS_H
#endif  // TPM_CC_ChangePPS
