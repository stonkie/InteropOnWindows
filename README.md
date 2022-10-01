# InteropOnWindows
These are samples for interop between C# (dotnet 6) and C++ (C++ 20).

I used them in a talk given at [ÉTS](https://www.etsmtl.ca/) and [Polytechnique Montréal](https://www.polymtl.ca/) to discuss various options as part of a conference given by the Video team at [Genetec](https://www.genetec.com/).

## Calling C++ from C#
We have example of each of these in the Archiver's codebase. Each has its own tradeoffs.

- Using PInvoke : Run PInvoke.CSharp which calls into PInvoke.Cpp
- Using COM : Run NativeCom.CSharp which calls into NativeCom.Cpp
  - This uses "Registration-Free COM" although the native dll can be registered with regsvr32 and consumed without the manifest.
- Using C++ CLI : Run Cli.CSharp which calls into Cli.ManagedCpp and then Cli.NativeCpp
  - This has a few limitations, the most important being that the Managed C++ project is limited to C++17. It statically links the C++20 project, so it needs those "#include" headers to be C++17 compatible and it relies on ABI compatibility between the two C++ versions.

## Calling C# from C++
I would only recommend the ComVisible, but I included hosting a runtime for completedness.

- Using ComVisible dotnet objects : Run ComVisible.Cpp which calls into ComVisible.CSharp
- Hosting a runtime : Run Hosted.Cpp which calls into Hosted.CSharp
  - This is meant as an exhibit. I wouldn't run anything looking like this in production. **Use at your own risk**.
  - This sample links directly to files on the machine at *$(ProgramFiles)\dotnet\packs\Microsoft.NETCore.App.Host.win-x64\6.0.6\runtimes\win-x64\native\*. You will need to adjust the version in the project and include paths to fit your system. The *nethost.dll* file and the included header files could be copied directly in the project if needed, but there is no garantee of compatibility with other versions of dotnet.
