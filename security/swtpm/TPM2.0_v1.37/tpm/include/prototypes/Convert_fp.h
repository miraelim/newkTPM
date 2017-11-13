/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _CONVERT_FP_H_
#define    _CONVERT_FP_H_

//*** UINT32_TO_BYTE_ARRAY()
// Stores a 32-bit aligned value to a, possibly, unaligned location
#ifndef INLINE_FUNCTIONS
void
UINT32_TO_BYTE_ARRAY(
    UINT32           in,
    BYTE            *out
    );
#else
INLINE void
UINT32_TO_BYTE_ARRAY(
    UINT32           in,
    BYTE            *out
    )
{

#if BIG_ENDIAN
    MemorySet(&b->buffer[b->size], 0, newSize - b->size);

    b->size = newSize;
}
#endif // INLINE_FUNCTIONS

//*** TestBit()
// This function is used to check the setting of a bit in an array of bits.
// return type: BOOL
//  TRUE    bit is set
//  FALSE   bit is not set
LIB_EXPORT BOOL
TestBit(
    unsigned int     bitNum,        // IN: number of the bit in 'bArray'
    BYTE            *bArray,        // IN: array containing the bits
    unsigned int     bytesInArray   // IN: size in bytes of 'bArray'
    );
#define TEST_BIT(bit, vector)   TestBit((bit), (BYTE *)&(vector), sizeof(vector))

//*** SetBit()
// This function will set the indicated bit in 'bArray'.
LIB_EXPORT void
SetBit(
    unsigned int     bitNum,        // IN: number of the bit in 'bArray'
    BYTE            *bArray,        // IN: array containing the bits
    unsigned int     bytesInArray   // IN: size in bytes of 'bArray'
    );
#define SET_BIT(bit, vector)    SetBit((bit), (BYTE *)&(vector), sizeof(vector))

//*** ClearBit()
// This function will clear the indicated bit in 'bArray'.
LIB_EXPORT void
ClearBit(
    unsigned int     bitNum,        // IN: number of the bit in 'bArray'.
    BYTE            *bArray,        // IN: array containing the bits
    unsigned int     bytesInArray   // IN: size in bytes of 'bArray'
    );
#define CLEAR_BIT(bit, vector) ClearBit((bit), (BYTE *)&(vector), sizeof(vector))


#endif  // _CONVERT_FP_H_
