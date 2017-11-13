/*(Copyright)
 *      Microsoft Copyright 2009 - 2016
 *      All rights reserved.
 */

//
//*** ECC Test Parameters
//

#ifdef  SELF_TEST_DATA

TPM2B_TYPE(EC_TEST, 32);
const  TPM_ECC_CURVE        c_testCurve = 00003;

// The "static" key

const  TPM2B_EC_TEST    c_ecTestKey_ds = {{32, {
 0xdf,0x8d,0xa4,0xa3,0x88,0xf6,0x76,0x96,0x89,0xfc,0x2f,0x2d,0xa1,0xb4,0x39,0x7a,
 0x78,0xc4,0x7f,0x71,0x8c,0xa6,0x91,0x85,0xc0,0xbf,0xf3,0x54,0x20,0x91,0x2f,0x73}}};

const  TPM2B_EC_TEST    c_ecTestKey_QsX = {{32, {
 0x17,0xad,0x2f,0xcb,0x18,0xd4,0xdb,0x3f,0x2c,0x53,0x13,0x82,0x42,0x97,0xff,0x8d,
 0x99,0x50,0x16,0x02,0x35,0xa7,0x06,0xae,0x1f,0xda,0xe2,0x9c,0x12,0x77,0xc0,0xf9}}};

const  TPM2B_EC_TEST    c_ecTestKey_QsY = {{32, {
 0xa6,0xca,0xf2,0x18,0x45,0x96,0x6e,0x58,0xe6,0x72,0x34,0x12,0x89,0xcd,0xaa,0xad,
 0xcb,0x68,0xb2,0x51,0xdc,0x5e,0xd1,0x6d,0x38,0x20,0x35,0x57,0xb2,0xfd,0xc7,0x52}}};

// The "ephemeral" key

const  TPM2B_EC_TEST    c_ecTestKey_de = {{32, {
 0xb6,0xb5,0x33,0x5c,0xd1,0xee,0x52,0x07,0x99,0xea,0x2e,0x8f,0x8b,0x19,0x18,0x07,
 0xc1,0xf8,0xdf,0xdd,0xb8,0x77,0x00,0xc7,0xd6,0x53,0x21,0xed,0x02,0x53,0xee,0xac}}};

const  TPM2B_EC_TEST    c_ecTestKey_QeX = {{32, {
 0xa5,0x1e,0x80,0xd1,0x76,0x3e,0x8b,0x96,0xce,0xcc,0x21,0x82,0xc9,0xa2,0xa2,0xed,
 0x47,0x21,0x89,0x53,0x44,0xe9,0xc7,0x92,0xe7,0x31,0x48,0x38,0xe6,0xea,0x93,0x47}}};

const  TPM2B_EC_TEST    c_ecTestKey_QeY = {{32, {
 0x30,0xe6,0x4f,0x97,0x03,0xa1,0xcb,0x3b,0x32,0x2a,0x70,0x39,0x94,0xeb,0x4e,0xea,
 0x55,0x88,0x81,0x3f,0xb5,0x00,0xb8,0x54,0x25,0xab,0xd4,0xda,0xfd,0x53,0x7a,0x18}}};

// ECDH test results
const  TPM2B_EC_TEST    c_ecTestEcdh_X = {{32, {
 0x64,0x02,0x68,0x92,0x78,0xdb,0x33,0x52,0xed,0x3b,0xfa,0x3b,0x74,0xa3,0x3d,0x2c,
 0x2f,0x9c,0x59,0x03,0x07,0xf8,0x22,0x90,0xed,0xe3,0x45,0xf8,0x2a,0x0a,0xd8,0x1d}}};

const  TPM2B_EC_TEST    c_ecTestEcdh_Y = {{32, {
 0x58,0x94,0x05,0x82,0xbe,0x5f,0x33,0x02,0x25,0x90,0x3a,0x33,0x90,0x89,0xe3,0xe5,
 0x10,0x4a,0xbc,0x78,0xa5,0xc5,0x07,0x64,0xaf,0x91,0xbc,0xe6,0xff,0x85,0x11,0x40}}};

#if ALG_SHA1_VALUE == DEFAULT_TEST_HASH

