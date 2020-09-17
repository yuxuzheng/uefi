@call "F:\edk2\edksetup.bat"
Build -t VS2015x86 -a X64 -p MyPkg\firstdriver\firstprotocol.dsc -m MyPkg\firstdriver\Include\protocolinterface.inf -b RELEASE
Build -t VS2015x86 -a X64 -p MyPkg\firstdriver\firstprotocol.dsc -m MyPkg\firstdriver\Include\locateprotocol.inf -b RELEASE
pause 