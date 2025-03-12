#include <iostream>
#include "bridge.h"

using namespace std;

int main(void) {
    Pc* p = new Lenovo();

    Os* o = new MacOs();

    p->installOs(o);


    delete p;
    delete o;
    


    
    return 0;
}
