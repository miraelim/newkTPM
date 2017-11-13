/*(Copyright)
 *      Microsoft Copyright 2009 - 2015
 *      All rights reserved.
*/
/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep 22, 2016 Time: 05:27:05 PM  
*/

#ifndef    _LOCALITY_FP_H_
#define    _LOCALITY_FP_H_

//** LocalityGetAttributes()
// This function will convert a locality expressed as an integer into
// TPMA_LOCALITY form.
//
// The function returns the locality attribute.
TPMA_LOCALITY
LocalityGetAttributes(
    UINT8            locality       // IN: locality value
    );


#endif  // _LOCALITY_FP_H_
