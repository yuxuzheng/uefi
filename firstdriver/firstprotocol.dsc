[Defines]
  PLATFORM_NAME                  = firstdriver
  PLATFORM_GUID                  = f3a754cf-93de-11e4-9fec-74d435dec62b
  PLATFORM_VERSION               = 1.0
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/firstdriver
  SUPPORTED_ARCHITECTURES        = IA32|IPF|X64|EBC|ARM
  BUILD_TARGETS                  = DEBUG|RELEASE
  SKUID_IDENTIFIER               = DEFAULT
[LibraryClasses]
 DebugLib|MdePkg/Library/UefiDebugLibStdErr/UefiDebugLibStdErr.inf
 UefiBootServicesTableLib|MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib.inf
 UefiDriverEntryPoint|MdePkg/Library/UefiDriverEntryPoint/UefiDriverEntryPoint.inf
 UefiLib|MdePkg/Library/UefiLib/UefiLib.inf
 PrintLib|MdePkg/Library/BasePrintLib/BasePrintLib.inf
 PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
 MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
 BaseMemoryLib|MdePkg/Library/BaseMemoryLib/BaseMemoryLib.inf
 BaseLib|MdePkg/Library/BaseLib/BaseLib.inf
 DevicePathLib|MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib.inf
 UefiRuntimeServicesTableLib|MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib.inf
 DebugPrintErrorLevelLib|MdePkg/Library/BaseDebugPrintErrorLevelLib/BaseDebugPrintErrorLevelLib.inf 

  
[Components]
  MyPkg\firstdriver/Include/protocolinterface.inf
MyPkg\firstdriver/Include/locateprotocol.inf