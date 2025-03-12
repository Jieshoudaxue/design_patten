#include <iostream>
#include "bridge.h"

using namespace std;

int main(void) {
    PhoneSoft* p = new Game();
    PhoneBrand* pb = new Nokia(p);

    pb->run();
    
    delete p;
    delete pb;

    PhoneSoft* p1 = new AddressList();
    PhoneBrand* pb1 = new Iphone(p1);

    pb1->run();
    
    delete p1;
    delete pb1;    
    return 0;
}
