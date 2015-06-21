
#include "project_mruby_call.h"
#include "cor_data_structure/sources/basic/shared_ptr_table.h"
#include "cor_cocos2dx_mruby_interface/sources/mruby_script_engine.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos2dx_bind.h"
#include "cor_mruby_interface/sources/basic_bind.h"
#include "cor_system/sources/logger.h"
#include "cor_system/sources/cor_time.h"
#include "cocos2d.h"
#include "project_group_scene.h"
#include "cor_system/sources/allocation_monitor.h"
#include "cor_system/sources/cor_crypt.h"
#include "cor_cocos2dx_converter/sources/collision_2d_node.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_group.h"
#include "application.h"
#include "cor_mruby_interface/sources/mruby_array.h"
#include "renderer/CCGLProgramStateCache.h"
#include "import/external_code_importer.h"



#if defined(ANDROID_NDK) && defined(PROFILING)
#include <prof.h>
#endif

#ifdef WIN32
#include <fstream>
#endif

#ifdef CC_PLATFORM_WIN32
#include "platform/win32/CCFileUtils-win32.h"
#endif


namespace cor
{
    namespace project_structure
    {
        ProjectMrubyCall* project_mruby_call_instance = nullptr;
        ProjectMrubyCallItnl* project_mruby_call_itnl_instance = nullptr;
        RBool project_mruby_call_administrator = rfalse;

        struct ProjectMrubyCallItnl
        {
            RString file_name;

            typedef cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> EventListenerPhysicsContactWP;
            typedef cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> ImageWP;
            typedef std::shared_ptr<cocos2dx_converter::Collision2dNode> Collision2dNodeSP;
            typedef std::weak_ptr<cocos2dx_converter::Collision2dNode> Collision2dNodeWP;
            typedef std::map<RString, mruby_interface::AnySP> SceneLocalSPTable;
            typedef mrubybind::FuncPtr<void()> StartProc;

            Cocos2dSceneWP current_scene;
            Cocos2dLayerWP current_layer;
            Collision2dNodeSP collision;
            cocos2dx_converter::RtsObjectGroupSP rts_object_group;
            ApplicationPtr app;
            SceneLocalSPTable scene_local_sp_table;
            RBool first;
            StartProc start_proc;
            RString start_code;
            data_structure::SharedPtrTableSP table_sp;

            static data_structure::SharedPtrTableWP get_table_sp()
            {
                return project_mruby_call_itnl_instance->table_sp;
            }

            static Cocos2dSceneWP get_current_scene()
            {
                return project_mruby_call_itnl_instance->current_scene;
            }

            static Cocos2dLayerWP get_current_layer()
            {
                return project_mruby_call_itnl_instance->current_layer;
            }

            static Collision2dNodeWP get_collision_system()
            {
                return project_mruby_call_itnl_instance->collision;
            }

            static cocos2dx_converter::RtsObjectGroupWP get_rts_object_group()
            {
                return project_mruby_call_itnl_instance->rts_object_group;
            }

            static void reset_collision_system()
            {
                project_mruby_call_itnl_instance->collision = std::make_shared<cocos2dx_converter::Collision2dNode>();
            }

            static void set_scene_local(RString name, mruby_interface::AnyWP sp)
            {
                project_mruby_call_itnl_instance->scene_local_sp_table[name] = sp.lock();
            }

            static mruby_interface::AnyWP get_scene_local(RString name)
            {
                return project_mruby_call_itnl_instance->scene_local_sp_table[name];
            }

            static void load_eval(RString file_name)
            {
                cocos2dx_mruby_interface::MrubyScriptEnginePtr instance = cocos2dx_mruby_interface::MrubyScriptEngine::get_instance();
                auto& mrb = instance->ref_mrb();

                if(!cocos2d::FileUtils::getInstance()->isFileExist(file_name))
                {
                    log_error("File not found \"", file_name, "\".");
                }
                RString code = cocos2d::FileUtils::getInstance()->getStringFromFile(file_name);
                log_debug("load_eval ", file_name);
                mrb.load_string_error_log(file_name, code);
            }