TPM2B_TYPE(TEST_VALUE, 64);
const TPM2B_TEST_VALUE        c_ecTestValue = {{64, {
 0x78,0xd5,0xd4,0x56,0x43,0x61,0xdb,0x97,0xa4,0x32,0xc4,0x0b,0x06,0xa9,0xa8,0xa0,
 0xf4,0x45,0x7f,0x13,0xd8,0x13,0x81,0x0b,0xe5,0x76,0xbe,0xaa,0xb6,0x3f,0x8d,0x4d,
 0x23,0x65,0xcc,0xa7,0xc9,0x19,0x10,0xce,0x69,0xcb,0x0c,0xc7,0x11,0x8d,0xc3,0xff,
 0x62,0x69,0xa2,0xbe,0x46,0x90,0xe7,0x7d,0x81,0x77,0x94,0x65,0x1c,0x3e,0xc1,0x3e}}};

const TPM2B_EC_TEST    c_TestEcDsa_r = {{32, {
 0x57,0xf3,0x36,0xb7,0xec,0xc2,0xdd,0x76,0x0e,0xe2,0x81,0x21,0x49,0xc5,0x66,0x11,
 0x4b,0x8a,0x4f,0x17,0x62,0x82,0xcc,0x06,0xf6,0x64,0x78,0xef,0x6b,0x7c,0xf2,0x6c}}};
const TPM2B_EC_TEST    c_TestEcDsa_s = {{32, {
 0x1b,0xed,0x23,0x72,0x8f,0x17,0x5f,0x47,0x2e,0xa7,0x97,0x2c,0x51,0x57,0x20,0x70,
 0x6f,0x89,0x74,0x8a,0xa8,0xf4,0x26,0xf4,0x96,0xa1,0xb8,0x3e,0xe5,0x35,0xc5,0x94}}};

const TPM2B_EC_TEST    c_TestEcSchnorr_r = {{32, {
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0xc6,0x0d,0x2f,
 0x86,0xa0,0x1c,0x93,0x5e,0x4a,0xad,0x0b,0x67,0xde,0x5d,0x2a,0xb1,0x08,0x4d,0xae}}};
const TPM2B_EC_TEST    c_TestEcSchnorr_s = {{32, {
 0xb1,0x37,0x7b,0xff,0xf8,0xf7,0xcf,0x2f,0xa6,0xa9,0x5a,0xb1,0x03,0xc1,0x1e,0xa7,
 0xf8,0x05,0x33,0xc0,0x0a,0x7b,0xda,0x7b,0x1a,0x00,0x47,0xe1,0x9e,0xbe,0x50,0xe4}}};

#endif // SHA1

#if ALG_SHA384_VALUE == DEFAULT_TEST_HASH

TPM2B_TYPE(TEST_VALUE, 64);
const TPM2B_TEST_VALUE        c_ecTestValue = {{64, {
 0x78,0xd5,0xd4,0x56,0x43,0x61,0xdb,0x97,0xa4,0x32,0xc4,0x0b,0x06,0xa9,0xa8,0xa0,
 0xf4,0x45,0x7f,0x13,0xd8,0x13,0x81,0x0b,0xe5,0x76,0xbe,0xaa,0xb6,0x3f,0x8d,0x4d,
 0x23,0x65,0xcc,0xa7,0xc9,0x19,0x10,0xce,0x69,0xcb,0x0c,0xc7,0x11,0x8d,0xc3,0xff,
 0x62,0x69,0xa2,0xbe,0x46,0x90,0xe7,0x7d,0x81,0x77,0x94,0x65,0x1c,0x3e,0xc1,0x3e}}};

const TPM2B_EC_TEST    c_TestEcDsa_r = {{32, {
 0xf5,0x74,0x6d,0xd6,0xc6,0x56,0x86,0xbb,0xba,0x1c,0xba,0x75,0x65,0xee,0x64,0x31,
 0xce,0x04,0xe3,0x9f,0x24,0x3f,0xbd,0xfe,0x04,0xcd,0xab,0x7e,0xfe,0xad,0xcb,0x82}}};
