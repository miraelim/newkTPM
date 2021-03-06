/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _CRYPTSYM_FP_H_
#define    _CRYPTSYM_FP_H_

//** Obligatory Initialization Functions
//

//*** CryptSymInit()
// This function is called to do _TPM_Init processing
BOOL
CryptSymInit(
    void
    );

//*** CryptSymStartup()
// This function is called to do TPM2_Startup() processing
BOOL
CryptSymStartup(
    void
    );

//*** CryptGetSymmetricBlockSize()
// This function returns the block size of the algorithm.
// return type: INT16
//   <= 0     cipher not supported
//   > 0      the cipher block size in bytes
LIB_EXPORT INT16
CryptGetSymmetricBlockSize(
    TPM_ALG_ID      symmetricAlg,   // IN: the symmetric algorithm
    UINT16          keySizeInBits   // IN: the key size
    );

//** Symmetric Encryption
// This function performs symmetric encryption based on the mode.
// return type: TPM_RC
//      TPM_RC_SUCCESS      if success
//      TPM_RC_SIZE         'dSize' is not a multiple of the block size for an
//                          algorithm that requires it
//      TPM_RC_FAILURE      Fatal error
LIB_EXPORT TPM_RC
CryptSymmetricEncrypt(
    BYTE                *dOut,          // OUT:
    TPM_ALG_ID           algorithm,     // IN: the symmetric algorithm
    UINT16               keySizeInBits, // IN: key size in bits
    const BYTE          *key,           // IN: key buffer. The size of this buffer
                                        //     in bytes is (keySizeInBits + 7) / 8
    TPM2B_IV            *ivInOut,       // IN/OUT: IV for decryption.
    TPM_ALG_ID           mode,          // IN: Mode to use
    INT32                dSize,         // IN: data size (may need to be a
                                        //     multiple of the blockSize)
    const BYTE          *dIn            // IN: data buffer
    );

//*** CryptSymmetricDecrypt()
// This function performs symmetric decryption based on the mode.
// return type: TPM_RC
//      TPM_RC_FAILURE      A fatal error
//      TPM_RC_SUCCESS      if success
//      TPM_RCS_SIZE        'dSize' is not a multiple of the block size for an
//                          algorithm that requires it
LIB_EXPORT TPM_RC
CryptSymmetricDecrypt(
    BYTE                *dOut,          // OUT: decrypted data
    TPM_ALG_ID           algorithm,     // IN: the symmetric algorithm
    UINT16               keySizeInBits, // IN: key size in bits
    const BYTE          *key,           // IN: key buffer. The size of this buffer
                                        //     in bytes is (keySizeInBits + 7) / 8
    TPM2B_IV            *ivInOut,       // IN/OUT: IV for decryption.
    TPM_ALG_ID           mode,          // IN: Mode to use
    INT32                dSize,         // IN: data size (may need to be a
                                        //     multiple of the blockSize)
    const BYTE          *dIn            // IN: data buffer
    );

//*** CryptSymKeyValidate()
// Validate that a provided symmetric key meets the requirements of the TPM
// return type: TPM_RC
//  TPM_RC_KEY_SIZE         Key size specifiers do not match
//  TPM_RC_KEY              Key is not allowed
TPM_RC
CryptSymKeyValidate(
    TPMT_SYM_DEF_OBJECT *symDef,
    TPM2B_SYM_KEY       *key
    );


#endif  // _CRYPTSYM_FP_H_
