#include<Uefi.h>
#include<Library/DebugLib.h>
#include<Library/UefiBootServicesTableLib.h>
#include<Library/UefiDriverEntryPoint.h>

#ifndef _EFI_MYFIRSTDRIVER_H_
#define _EFI_MYFIRSTDRIVER_H_


#define EFI_MYFIRST_PROTOCOL_GUID \
  {0xcd33ac22, 0x5ee3, 0x487d, { 0x91, 0x4f, 0xff, 0xfe, 0x64, 0xcd, 0xa, 0x3a } }



typedef struct _EFI_MYFIRST_PROTOCOL EFI_MYFIRST_PROTOCOL;
 typedef  EFI_MYFIRST_PROTOCOL EFI_MYPROTOCOL;


 typedef EFI_STATUS(EFIAPI *EFI_MYFIRST_HELLOWORLD)(IN EFI_MYPROTOCOL *This);

struct _EFI_MYFIRST_PROTOCOL {
UINT64       Revision;
EFI_MYFIRST_HELLOWORLD   MyFirst_HelloWorld;
}; 


extern EFI_GUID gEfiMyFirstProtocolGuid;
#endif  
