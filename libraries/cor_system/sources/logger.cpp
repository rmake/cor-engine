#include "logger.h"

#ifndef __ANDROID__
#include <iostream>
#else
#include <android/log.h>
#endif

namespace cor
{
    namespace system
    {
        struct LoggerItnl
        {
            RSize ct;
            Logger::ArrayPrintFunc print_funcs;
        };
        
        Logger::Logger() : itnl(new LoggerItnl())
        {
#ifndef __ANDROID__
            add_print_func([](LogType::Enum type, const RString& str){
                switch(type)
                {
                case LogType::debug:
                    std::cout << "debug: ";
                    break;
                case LogType::info:
                    std::cout << "info: ";
                    break;
                case LogType::warn:
                    std::cout << "warn: ";
                    break;
                case LogType::error:
                    std::cout << "error: ";
                    break;
                case LogType::fatal:
                    std::cout << "fatal: ";
                    break;
                default:;
                }
                std::cout << str << std::endl;
            });
#else
            add_print_func([](LogType::Enum type, const RString& str){
                switch(type)
                {
                case LogType::debug:
                    __android_log_print(ANDROID_LOG_DEBUG, "COR_LOGGER", "%s", (RString("debug: ") + str + "\n").c_str());
                    break;
                case LogType::info:
                    __android_log_print(ANDROID_LOG_INFO, "COR_LOGGER", "%s", (RString("info: ") + str + "\n").c_str());
                    break;
                case LogType::warn:
                    __android_log_print(ANDROID_LOG_WARN, "COR_LOGGER", "%s", (RString("warn: ") + str + "\n").c_str());
                    break;
                case LogType::error:
                    __android_log_print(ANDROID_LOG_ERROR, "COR_LOGGER", "%s", (RString("error: ") + str + "\n").c_str());
                    break;
                case LogType::fatal:
                    __android_log_print(ANDROID_LOG_FATAL, "COR_LOGGER", "%s", (RString("fatal: ") + str + "\n").c_str());
                    break;
                default:;
                }
            });
#endif

            itnl->ct = 0;
        }
        
        Logger::~Logger()
        {
            
        }

        void Logger::add_print_func(RString name, PrintFunc print_func)
        {
            itnl->print_funcs.push_back(NamePrintFunc(name, print_func));
        }

        void Logger::add_print_func(PrintFunc print_func)
        {
            RStringStream s;
            s << "No_Name_Logger_" << itnl->ct;
            itnl->ct++;

            this->add_print_func(s.str(), print_func);
        }

        void Logger::pop_print_func()
        {
            itnl->print_funcs.pop_back();
        }

        void Logger::clear_print_func(PrintFunc print_func)
        {
            itnl->print_funcs.clear();
        }

        void Logger::call_print_func(LogType::Enum type, const RString& str)
        {
            std::for_each(itnl->print_funcs.begin(), itnl->print_funcs.end(), [&](NamePrintFunc print_func){
                if(print_func.second)
                {
                    print_func.second(type, str);
                }
            });
        }


        Logger*  Logger::get_instance()
        {
            static Logger logger;
            return &logger;
        }
    }
}
