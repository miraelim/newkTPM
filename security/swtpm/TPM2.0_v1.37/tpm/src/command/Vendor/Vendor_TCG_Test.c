/*(Copyright)
 *      Microsoft Copyright 2009 - 2016
 *      All rights reserved.
 */

#include "Tpm.h"
#include "Vendor_TCG_Test_fp.h"
#include "Marshal_fp.h"

#if defined TPM_CC_Vendor_TCG_Test      // Conditional expansion of this file

// A dummy function for testing.
TPM_RC
TPM2_Vendor_TCG_Test(
    Vendor_TCG_Test_In        *in,            // IN: input parameter list
    Vendor_TCG_Test_Out       *out            // OUT: output parameter list
    )
{
    out->outputData = in->inputData;
    return TPM_RC_SUCCESS;
}

#endif // CC_Vendor_TCG_Test