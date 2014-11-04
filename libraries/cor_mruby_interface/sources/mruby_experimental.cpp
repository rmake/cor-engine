#include "mruby_experimental.h"
#include "cor_system/sources/logger.h"

namespace cor
{
    namespace mruby_interface
    {
        RInt32 MrubyExperimentalBindTestStruct::test()
        {
            return 7;
        }

        RInt32 MrubyExperimentalBindTestClassInherited::toast()
        {
            return 10;
        }

        MrubyExperimentalBindTestClass::BindTestClassPtr MrubyExperimentalBindTestClass::create()
        {
            return std::make_shared<MrubyExperimentalBindTestClass>();
        }
        
        MrubyExperimentalBindTestClass::BindTestClassPtr MrubyExperimentalBindTestClass::create(std::string str)
        {
            MrubyExperimentalBindTestClass::BindTestClassPtr obj = std::make_shared<MrubyExperimentalBindTestClass>();
            obj->str = str;
            return obj;
        }

        MrubyExperimentalBindTestClass::BindTestClassPtr MrubyExperimentalBindTestClass::get_null()
        {
            return nullptr;
        }

        void MrubyExperimentalBindTestClass::recieve(MrubyExperimentalBindTestClass obj)
        {
            str += obj.str;
        }
        
        void MrubyExperimentalBindTestClass::test()
        {
            str += " <- add test string.";
        }

        void MrubyExperimentalBindTestClass::tmpl_test(const std::vector<char>& a)
        {
            str += a[0];
        }
    
    
        struct MrubyExperimentalItnl
        {
            
        };
        
        MrubyExperimental::MrubyExperimental() : itnl(new MrubyExperimentalItnl())
        {
            
        }
        
        MrubyExperimental::~MrubyExperimental()
        {
            
        }

        //
        typedef mrubybind::FuncPtr<void(void)> Func;

        Func f0;
        Func f1;
        Func f2;

        void set_f0(Func f)
        {
            f0 = f;
            f2 = f;
        }

        void set_f1(Func f)
        {
            f1 = f;
        }

        void clear_f0()
        {
            f0.reset();
        }

        void clear_f1()
        {
            f1.reset();
        }

        void call_f1()
        {
            f1.func()();
        }

        void call_f2()
        {
            f2.func()();
        }

        std::vector<Func> funcs;

        void add_fs(Func f)
        {
            funcs.push_back(f);
        }

        void set_fs(int i, Func f)
        {
            funcs[i] = f;
            if(i > 1)
            {
                funcs[i] = funcs[i - 1];
            }
        }

        void clear_fs(int i)
        {
            funcs[i].reset();
        }

        void call_fs(int i)
        {
            funcs[i].func()();
        }

        MrubyRef MrubyExperimental::bind_funcs(MrubyState& mrb)
        {

            BasicBind::bind(mrb);

            cor::log_debug("MrubyExperimental pre log");

            MrubyRef result;

            result = mrb.load_string_log("Proc.new{nil + nil}.call");
            result = mrb.load_string_log("nil + nil");

            result = mrb.load_string_log("CorSystem::Logger.debug('logger test st')");

            {
                {
                    mrubybind::MrubyBind b(mrb.get_mrb());
                    b.bind("set_f0", set_f0);
                    b.bind("set_f1", set_f1);
                    b.bind("clear_f0", clear_f0);
                    b.bind("clear_f1", clear_f1);
                    b.bind("call_f1", call_f1);
                    b.bind("call_f2", call_f2);


                    b.bind("add_fs", add_fs);
                    b.bind("set_fs", set_fs);
                    b.bind("clear_fs", clear_fs);
                    b.bind("call_fs", call_fs);
                }

                result = mrb.load_string_log(
                    "Logger.debug \"start avoid_gc\"\n"
                    "def f\n"
                    "  fa = Proc.new do\n"
                    "    Logger.debug \"called!\"\n"
                    "  end\n"
                    "  set_f0 fa\n"
                    "  set_f1 fa\n"
                    "end\n"
                    "f\n"
                    "clear_f0\n"
                    "GC.start\n"
                    "call_f1\n"
                    "clear_f1\n"
                    "GC.start\n"
                    "call_f2\n"
                    "'avoid gc test'\n"
                    );


                //result = mrb.load_string_log(
                //    "puts \"start avoid_gc_2\"\n"
                //    "n = 100000\n"
                //    "n.times do |i|\n"
                //    "  add_fs do\n"
                //    "    Logger.debug \"called #{i}\"\n"
                //    "  end\n"
                //    "end\n"
                //    "na = n - 1\n"
                //    "set_fs na do\n"
                //    "  Logger.debug \"nac #{i}\"\n"
                //    "end\n"
                //    "5.times do |j|\n"
                //    "  na.times do |i|\n"
                //    "    set_fs i do\n"
                //    "      Logger.debug \"nac #{i}\"\n"
                //    "    end\n"
                //    "    Hash.new\n"
                //    "  end\n"
                //    "  GC.start\n"
                //    "end\n"
                //    "call_fs na\n"
                //    "'avoid gc test2'\n"
                //    );
            }


            result = mrb.load_string(
                "log_str = \"\"\n"
                "CorSystem::Logger.get_instance.add_print_func do |tp, str| log_str += \"#{str}\\n\" end\n"
                "CorSystem::Logger.debug('logger test')\n"
                "job_queue = CorSystem::JobQueue::create\n"
                "job_queue.add_job do\n"
                "  CorSystem::Logger.debug('lazy call')\n"
                "end\n"
                "job_queue.step\n"
                "t = MrubyExperimentalBindTestClassInherited.create\n"
                "t.a = 32\n"
                "ia = CorMrubyInterface::MrubyExperimentalTemplateStructRInt32.create\n"
                "ia.set_n 20\n"
                "CorSystem::Logger.debug \"ia.add2 #{ia.add2(1, 2, 3)}\"\n"
                "CorSystem::Logger.debug \"t.a = #{t.a}\"\n"
                "CorSystem::Logger.get_instance.call_print_func(1, \"call_print_func\")\n"
                "CorSystem::Logger.get_instance.pop_print_func\n"
                "\"MrubyExperimental #{log_str}\"\n");

            return result;
        }


    }
}
