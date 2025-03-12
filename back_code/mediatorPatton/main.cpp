#include <iostream>
#include "mediator.h"

using namespace std;

int main(void) {
    Mediator* m = new LianJia();
    Person* pr = new Renter();
    Person* pl = new Landlord();

    m->setR(pr);
    m->setL(pl);

    pr->setMediator(m);
    pl->setMediator(m);

    pr->sendMessage("I want to rent a big house, and 500 yuan/month");
    pl->sendMessage("I want to lease a bit house, and 5000 yuan/month");


    delete m;
    delete pr;
    delete pl;
    
    
    return 0;
}
