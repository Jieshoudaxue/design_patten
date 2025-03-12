#include <iostream>
#include "proxy.h"

using namespace std;

int main(void) {
    IGiveGift* ip = new Proxy("miao");
    ip->giveChocolate();

    delete ip;
    
    return 0;
}
