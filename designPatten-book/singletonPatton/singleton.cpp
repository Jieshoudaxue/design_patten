#include <iostream>
#include "singleton.h"

using namespace std;

Singleton* Singleton::pi = NULL;
mutex Singleton::mtx;