            static void eval(RString code)
            {
                if(!project_mruby_call_administrator)
                {
                    log_error("no parmission.");
                    return;
                }
                cocos2dx_mruby_interface::MrubyScriptEnginePtr instance = cocos2dx_mruby_interface::MrubyScriptEngine::get_instance();
                auto& mrb = instance->ref_mrb();

                mrb.load_string_error_log(code);
            }

            static RString load_text(RString file_name)
            {
                if(!cocos2d::FileUtils::getInstance()->isFileExist(file_name))
                {
                    log_error("File not found \"", file_name, "\".");
                }
                RString text = cocos2d::FileUtils::getInstance()->getStringFromFile(file_name);
                log_debug("load_text ", file_name);
                return text;
            }

            static void* c_null_value()
            {
                return nullptr;
            }

            static type::Vector3F matrix_transform(type::Matrix4x4F m, type::Vector3F v)
            {
                return m.transform(v);
            }

            static Cocos2dNodeWP create_allocation_state_label()
            {
                cocos2d::Size visibleSize = cocos2d::Director::getInstance()->getVisibleSize();
                cocos2d::Vec2 origin = cocos2d::Director::getInstance()->getVisibleOrigin();
                auto label = cocos2d::LabelTTF::create("Test Scene", "Arial", 12);
                label->setGlobalZOrder(200.0f);
                label->setPosition(cocos2d::Vec2(origin.x + label->getContentSize().width / 2.0f + 200,
                    origin.y + visibleSize.height - label->getContentSize().height));
                {
                    cocos2d::Vector<cocos2d::FiniteTimeAction*> actions;

                    actions.pushBack(cocos2d::CallFunc::create([=](){
                        label->setString(cor::system::AllocationMonitor::get_instance()->get_status_text());
                    }));

                    actions.pushBack(cocos2d::DelayTime::create(1.0f));

                    label->runAction(cocos2d::RepeatForever::create(cocos2d::Sequence::create(actions)));
                }


                return label;

            }

            static EventListenerPhysicsContactWP create_collision_only_event_listener()
            {
                auto el = cocos2d::EventListenerPhysicsContact::create();
            
                el->onContactPreSolve = [=](cocos2d::PhysicsContact& contact, cocos2d::PhysicsContactPreSolve& solve){
                    return false;
                };

                return el;
            }


            static void start_ruby_project(RString file_name)
            {
                auto project =
                    std::make_shared<cor::project_structure::ProjectMrubyCall>();
                project->set_start_file(file_name);
                project_mruby_call_itnl_instance->app->replace_to_project("main", project);
            }

            static void start_ruby_project_proc(StartProc proc)
            {
                auto project =
                    std::make_shared<cor::project_structure::ProjectMrubyCall>();
                project->get_itnl()->start_proc = proc;
                project_mruby_call_itnl_instance->app->replace_to_project("main", project);
            }

            static void start_ruby_project_code(RString code)
            {
                auto project =
                    std::make_shared<cor::project_structure::ProjectMrubyCall>();
                project->get_itnl()->start_code = code;
                project_mruby_call_itnl_instance->app->replace_to_project("main", project);
            }

            static void call_start_proc()
            {
                project_mruby_call_itnl_instance->start_proc.func()();
            }

            static void test_str(type::Vector2I& v)
            {
                log_debug("test_str ", v.x, ", ", v.y);
            }

            static RString convert_path_char_code(RString str)
            {
#ifdef WIN32
                auto l = ::MultiByteToWideChar(932, MB_PRECOMPOSED, &str[0], -1, NULL, 0);
                std::vector<wchar_t> r(l + 1, 0);
                ::MultiByteToWideChar(932, MB_PRECOMPOSED, &str[0], -1, &r[0], l);
                l = ::WideCharToMultiByte(CP_UTF8, 0, &r[0], -1, NULL, 0, NULL, NULL);
                std::vector<char> r2(l + 1, 0);
                ::WideCharToMultiByte(CP_UTF8, 0, &r[0], -1, &r2[0], l , NULL, NULL);
                return &r2[0];
#else
                return str;
#endif
            }

