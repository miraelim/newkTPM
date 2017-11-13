/*(Copyright)
 *      Microsoft Copyright 2009 - 2016
 *      All rights reserved.
 */

//** Description

//    This module simulates the physical present interface pins on the TPM.

//** Includes
#include "PlatformData.h"
#include "Platform_fp.h"

//** Functions
//***_plat__PhysicalPresenceAsserted()
// Check if physical presence is signaled
// return type: int
//      TRUE(1)          if physical presence is signaled
//      FALSE(0)         if physical presence is not signaled
LIB_EXPORT int
_plat__PhysicalPresenceAsserted(
    void
    )
{
    // Do not know how to check physical presence without real hardware.
    // so always return TRUE;
    return s_physicalPresence;
}

//***_plat__Signal_PhysicalPresenceOn()
// Signal physical presence on
LIB_EXPORT void
_plat__Signal_PhysicalPresenceOn(
    void
    )
{
    s_physicalPresence = TRUE;
    return;
}

//***_plat__Signal_PhysicalPresenceOff()
// Signal physical presence off
LIB_EXPORT void
_plat__Signal_PhysicalPresenceOff(
    void
    )
{
    s_physicalPresence = FALSE;
    return;
}