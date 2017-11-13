/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)

    Created by TpmStructures Version 2.7 Sept 13, 2016
    This file created on Sep 22, 2016, 05:27:02PM 

*/

#ifdef TPM_CC_Quote // Command must be defined
#ifndef _Quote_H
#define _Quote_H

// Input structure definition
typedef struct {
    TPMI_DH_OBJECT        signHandle;
    TPM2B_DATA            qualifyingData;
    TPMT_SIG_SCHEME       inScheme;
    TPML_PCR_SELECTION    PCRselect;
} Quote_In;

// Output structure definition
typedef struct {
    TPM2B_ATTEST          quoted;
    TPMT_SIGNATURE        signature;
} Quote_Out;

// Response code modifiers
#define    RC_Quote_signHandle        (TPM_RC_H + TPM_RC_1)
#define    RC_Quote_qualifyingData    (TPM_RC_P + TPM_RC_1)
#define    RC_Quote_inScheme          (TPM_RC_P + TPM_RC_2)
#define    RC_Quote_PCRselect         (TPM_RC_P + TPM_RC_3)

// Function prototype
TPM_RC
TPM2_Quote(
    Quote_In *in,
    Quote_Out *out
);


#endif  // _Quote_H
#endif  // TPM_CC_Quote
