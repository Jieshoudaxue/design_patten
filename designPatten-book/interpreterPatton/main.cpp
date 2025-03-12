#include <iostream>
#include "interpreter.h"

using namespace std;

int main(void) {
    InstructionHandler* pi = new InstructionHandler("xiangqian yidong 5 he xiangxia paodong 10");

    pi->handle();
    pi->output();

    delete pi;

    InstructionHandler* pi1 = new InstructionHandler("xiangqian yidong 5");

    pi1->handle();
    pi1->output();

    delete pi1;

    
    return 0;
}
