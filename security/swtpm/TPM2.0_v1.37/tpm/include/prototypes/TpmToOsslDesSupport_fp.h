/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _TPMTOOSSLDESSUPPORT_FP_H_
#define    _TPMTOOSSLDESSUPPORT_FP_H_

#if SYM_LIB == OSSL && defined TPM_ALG_TDES
//**Functions

//*** TDES_set_encyrpt_key()
// This function makes creation of a TDES key look like the creation of a key for
// any of the other OpenSSL block ciphers. It will create three key schedules,
// one for each of the DES keys. If there are only two keys, then the third schedule
// is a copy of the first.
void
TDES_set_encrypt_key(
    const BYTE                  *key,
    UINT16                       keySizeInBits,
    tpmKeyScheduleTDES          *keySchedule
    );

//*** TDES_encyrpt()
// The TPM code uses one key schedule. For TDES, the schedule contains three
// schedules. OpenSSL wants the schedules referenced separately. This function
// does that.
void TDES_encrypt(
    const BYTE              *in,
    BYTE                    *out,
    tpmKeyScheduleTDES      *ks
    );

//*** TDES_decrypt()
// As with TDES_encypt() this function bridges between the TPM single schedule
// model and the OpenSSL three schedule model.
void TDES_decrypt(
    const BYTE          *in,
    BYTE                *out,
    tpmKeyScheduleTDES   *ks
    );
#endif // SYM_LIB == OSSL


#endif  // _TPMTOOSSLDESSUPPORT_FP_H_
