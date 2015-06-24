#ifndef ____COR_SYSTEM_SOURCES_LOGGER_H_
#define ____COR_SYSTEM_SOURCES_LOGGER_H_

#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace system
    {
        struct LoggerItnl;
        
        class LogType
        {
        public:
            enum Enum
            {
                debug,
                info,
                warn,
                error,
                fatal,
                count,
                force_4byte = 0xffffffff
            };
        };
    
        class Logger
        {
        public:
            typedef std::function<void(LogType::Enum, const RString&)> PrintFunc;
            typedef std::pair<RString, PrintFunc> NamePrintFunc;
            typedef std::vector<NamePrintFunc> ArrayPrintFunc;

        private:

            std::unique_ptr<LoggerItnl> itnl;

            
        
        public:
        
            Logger();
            virtual ~Logger();

            void add_print_func(PrintFunc print_func);
            void add_print_func(RString name, PrintFunc print_func);
            void pop_print_func();
            void clear_print_func(PrintFunc print_func);
            void call_print_func(LogType::Enum type, const RString& str);

            RSize get_local_count(LogType::Enum type);
            RSize get_local_debug_count();
            RSize get_local_info_count();
            RSize get_local_warn_count();
            RSize get_local_error_count();
            RSize get_local_fatal_count();

            static RSize get_count(LogType::Enum type);
            static RSize get_debug_count();
            static RSize get_info_count();
            static RSize get_warn_count();
            static RSize get_error_count();
            static RSize get_fatal_count();



            void print_impl(RStringStream& s)
            {
                
            }

            template<class T, class... Rest> void print_impl(RStringStream& s, T v, Rest... rest)
            {
                s << v;
                print_impl(s, rest...);
            }

            template<class... Ts> void print(LogType::Enum type, Ts... args)
            {
                RStringStream s;
                print_impl(s, args...);
                get_instance()->call_print_func(type, s.str());
            }

            template<class... Ts> static void debug(Ts... args)
            {
                
            }

            template<class... Ts> static void info(Ts... args)
            {
                get_instance()->print(LogType::info, args...);
            }

            template<class... Ts> static void warn(Ts... args)
            {
                get_instance()->print(LogType::warn, args...);
            }

            template<class... Ts> static void error(Ts... args)
            {
                get_instance()->print(LogType::error, args...);
            }

            template<class... Ts> static void fatal(Ts... args)
            {
                get_instance()->print(LogType::fatal, args...);
            }

            static void info(const RString& str)
            {
                get_instance()->print(LogType::info, str);
            }

            static void debug(const RString& str)
            {
                get_instance()->print(LogType::debug, str);
            }

            static void warn(const RString& str)
            {
                get_instance()->print(LogType::warn, str);
            }

            static void error(const RString& str)
            {
                get_instance()->print(LogType::error, str);
            }

            static void fatal(const RString& str)
            {
                get_instance()->print(LogType::fatal, str);
            }

            static Logger* get_instance();
        };
    }

    template<class... Ts> void log_debug(Ts... args)
    {
        system::Logger::get_instance()->print(system::LogType::debug, args...);
    }

    template<class... Ts> void log_info(Ts... args)
    {
        system::Logger::get_instance()->print(system::LogType::info, args...);
    }

    template<class... Ts> void log_warn(Ts... args)
    {
        system::Logger::get_instance()->print(system::LogType::warn, args...);
    }

    template<class... Ts> void log_error(Ts... args)
    {
        system::Logger::get_instance()->print(system::LogType::error, args...);
    }

    template<class... Ts> void log_fatal(Ts... args)
    {
        system::Logger::get_instance()->print(system::LogType::fatal, args...);
    }
}

#endif