            static RString convert_path_char_code_inv(RString str)
            {
#ifdef WIN32
                auto l = ::MultiByteToWideChar(CP_UTF8, 0, &str[0], -1, NULL, 0);
                auto e = GetLastError();
                std::vector<wchar_t> r(l + 1, 0);
                ::MultiByteToWideChar(CP_UTF8, 0, &str[0], -1, &r[0], l);
                l = ::WideCharToMultiByte(932, 0, &r[0], -1, NULL, 0, NULL, NULL);
                std::vector<char> r2(l + 1, 0);
                ::WideCharToMultiByte(932, 0, &r[0], -1, &r2[0], l, NULL, NULL);
                return &r2[0];
#else
                return str;
#endif
            }

            static RString convert_to_writable_path(const RString& name)
            {
                auto fu = cocos2d::FileUtils::getInstance();
                auto path = convert_path_char_code(fu->getWritablePath()) + "/" + name;
                return path;
            }

            static bool exist_writable_file(const RString& name)
            {
                auto fu = cocos2d::FileUtils::getInstance();
                auto path = convert_path_char_code(fu->getWritablePath()) + "/data_" + name + ".log";
                return fu->isFileExist(path);
            }

            static bool remove_writable_file(const RString& name)
            {
                auto fu = cocos2d::FileUtils::getInstance();
                auto path = convert_path_char_code(fu->getWritablePath()) + "/data_" + name + ".log";
                return fu->removeFile(path);
            }

            static void write_text_to_file(const RString& name, const RString& data)
            {
                auto fu = cocos2d::FileUtils::getInstance();
                auto path = convert_path_char_code(fu->getWritablePath()) + "/data_" + name + ".log";
                cocos2d::ValueMap vm;
                vm["data"] = data;
                fu->writeToFile(vm, convert_path_char_code_inv(path));
            }

            static void write_text_to_file_path(const RString& name, const RString& data)
            {
                auto fu = cocos2d::FileUtils::getInstance();
                auto path = name;
                cocos2d::ValueMap vm;
                vm["data"] = data;
                fu->writeToFile(vm, convert_path_char_code_inv(path));
            }

            static RString read_text_from_file(const RString& name)
            {
                auto fu = cocos2d::FileUtils::getInstance();
                auto path = convert_path_char_code(fu->getWritablePath()) + "/data_" + name + ".log";
                auto vm = fu->getValueMapFromFile(path);
                return vm["data"].asString();
            }

            static RString read_text_from_file_path(const RString& name)
            {
                auto fu = cocos2d::FileUtils::getInstance();
                auto path = name;
                auto vm = fu->getValueMapFromFile(path);
                return vm["data"].asString();
            }

            static void write_text_to_file_direct(const RString& name, const RString& data)
            {
#ifdef WIN32
                if(project_mruby_call_administrator)
                {
                    auto f = std::ofstream(name);
                    f.write(data.c_str(), data.size());
                }
#endif
            }

            static MrubyRef enum_files(const RString& path)
            {
#ifdef WIN32
                if(project_mruby_call_administrator)
                {
                    std::vector<RString> a;
                    WIN32_FIND_DATAA d;
                    RString n;
                    for(auto i : path)
                    {
                        if(i == '/')
                        {
                            n += '\\';
                        }
                        else
                        {
                            n += i;
                        }
                    }
                    auto h = FindFirstFileA(n.c_str(), &d);

                    do {
                        if(!(d.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
                            a.push_back(d.cFileName);
                        }
                    } while(FindNextFileA(h, &d));
                    return mruby_interface::MrubyArray::convert_std_vec_to_mruby(a);
                }
#endif
                return mruby_interface::MrubyArray::convert_std_vec_to_mruby(std::vector<RString>());
            }

#ifdef WIN32
            static RSize get_file_size(std::ifstream& f)
            {
                std::streamsize old = f.tellg();
                std::streamsize sz = f.seekg(0, std::ios::end).tellg();
                f.seekg(old, std::ios::beg);

                return (RSize)sz;
            }
#endif

            static RString read_text_from_file_direct(const RString& name)
            {
#ifdef WIN32
                auto f = std::ifstream(name);
                RCharArray a;
                auto sz = get_file_size(f);
                a.resize(sz + 1);
                f.read(&a[0], sz);
                a[sz] = '\0';
                return RString(&a[0]);
#endif
                return "";
            }

            static void draw_rect(cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> node, cocos2d::Rect rect, cocos2d::Color4F color)
            {
                cocos2d::Vec2 vertices[] =
                {
                    cocos2d::Vec2(rect.getMinX(), rect.getMaxY()),
                    cocos2d::Vec2(rect.getMaxX(), rect.getMaxY()),
                    cocos2d::Vec2(rect.getMaxX(), rect.getMinY()),
                    cocos2d::Vec2(rect.getMinX(), rect.getMinY())
                };
                node->drawPolygon(vertices, 4, color, 0, color);
                
            }

            static RInt32 get_time_ms()
            {
                return static_cast<RInt32>(system::Time::get_time_ms());
            }

            static void exit_application()
            {
#if defined(ANDROID_NDK) && defined(PROFILING)
                log_debug("ProjectMrubyCallProfiling");
                setenv("CPUPROFILE", "/sdcard/gmon.out", 1);
                moncleanup();
#endif
                cocos2d::Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
                exit(0);
#endif    
            }

            static void set_edit_box_delegate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> a)
            {
                c->setDelegate(dynamic_cast<cocos2d::ui::EditBoxDelegate*>(a.get()));
            }

