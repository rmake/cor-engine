#ifndef __PROJECT_TEST_1_H_
#define __PROJECT_TEST_1_H__

#include "cor_project_structure/sources/application.h"


struct ProjectTest1Itnl;

class ProjectTest1 : public cor::project_structure::ProjectBase
{
    std::unique_ptr<ProjectTest1Itnl> itnl;
public:

    ProjectTest1();
    virtual ~ProjectTest1();

    virtual void start();
    virtual void step();

    void menuCloseCallback(cocos2d::Ref* pSender);

    void mrubyTest();
    void mrubyCocos2dxTest();

    static void start_project_test1();
    static void init_mruby_call(cor::project_structure::ApplicationPtr app);
};

#endif

