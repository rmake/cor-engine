%include "../../../../cs/cor_swig_base_cs/swig/cs/cor_swig_base_cs_include.i"

//%cs_std_callback(cor::system::Logger::PrintCharPtrFunc, CorSystemLoggerPrintCharPtrFunc)

%cs_std_callback(CorSystemLoggerPrintCharPtrFunc, CorSystemLoggerPrintCharPtrFunc)

%module cor_all_cs
%{
#include "cor_system/sources/logger.h"
typedef std::function<void(cor::system::LogType::Enum, const char *)> CorSystemLoggerPrintCharPtrFunc;
%}

%include "cor_system/sources/logger.h"
typedef std::function<void(cor::system::LogType::Enum, const char *)> CorSystemLoggerPrintCharPtrFunc;

//%ignore cor::system::Logger::add_print_func(PrintFunc print_func);
//%ignore cor::system::Logger::add_print_func(RString name, PrintFunc print_func);
%extend cor::system::Logger
{
public:

      void add_print_func(CorSystemLoggerPrintCharPtrFunc print_func)
      {
          $self->add_print_func([print_func](cor::system::LogType::Enum type, const cor::RString& str){
              print_func(type, str.c_str());
          });
      }

      void add_prin_func(cor::RString name, CorSystemLoggerPrintCharPtrFunc print_func)
      {
          $self->add_print_func(name, [print_func](cor::system::LogType::Enum type, const cor::RString& str){
              print_func(type, str.c_str());
          });
      }

      void add_print_char_ptr_func(CorSystemLoggerPrintCharPtrFunc print_func)
      {
          $self->add_print_func([print_func](cor::system::LogType::Enum type, const cor::RString& str){
              print_func(type, str.c_str());
          });
      }

      void add_print_char_ptr_func(cor::RString name, CorSystemLoggerPrintCharPtrFunc print_func)
      {
          $self->add_print_func(name, [print_func](cor::system::LogType::Enum type, const cor::RString& str){
              print_func(type, str.c_str());
          });
      }
};


%pragma(csharp) moduleimports=%{
public delegate void CorSystemLoggerPrintCharPtrFunc(LogType.Enum type, string logString);
%}