            static void set_label_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
            {
                
            }

            static void set_text_sprite_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
            {
                c->setBlendFunc(cocos2d::BlendFunc::ALPHA_NON_PREMULTIPLIED);
            }

            static cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> delay_call(RFloat interval, mrubybind::FuncPtr<void()> callback)
            {
                cocos2d::Vector<cocos2d::FiniteTimeAction*> a;
                a.pushBack(cocos2d::DelayTime::create(interval));
                a.pushBack(cocos2d::CallFunc::create([=](){
                    mrubybind::MrubyArenaStore mas(cor::mruby_interface::MrubyState::get_current()->get_mrb());
                    try { 
                        callback.func()();
                    } 
                    catch(mrb_int e) 
                    { 
                        auto mrb = cor::mruby_interface::MrubyState::get_current(); mrb->exception_store_log(); 
                    } 
                }));
                return project_mruby_call_itnl_instance->current_layer->runAction(cocos2d::Sequence::create(
                        a
                    ));
            }

            static cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> interval_call(RFloat interval, mrubybind::FuncPtr<void()> callback)
            {
                cocos2d::Vector<cocos2d::FiniteTimeAction*> a;
                a.pushBack(cocos2d::DelayTime::create(interval));
                a.pushBack(cocos2d::CallFunc::create([=](){
                    mrubybind::MrubyArenaStore mas(cor::mruby_interface::MrubyState::get_current()->get_mrb());
                    try {
                        callback.func()();
                    }
                    catch(mrb_int e)
                    {
                        auto mrb = cor::mruby_interface::MrubyState::get_current(); mrb->exception_store_log();
                    }
                }));
                return project_mruby_call_itnl_instance->current_layer->runAction(
                    cocos2d::RepeatForever::create(cocos2d::Sequence::create(
                    a
                    )));
            }

            static void load_text_async(RString name, mrubybind::FuncPtr<void(RString)> callback)
            {
                auto th = project_mruby_call_instance->get_thread_pool();
                struct Data
                {
                    RString str;
                };
                auto data = std::make_shared<Data>();
                th->add_job([=](){
                    data->str = cocos2d::FileUtils::getInstance()->getStringFromFile(name);
                }, [=](){
                    callback.func()(data->str);
                });
            }

            static void load_image_async(RString name, mrubybind::FuncPtr<void(ImageWP)> callback)
            {
                auto th = project_mruby_call_instance->get_thread_pool();
                struct Data
                {
                    cocos2d::Image* image;
                };
                auto data = std::make_shared<Data>();
                th->add_job([=](){
                    auto image = new cocos2d::Image();
                    image->initWithImageFile(name);
                    data->image = image;
                }, [=](){
                    callback.func()(data->image);
                });
            }

            static void load_image_data_async(RString name, mrubybind::FuncPtr<void(cocos2d::Data)> callback)
            {
                auto th = project_mruby_call_instance->get_thread_pool();
                struct Data
                {
                    cocos2d::Data d;
                };
                auto data = std::make_shared<Data>();
                th->add_job([=](){
                    data->d = cocos2d::FileUtils::getInstance()->getDataFromFile(name);
                }, [=](){
                    callback.func()(data->d);
                });
            }

