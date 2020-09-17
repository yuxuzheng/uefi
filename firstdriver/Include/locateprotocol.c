#include <firstprotocol.h>

EFI_STATUS EFIAPI
LocateProtocolEntry(IN EFI_HANDLE Image, IN EFI_SYSTEM_TABLE *SystemTable)
{
	EFI_STATUS Status;
	EFI_MYFIRST_PROTOCOL *MyFirstDriver = NULL;
	Status = gBS->LocateProtocol(&gEfiMyFirstProtocolGuid, NULL, (void**)&MyFirstDriver);
	if (!EFI_ERROR(Status))
	{
		Status = MyFirstDriver->MyFirst_Hello(MyFirstDriver);
	}
	else {
		DEBUG((EFI_D_ERROR, "Locate Error\n", Status));
	}
	return EFI_SUCCESS;
}