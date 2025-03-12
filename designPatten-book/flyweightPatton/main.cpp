#include <iostream>
#include "flyweight.h"

using namespace std;

int main(void) {
    WebFactory* pwf = new WebFactory();
    
    pwf->createWeb("Blog", "csdn");
    pwf->createWeb("YellowPage", "chinayp");

    User u1("ycao");
    User u2("miao");
    pwf->addUser("Blog", u1);
    pwf->addUser("Blog", u2);
    
    pwf->addUser("YellowPage", u1);
    pwf->addUser("YellowPage", u2);

    delete pwf;
    return 0;
}
