/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _IOBUFFERS_FP_H_
#define    _IOBUFFERS_FP_H_

//*** MemoryGetActionInputBuffer()
// This function returns the address of the buffer into which the
// command parameters will be unmarshaled in preparation for calling
// the command actions.
BYTE *
MemoryGetActionInputBuffer(
    UINT32           size           // Size, in bytes, required for the input
                                    // unmarshaling
    );

//*** MemoryGetActionOutputBuffer()
// This function returns the address of the buffer into which the command
// action code places its output values.
void *
MemoryGetActionOutputBuffer(
    UINT32           size           // required size of the buffer
    );

//*** IsLabelProperlyFormatted()
// This function checks that a label is a null-terminated string.
// NOTE: this function is here because there was no better place for it.
// return type: BOOL
//  FALSE   string is not null terminated
//  TRUE    string is null terminated
#ifndef INLINE_FUNCTIONS
BOOL
IsLabelProperlyFormatted(
    TPM2B           *x
    );
#else
INLINE BOOL
IsLabelProperlyFormatted(
    TPM2B           *x
    )
{
    return (((x)->size == 0) || ((x)->buffer[(x)->size - 1] == 0));

}
#endif // INLINE_FUNCTIONS


#endif  // _IOBUFFERS_FP_H_
