#include <iostream>
#include "templateMethod.h"

using namespace std;

int main(void) {
    Resume* r = new ResumeA();

    r->fillResume();



    delete r;


    return 0;
}

