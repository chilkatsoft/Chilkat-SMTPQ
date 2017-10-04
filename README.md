
# Chilkat SMTPQ

This repo provides Visual Studio 2011 C++ and C# projects for the Chilkat SMTPQ Windows Service.  


## What is Included

### SmtpQ_Projects.sln

This is the Visual Studio 2011 solution that contains the individual projects:

1. **SmtpQService** -- This is the SMTPQ Windows service, which can be built for 32-bit or 64-bit.
2. **TestSmtpQ** -- This is a project for testing and debugging the SMTPQ service code.
3. **ServiceManage** -- A C# project for installing, starting, stopping, and uninstalling any Windows Service.
4. **SmtpQConfigure** -- A C# project for managing the Windows registry entries associated with the SMTPQ service.


### ChilkatLib

The Chilkat C++ headers and static libs are located under this directory.  The ChilkatSmtpQ service must link with the Chilkat libs.  

### bin

The **bin** directory contains the executables produced when building any of the projects.

### Chilkat License Required -- Insert Unlock Code in svc.cpp

The SMTPQ service requires a purchased unlock code to be inserted in the svc.cpp source file.
The following line must be modified:

`
const char *g_UnlockCode = "Anything for 30-day trial.";`


### Important Notes:

1. The **ServiceManage** and **SmtpQConfigure** apps are 100% managed C# applications.  They need to be run with administrative privileges.
2. The **ServiceManage** and **SmtpQConfigure** apps have the "Prefer 32-bit" checkbox checked in the "Build" section of the Project Properties.  Therefore, these apps run as 32-bit applications and work with the 32-bit build of SMTPQ (i.e. ChilkatSmtpQ_32bit.exe)
3. If you use ServiceManage to uninstall the service, and then need to re-install, exit the ServiceManage app and restart.  For some unknown reason it fails to install the service unless this happens.




