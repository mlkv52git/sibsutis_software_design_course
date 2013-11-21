/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Nov 21 12:30:12 2013
 */
/* Compiler settings for C:\Users\ewgenij\Documents\WORKSHOP\—Ë·√”“»\2013(PROGRAM DESIGN)\work\Lecture4-Automation\ATLTest2013\ATLTest2013.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IForStudents = {0x3497DE41,0x1E18,0x4EF8,{0xAB,0xB0,0xC5,0x6E,0xD7,0x46,0x06,0x6D}};


const IID LIBID_ATLTEST2013Lib = {0x81F71EF5,0x261E,0x4938,{0x96,0xFE,0xD3,0x77,0x95,0x7A,0x8F,0x5C}};


const CLSID CLSID_ForStudents = {0x64E3FED8,0xD31B,0x46DD,{0xB1,0x6A,0x76,0x7A,0x78,0x68,0x1A,0x8C}};


#ifdef __cplusplus
}
#endif

