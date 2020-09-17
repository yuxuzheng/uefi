#include <firstprotocol.h>
#pragma warning(disable:4133)

EFI_STATUS EFIAPI
MyFirst_Hello(IN EFI_MYFIRST_PROTOCOL *This)
{
	DEBUG((EFI_D_INFO, L"Hello World wy\n"));
	return EFI_SUCCESS;
}


EFI_STATUS EFIAPI
MyProtocolEntry(IN EFI_HANDLE ImageHandle,IN EFI_SYSTEM_TABLE   *SystemTable )
{
	EFI_STATUS       Status;
	EFI_MYFIRST_PROTOCOL *MyFirstDriver = NULL;
	MyFirstDriver->Revision = 1;
	MyFirstDriver->MyFirst_HelloWorld = MyFirst_Hello;

	//Install an instance of EFI MYPROTOCOL into its own HANDLE

	Status = gBS->InstallProtocolInterface(
		&ImageHandle,
		&gEfiMyFirstProtocolGuid,
		EFI_NATIVE_INTERFACE,
		MyFirstDriver
	);

	if (Status == EFI_SUCCESS)
	    DEBUG((EFI_D_INFO, L"install succeess\n"));
	else
	    DEBUG((EFI_D_INFO, L"nstall failed\n"));
	return EFI_SUCCESS;
}