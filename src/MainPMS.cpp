// MainPMS.cpp
#include <memory>
using namespace std;
#include "App.h"
#include"FileExample.h"
int main()
{
    shared_ptr<App> app = make_shared<App>();
    app->init();
    app->run();
    app->term();
}