const TPM2B_EC_TEST    c_TestEcDsa_s = {{32, {
 0xc2,0x4f,0x32,0xa1,0x06,0xc0,0x85,0x4f,0xc6,0xd8,0x31,0x66,0x91,0x9f,0x79,0xcd,
 0x5b,0xe5,0x7b,0x94,0xa1,0x91,0x38,0xac,0xd4,0x20,0xa2,0x10,0xf0,0xd5,0x9d,0xbf}}};

const TPM2B_EC_TEST    c_TestEcSchnorr_r = {{32, {
 0xad,0xe8,0xd2,0xda,0x57,0x6d,0x4a,0xe5,0xcc,0xcd,0x7c,0x14,0x1a,0x71,0x93,0xab,
 0x6b,0x9d,0x0f,0x6a,0x97,0xb2,0x32,0x75,0x6c,0xb7,0x82,0x17,0x6b,0x17,0xca,0x1b}}};
const TPM2B_EC_TEST    c_TestEcSchnorr_s = {{32, {
 0xd6,0xf1,0xe3,0x05,0xe5,0xdb,0x7c,0x8f,0x67,0x46,0x24,0x0f,0x5a,0x67,0xf8,0x2d,
 0x5e,0xcb,0xa6,0x8b,0xd7,0x80,0x66,0x83,0x36,0x50,0xd7,0x73,0x7c,0xb8,0x63,0x41}}};

#endif // SHA384

#if ALG_SHA256_VALUE == DEFAULT_TEST_HASH

TPM2B_TYPE(TEST_VALUE, 64);
const TPM2B_TEST_VALUE        c_ecTestValue = {{64, {
 0x78,0xd5,0xd4,0x56,0x43,0x61,0xdb,0x97,0xa4,0x32,0xc4,0x0b,0x06,0xa9,0xa8,0xa0,
 0xf4,0x45,0x7f,0x13,0xd8,0x13,0x81,0x0b,0xe5,0x76,0xbe,0xaa,0xb6,0x3f,0x8d,0x4d,
 0x23,0x65,0xcc,0xa7,0xc9,0x19,0x10,0xce,0x69,0xcb,0x0c,0xc7,0x11,0x8d,0xc3,0xff,
 0x62,0x69,0xa2,0xbe,0x46,0x90,0xe7,0x7d,0x81,0x77,0x94,0x65,0x1c,0x3e,0xc1,0x3e}}};

const TPM2B_EC_TEST    c_TestEcDsa_r = {{32, {
 0x04,0x7d,0x54,0xeb,0x04,0x6f,0x56,0xec,0xa2,0x6c,0x38,0x8c,0xeb,0x43,0x0b,0x71,
 0xf8,0xf2,0xf4,0xa5,0xe0,0x1d,0x3c,0xa2,0x39,0x31,0xe4,0xe7,0x36,0x3b,0xb5,0x5f}}};
const TPM2B_EC_TEST    c_TestEcDsa_s = {{32, {
 0x8f,0xd0,0x12,0xd9,0x24,0x75,0xf6,0xc4,0x3b,0xb5,0x46,0x75,0x3a,0x41,0x8d,0x80,
 0x23,0x99,0x38,0xd7,0xe2,0x40,0xca,0x9a,0x19,0x2a,0xfc,0x54,0x75,0xd3,0x4a,0x6e}}};

const TPM2B_EC_TEST    c_TestEcSchnorr_r = {{32, {
 0x80,0xd5,0x77,0x52,0xf4,0x51,0x4a,0xe8,0xd0,0x28,0x91,0x98,0xbd,0x36,0x5d,0x89,
 0x24,0x0b,0xcf,0x08,0x30,0x35,0xc2,0x19,0x9f,0xf9,0x49,0x4f,0x53,0xe5,0x1f,0xe8}}};
const TPM2B_EC_TEST    c_TestEcSchnorr_s = {{32, {
 0xf7,0x47,0xda,0x09,0xc6,0xc3,0x28,0x28,0xc2,0xbd,0xbf,0xe6,0xa2,0xec,0x3f,0x44,
 0xcf,0xee,0xa2,0x30,0x96,0xe7,0xa4,0xaf,0x1f,0x37,0xac,0x1f,0xc6,0xc1,0xb4,0x25}}};

#endif // SHA256

#endif // ELF_TEST_DATA