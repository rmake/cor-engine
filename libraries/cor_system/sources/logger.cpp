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
            RSize count[LogType::count];
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
            for(auto& v : itnl->count)
            {
                v = 0;
            }
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
            itnl->count[type] += 1;
            std::for_each(itnl->print_funcs.begin(), itnl->print_funcs.end(), [&](NamePrintFunc print_func){
                if(print_func.second)
                {
                    print_func.second(type, str);
                }
            });
        }

        RSize Logger::get_local_count(LogType::Enum type)
        {
            return itnl->count[type];
        }

        RSize Logger::get_local_debug_count()
        {
            return Logger::get_count(LogType::debug);
        }

        RSize Logger::get_local_info_count()
        {
            return Logger::get_count(LogType::info);
        }

        RSize Logger::get_local_warn_count()
        {
            return Logger::get_count(LogType::warn);
        }

        RSize Logger::get_local_error_count()
        {
            return Logger::get_count(LogType::error);
        }

        RSize Logger::get_local_fatal_count()
        {
            return Logger::get_count(LogType::fatal);
        }

        RSize Logger::get_count(LogType::Enum type)
        {
            return get_instance()->get_local_count(type);
        }

        RSize Logger::get_debug_count()
        {
            return get_instance()->get_local_debug_count();
        }

        RSize Logger::get_info_count()
        {
            return get_instance()->get_local_info_count();
        }

        RSize Logger::get_warn_count()
        {
            return get_instance()->get_local_warn_count();
        }

        RSize Logger::get_error_count()
        {
            return get_instance()->get_local_error_count();
        }

        RSize Logger::get_fatal_count()
        {
            return get_instance()->get_local_fatal_count();
        }


        Logger*  Logger::get_instance()
        {
            static Logger logger;
            return &logger;
        }
    }
}
