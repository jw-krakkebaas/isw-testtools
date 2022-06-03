@REM File: GenerateSoapFiles.bat
@REM Goal: Generate gSOAP files from header file

@ECHO Create header from wsdl
wsdl2h -N Acp -o mdx_acp_operational.h -s ..\..\..\bld\intf\mdx_acp_operational.wsdl -t ..\..\..\bld\intf\typemap.dat

@ECHO Run gSOAP compiler to create *.cpp files for client
soapcpp2.exe -C -L -x mdx_acp_operational.h

@ECHO Cleanup
del mdx_acp_operational.h
del soapMdxOperationalServiceProxy.h
