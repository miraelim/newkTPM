/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _TPMTOOSSLSUPPORT_FP_H_
#define    _TPMTOOSSLSUPPORT_FP_H_

#if MATH_LIB == OSSL
//*** SupportLibInit()
// This does any initialization required by the support library.
LIB_EXPORT int
SupportLibInit(
    void
    );

//*** OsslContextEnter()
// This function is used to initialize an OpenSSL context at the start of a function
// that will call to an OpenSSL math function.
BN_CTX *
OsslContextEnter(
    void
    );

//*** OsslContextLeave()
// This is the companion function to OsslContextEnter().
void
OsslContextLeave(
    BN_CTX          *context
    );
#endif // MATH_LIB == OSSL


#endif  // _TPMTOOSSLSUPPORT_FP_H_
