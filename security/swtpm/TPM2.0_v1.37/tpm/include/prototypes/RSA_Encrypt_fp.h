/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)

    Created by TpmStructures Version 2.7 Sept 13, 2016
    This file created on Sep 22, 2016, 05:27:02PM 

*/

#ifdef TPM_CC_RSA_Encrypt // Command must be defined
#ifndef _RSA_Encrypt_H
#define _RSA_Encrypt_H

// Input structure definition
typedef struct {
    TPMI_DH_OBJECT          keyHandle;
    TPM2B_PUBLIC_KEY_RSA    message;
    TPMT_RSA_DECRYPT        inScheme;
    TPM2B_DATA              label;
} RSA_Encrypt_In;

// Output structure definition
typedef struct {
    TPM2B_PUBLIC_KEY_RSA    outData;
} RSA_Encrypt_Out;

// Response code modifiers
#define    RC_RSA_Encrypt_keyHandle    (TPM_RC_H + TPM_RC_1)
#define    RC_RSA_Encrypt_message      (TPM_RC_P + TPM_RC_1)
#define    RC_RSA_Encrypt_inScheme     (TPM_RC_P + TPM_RC_2)
#define    RC_RSA_Encrypt_label        (TPM_RC_P + TPM_RC_3)

// Function prototype
TPM_RC
TPM2_RSA_Encrypt(
    RSA_Encrypt_In *in,
    RSA_Encrypt_Out *out
);


#endif  // _RSA_Encrypt_H
#endif  // TPM_CC_RSA_Encrypt
