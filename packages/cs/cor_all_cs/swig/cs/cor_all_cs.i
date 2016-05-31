%include "../../../../cs/cor_swig_base_cs/swig/cs/cor_swig_base_cs_include.i"

%cs_std_callback(cor::system::Logger::PrintCharPtrFunc, SystemLoggerPrintCharPtrFunc)

%module cor_all_cs
%{
#include "cor_system/sources/logger.h"
%}

%include "cor_system/sources/logger.h"

%pragma(csharp) moduleimports=%{
public delegate void SystemLoggerPrintCharPtrFunc(LogType.Enum type, string logString);
%}