            static void make_image_from_data_async(cocos2d::Data d, mrubybind::FuncPtr<void(ImageWP)> callback)
            {
                auto th = project_mruby_call_instance->get_thread_pool();
                struct Data
                {
                    cocos2d::Image* image;
                };
                auto data = std::make_shared<Data>();
                th->add_job([=](){
                    auto image = new cocos2d::Image();
                    image->initWithImageData(d.getBytes(), d.getSize());
                    data->image = image;
                }, [=](){
                    callback.func()(data->image);
                });
            }

            static void debug_gc()
            {
#if 0
                cocos2dx_mruby_interface::MrubyScriptEnginePtr instance = cocos2dx_mruby_interface::MrubyScriptEngine::get_instance();
                auto& mrb = instance->ref_mrb();

                auto mb = mrb.get_mrb();
                auto dp = mrubybind::MrubyBindStatus::search(mb);

                for(auto p : dp->object_id_table)
                {
                    if(p.second.ref_count > 0 && p.second.captured_status == 1)
                    {
                        MrubyRef v(mb, mrb_obj_value(p.first));
                        log_debug("debug_gc ", v.call("inspect").to_s());
                    }
                }
#endif
            }

            static RString get_import_name()
            {
                return ExternalCodeImporter::get_imported_name();
            }

            static RString get_argument_string()
            {
#if defined CC_PLATFORM_WIN32 && defined WIN32
                auto cmdline = GetCommandLine();
                WCHAR *cmdlineEnd = wcsstr(cmdline, L" ");
                if(cmdlineEnd){
                    char utf8[256 * 16] = { 0 };
                    int nNum = WideCharToMultiByte(CP_UTF8, 0, cmdlineEnd, -1, utf8, sizeof(utf8), nullptr, nullptr);
                    return RString(utf8);
                }
                return "";
#endif
                return "";
            }

            static RString get_platform_name()
            {
#ifdef CC_PLATFORM_WIN32
                return "win32";
#elif CC_PLATFORM_ANDROID
                return "android";
#elif CC_PLATFORM_MAC
                return "mac";
#elif CC_PLATFORM_IOS
                return "ios";
#elif CC_PLATFORM_LINUX
                return "linux";
#else
                return "";
#endif
            }
            
        };
        
        ProjectMrubyCall::ProjectMrubyCall() : itnl(new ProjectMrubyCallItnl())
        {
            itnl->first = rtrue;

#if defined(ANDROID_NDK) && defined(PROFILING)
            static RBool first = rtrue;
            if(first)
            {
                first = rfalse;
                monstartup("libcocos2dcpp.so");
            }
#endif
            
        }
        
        ProjectMrubyCall::~ProjectMrubyCall()
        {
            clear();
        }

        void ProjectMrubyCall::clear()
        {


            //itnl->rts_object_group.reset();
            //itnl->collision.reset();

            cocos2dx_mruby_interface::MrubyScriptEnginePtr instance = cocos2dx_mruby_interface::MrubyScriptEngine::get_instance();
            auto& mrb = instance->ref_mrb();
            //mrb.load_string_error_log("GC.start");

            //project_mruby_call_itnl_instance = NULL;
        }

        void ProjectMrubyCall::set_start_file(const RString& file_name)
        {
            itnl->file_name = file_name;
        }

        ProjectMrubyCallItnl* ProjectMrubyCall::get_itnl()
        {
            return itnl.get();
        }

        void ProjectMrubyCall::first_init(cor::project_structure::ApplicationPtr app)
        {
            auto f = cocos2d::FileUtils::getInstance();
            if(f->isFileExist("crypted.txt"))
            {
                auto s = f->getStringFromFile("crypted.txt");
                if(s == "1")
                {
                    system::CorCrypt::set_enabled(rtrue);
                    cocos2d::FileUtils::decoder() = [=](const std::string& fn, unsigned char* d, size_t sz){
                        auto pos = fn.rfind('.');
                        auto ext = fn.substr(pos, fn.length());
                        if(ext == ".rb" || ext == ".png")
                        {
                            system::CorCrypt::decode(d, sz);
                        }
                    };
                }
            }

            if(f->isFileExist("administrator.txt"))
            {
                auto s = f->getStringFromFile("administrator.txt");
                if(s == "1")
                {
                    project_mruby_call_administrator = true;
                }
            }
            
        }

