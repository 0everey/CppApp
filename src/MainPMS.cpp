// MainPMS.cpp
#include <memory>
using namespace std;
#include "App.h"
#include"FileExample.h"
#include"inputMgr.h"
//#define TEST
int main()
{
#ifndef TEST
    shared_ptr<App> app = make_shared<App>();
    app->init();
    app->run();
    app->term();
#else
 
#endif
}