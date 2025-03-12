#include <iostream>
#include "proxy.h"

using namespace std;

int main(void) {
    Image* i = new HugeImageProxy("ycao.jpg");

    i->show();

    delete i;
    
    return 0;
}
