/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _COMMANDCODEATTRIBUTES_FP_H_
#define    _COMMANDCODEATTRIBUTES_FP_H_

//*** GetClosestCommandIndex()
// This function returns the command index for the command with a value that is
// equal to or greater than the input value
COMMAND_INDEX
GetClosestCommandIndex(
    TPM_CC           commandCode    // IN: the command code to start at
    );

//*** CommandCodeToComandIndex()
// This function returns the index in the various attributes arrays of the
// command.
// return type: COMMAND_INDEX
//  UNIMPLEMNED_COMMAND_INDEX       command is not implemented
//  other                           index of the command
COMMAND_INDEX
CommandCodeToCommandIndex(
    TPM_CC           commandCode    // IN: the command code to look up
    );

//*** GetNextCommandIndex()
// This function returns the index of the next implemented command.
// return type: COMMAND_INDEX
//  UNIMPLEMENTED_COMMAND_INDEX     no more implemented commands
//  other                           the index of the next implemented command
COMMAND_INDEX
GetNextCommandIndex(
    COMMAND_INDEX    commandIndex   // IN: the starting index
    );

//*** GetCommandCode()
// This function returns the commandCode associated with the command index
TPM_CC
GetCommandCode(
    COMMAND_INDEX    commandIndex   // IN: the command index
    );

//*** CommandAuthRole()
//
//  This function returns the authorization role required of a handle.
//
// return type:     AUTH_ROLE
//  AUTH_NONE       no authorization is required
//  AUTH_USER       user role authorization is required
//  AUTH_ADMIN      admin role authorization is required
//  AUTH_DUP        duplication role authorization is required
AUTH_ROLE
CommandAuthRole(
    COMMAND_INDEX    commandIndex,  // IN: command index
    UINT32           handleIndex    // IN: handle index (zero based)
    );

//*** EncryptSize()
// This function returns the size of the decrypt size field. This function returns
// 0 if encryption is not allowed
// return type: int
//  0       encryption not allowed
//  2       size field is two bytes
//  4       size field is four bytes
#ifndef INLINE_FUNCTIONS
int
EncryptSize(
    COMMAND_INDEX    commandIndex   // IN: command index
    );
#else
INLINE int
EncryptSize(
    COMMAND_INDEX    commandIndex   // IN: command index
    )
{
    return ((s_commandAttributes[commandIndex] & ENCRYPT_2) ? 2 :
            (s_commandAttributes[commandIndex] & ENCRYPT_4) ? 4 : 0);

}
#endif // INLINE_FUNCTIONS

//*** DecryptSize()
// This function returns the size of the decrypt size field. This function returns
// 0 if decryption is not allowed
// return type: int
//  0       encryption not allowed
//  2       size field is two bytes
//  4       size field is four bytes
#ifndef INLINE_FUNCTIONS
int
DecryptSize(
    COMMAND_INDEX    commandIndex   // IN: command index
    );
#else
INLINE int
DecryptSize(
    COMMAND_INDEX    commandIndex   // IN: command index
    )
{
    return ((s_commandAttributes[commandIndex] & DECRYPT_2) ? 2 :
            (s_commandAttributes[commandIndex] & DECRYPT_4) ? 4 : 0);

}
#endif // INLINE_FUNCTIONS

//*** IsSessionAllowed()
//
// This function indicates if the command is allowed to have sessions.
//
// This function must not be called if the command is not known to be implemented.
//
//  return type:        BOOL
//  TRUE                session is allowed with this command
//  FALSE               session is not allowed with this command
#ifndef INLINE_FUNCTIONS
BOOL
IsSessionAllowed(
    COMMAND_INDEX    commandIndex   // IN: the command to be checked
    );
#else
INLINE BOOL
IsSessionAllowed(
    COMMAND_INDEX    commandIndex   // IN: the command to be checked
    )
{
    return ((s_commandAttributes[commandIndex] & NO_SESSIONS) == 0);

}
#endif // INLINE_FUNCTIONS

//*** IsHandleInResponse()
// This function determines if a command has a handle in the response
#ifndef INLINE_FUNCTIONS
BOOL
IsHandleInResponse(
    COMMAND_INDEX    commandIndex
    );
#else
INLINE BOOL
IsHandleInResponse(
    COMMAND_INDEX    commandIndex
    )
{
    return ((s_commandAttributes[commandIndex] & R_HANDLE) != 0);

}
#endif // INLINE_FUNCTIONS

//*** IsWriteOperation()
// Checks to see if an operation will write to an NV Index and is subject to being
// blocked by read-lock
BOOL
IsWriteOperation(
    COMMAND_INDEX    commandIndex   // IN: Command to check
    );

//*** IsReadOperation()
// Checks to see if an operation will write to an NV Index and is
// subject to being blocked by write-lock.
BOOL
IsReadOperation(
    COMMAND_INDEX    commandIndex   // IN: Command to check
    );

//*** CommandCapGetCCList()
// This function returns a list of implemented commands and command attributes
// starting from the command in 'commandCode'.
// return type: TPMI_YES_NO
//      YES         more command attributes are available
//      NO          no more command attributes are available
TPMI_YES_NO
CommandCapGetCCList(
    TPM_CC           commandCode,   // IN: start command code
    UINT32           count,         // IN: maximum count for number of entries in
                                    //     'commandList'
    TPML_CCA        *commandList    // OUT: list of TPMA_CC
    );

//*** IsVendorCommand()
// Function indicates if a command index references a vendor command.
// return type: BOOL
//  TRUE        command is a vendor command
//  FALSE       command is not a vendor command
#ifndef INLINE_FUNCTIONS
BOOL
IsVendorCommand(
    COMMAND_INDEX    commandIndex   // IN: command index to check
    );
#else
INLINE BOOL
IsVendorCommand(
    COMMAND_INDEX    commandIndex   // IN: command index to check
    )
{
    return (s_ccAttr[commandIndex].V == SET);

}
#endif // INLINE_FUNCTIONS


#endif  // _COMMANDCODEATTRIBUTES_FP_H_
