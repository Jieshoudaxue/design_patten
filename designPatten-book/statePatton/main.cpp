#include <iostream>
#include "state.h"

using namespace std;

int main(void) {
    Work* pw = new Work();
    pw->coding();

    pw->setHour(13);
    pw->coding();

    pw->setHour(16);
    pw->coding();

    pw->setHour(19);
    pw->coding();

    pw->setHour(20);
    pw->coding();


    delete pw;
    
    return 0;
}