        void ProjectMrubyCall::start()
        {
            RInt64 tm = system::Time::get_time_ms();

            project_mruby_call_itnl_instance = itnl.get();
            project_mruby_call_instance = this;

            cocos2dx_mruby_interface::MrubyScriptEnginePtr instance = cocos2dx_mruby_interface::MrubyScriptEngine::get_instance();

            auto& mrb = instance->ref_mrb();
            auto& binder = mrb.ref_binder();

			//mrb.get_mrb()->gc_disabled = TRUE;

            static RBool first = rtrue;
            if(first)
            {
                first = rfalse;
                mruby_interface::BasicBind::bind(mrb);
                cocos2dx_mruby_interface::Cocos2dxBind::bind(mrb);
                ExternalCodeImporter::init_first();

            }
            
            itnl->current_scene = this->get_scene();
            itnl->current_layer = this->get_layer();
            itnl->app = this->get_app();

            binder.bind_class<ProjectMrubyCallItnl>("Cor", "Project");
            binder.bind_static_method("Cor", "Project", "get_table_sp", ProjectMrubyCallItnl::get_table_sp);
            binder.bind_static_method("Cor", "Project", "get_current_scene", ProjectMrubyCallItnl::get_current_scene);
            binder.bind_static_method("Cor", "Project", "get_current_layer", ProjectMrubyCallItnl::get_current_layer);
            binder.bind_static_method("Cor", "Project", "load_eval", ProjectMrubyCallItnl::load_eval);
            binder.bind_static_method("Cor", "Project", "eval", ProjectMrubyCallItnl::eval);
            binder.bind_static_method("Cor", "Project", "load_text", ProjectMrubyCallItnl::load_text);
            binder.bind_static_method("Cor", "Project", "c_null_value", ProjectMrubyCallItnl::c_null_value);
            binder.bind_static_method("Cor", "Project", "create_allocation_state_label", ProjectMrubyCallItnl::create_allocation_state_label);
            binder.bind_static_method("Cor", "Project", "create_collision_only_event_listener", ProjectMrubyCallItnl::create_collision_only_event_listener);
            binder.bind_static_method("Cor", "Project", "get_collision_system", ProjectMrubyCallItnl::get_collision_system); 
            binder.bind_static_method("Cor", "Project", "get_rts_object_group", ProjectMrubyCallItnl::get_rts_object_group);
            binder.bind_static_method("Cor", "Project", "reset_collision_system", ProjectMrubyCallItnl::reset_collision_system); 
            binder.bind_static_method("Cor", "Project", "set_scene_local", ProjectMrubyCallItnl::set_scene_local);
            binder.bind_static_method("Cor", "Project", "start_ruby_project", ProjectMrubyCallItnl::start_ruby_project);
            binder.bind_static_method("Cor", "Project", "start_ruby_project_proc", ProjectMrubyCallItnl::start_ruby_project_proc);
            binder.bind_static_method("Cor", "Project", "start_ruby_project_code", ProjectMrubyCallItnl::start_ruby_project_code);
            binder.bind_static_method("Cor", "Project", "call_start_proc", ProjectMrubyCallItnl::call_start_proc);
            binder.bind_static_method("Cor", "Project", "test_str", ProjectMrubyCallItnl::test_str); 
            binder.bind_static_method("Cor", "Project", "convert_to_writable_path", ProjectMrubyCallItnl::convert_to_writable_path);
            binder.bind_static_method("Cor", "Project", "exist_writable_file", ProjectMrubyCallItnl::exist_writable_file);
            binder.bind_static_method("Cor", "Project", "remove_writable_file", ProjectMrubyCallItnl::remove_writable_file);
            binder.bind_static_method("Cor", "Project", "write_text_to_file", ProjectMrubyCallItnl::write_text_to_file);
            binder.bind_static_method("Cor", "Project", "write_text_to_file_path", ProjectMrubyCallItnl::write_text_to_file_path);
            binder.bind_static_method("Cor", "Project", "read_text_from_file", ProjectMrubyCallItnl::read_text_from_file);
            binder.bind_static_method("Cor", "Project", "read_text_from_file_path", ProjectMrubyCallItnl::read_text_from_file_path);
            binder.bind_static_method("Cor", "Project", "draw_rect", ProjectMrubyCallItnl::draw_rect);
            binder.bind_static_method("Cor", "Project", "get_time_ms", ProjectMrubyCallItnl::get_time_ms); 
            binder.bind_static_method("Cor", "Project", "matrix_transform", ProjectMrubyCallItnl::matrix_transform);
            binder.bind_static_method("Cor", "Project", "exit_application", ProjectMrubyCallItnl::exit_application);
            binder.bind_static_method("Cor", "Project", "write_text_to_file_direct", ProjectMrubyCallItnl::write_text_to_file_direct);
            binder.bind_static_method("Cor", "Project", "read_text_from_file_direct", ProjectMrubyCallItnl::read_text_from_file_direct);
            binder.bind_static_method("Cor", "Project", "enum_files", ProjectMrubyCallItnl::enum_files);
            binder.bind_static_method("Cor", "Project", "set_edit_box_delegate", ProjectMrubyCallItnl::set_edit_box_delegate);
            binder.bind_static_method("Cor", "Project", "set_label_blend_func", ProjectMrubyCallItnl::set_label_blend_func);
            binder.bind_static_method("Cor", "Project", "delay_call", ProjectMrubyCallItnl::delay_call);
            binder.bind_static_method("Cor", "Project", "interval_call", ProjectMrubyCallItnl::interval_call);
            binder.bind_static_method("Cor", "Project", "set_text_sprite_blend_func", ProjectMrubyCallItnl::set_text_sprite_blend_func);
            binder.bind_static_method("Cor", "Project", "load_text_async", ProjectMrubyCallItnl::load_text_async);
            binder.bind_static_method("Cor", "Project", "load_image_async", ProjectMrubyCallItnl::load_image_async);
            binder.bind_static_method("Cor", "Project", "load_image_data_async", ProjectMrubyCallItnl::load_image_data_async);
            binder.bind_static_method("Cor", "Project", "make_image_from_data_async", ProjectMrubyCallItnl::make_image_from_data_async);
            binder.bind_static_method("Cor", "Project", "debug_gc", ProjectMrubyCallItnl::debug_gc);
            binder.bind_static_method("Cor", "Project", "get_import_name", ProjectMrubyCallItnl::get_import_name);
            binder.bind_static_method("Cor", "Project", "get_argument_string", ProjectMrubyCallItnl::get_argument_string);
            binder.bind_static_method("Cor", "Project", "get_platform_name", ProjectMrubyCallItnl::get_platform_name);
            

            //
            itnl->table_sp = data_structure::SharedPtrTable::create();

            itnl->collision = std::make_shared<cocos2dx_converter::Collision2dNode>();
            itnl->rts_object_group = cocos2dx_converter::RtsObjectGroup::create(itnl->collision);
            

        }

        void ProjectMrubyCall::step()
        {
            if(itnl->first)
            {
                cocos2dx_mruby_interface::MrubyScriptEnginePtr instance = cocos2dx_mruby_interface::MrubyScriptEngine::get_instance();

                auto& mrb = instance->ref_mrb();

                //
                log_debug("ProjectMrubyCall::start()");

                if(itnl->start_proc)
                {
                    mrb.load_string_error_log("start_code", "Project.call_start_proc");
                    //itnl->start_proc.func()();
                }

                if(!itnl->start_code.empty())
                {
                    mrb.load_string_error_log("start_code", itnl->start_code);
                }

                if(!itnl->file_name.empty())
                {
                    if(!cocos2d::FileUtils::getInstance()->isFileExist(itnl->file_name))
                    {
                        log_error("File not found \"", itnl->file_name, "\".");
                    }

                    RString code = cocos2d::FileUtils::getInstance()->getStringFromFile(itnl->file_name);
                    mrb.load_string_error_log(itnl->file_name, code);
                }

                itnl->first = false;
            }

            auto mrb= mruby_interface::MrubyState::get_current();
            mrb->clear_tmp_shared();
        }

        void ProjectMrubyCall::stop()
        {
            clear();
        }

    }
}
