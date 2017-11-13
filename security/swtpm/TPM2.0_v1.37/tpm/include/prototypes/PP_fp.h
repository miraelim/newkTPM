/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _PP_FP_H_
#define    _PP_FP_H_

//*** PhysicalPresencePreInstall_Init()
// This function is used to initialize the array of commands that always require
// confirmation with physical presence. The array is an array of bits that
// has a correspondence with the command code.
//
// This command should only ever be executable in a manufacturing setting or in
// a simulation.
//
// When set, these cannot be cleared.
//
void
PhysicalPresencePreInstall_Init(
    void
    );

//*** PhysicalPresenceCommandSet()
// This function is used to set the indicator that a command requires
// PP confirmation.
void
PhysicalPresenceCommandSet(
    TPM_CC           commandCode    // IN: command code
    );

//*** PhysicalPresenceCommandClear()
// This function is used to clear the indicator that a command requires PP
// confirmation.
void
PhysicalPresenceCommandClear(
    TPM_CC           commandCode    // IN: command code
    );

//*** PhysicalPresenceIsRequired()
// This function indicates if PP confirmation is required for a command.
// return type: BOOL
//      TRUE           if physical presence is required
//      FALSE          if physical presence is not required
BOOL
PhysicalPresenceIsRequired(
    COMMAND_INDEX    commandIndex   // IN: command index
    );

//*** PhysicalPresenceCapGetCCList()
// This function returns a list of commands that require PP confirmation. The
// list starts from the first implemented command that has a command code that
// the same or greater than 'commandCode'.
// return type: TPMI_YES_NO
//      YES         if there are more command codes available
//      NO          all the available command codes have been returned
TPMI_YES_NO
PhysicalPresenceCapGetCCList(
    TPM_CC           commandCode,   // IN: start command code
    UINT32           count,         // IN: count of returned TPM_CC
    TPML_CC         *commandList    // OUT: list of TPM_CC
    );


#endif  // _PP_FP_H_