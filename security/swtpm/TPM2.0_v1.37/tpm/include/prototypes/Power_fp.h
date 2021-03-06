/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _POWER_FP_H_
#define    _POWER_FP_H_

//*** TPMInit()
// This function is used to process a power on event.
#ifndef INLINE_FUNCTIONS
void
TPMInit(
    void
    );
#else
INLINE void
TPMInit(
    void
    )
{
    // Set state as not initialized. This means that Startup is required
    g_initialized = FALSE;
    return;
}
#endif  // INLINE_FUNCTIONS

//*** TPMRegisterStartup()
// This function registers the fact that the TPM has been initialized
// (a TPM2_Startup() has completed successfully).
#ifndef INLINE_FUNCTIONS
void
TPMRegisterStartup(
    void
    );
#else
INLINE void
TPMRegisterStartup(
    void
    )
{
    g_initialized = TRUE;
    return;
}
#endif  // INLINE_FUNCTIONS

//*** TPMIsStarted()
// Indicates if the TPM has been initialized (a TPM2_Startup() has completed
// successfully after a _TPM_Init).
// return type: BOOL
//      TRUE        TPM has been initialized
//      FALSE       TPM has not been initialized
#ifndef INLINE_FUNCTIONS
BOOL
TPMIsStarted(
    void
    );
#else
INLINE BOOL
TPMIsStarted(
    void
    )
{
    return g_initialized;
}
#endif // INLINE_FUNCTIONS


#endif  // _POWER_FP_H_
