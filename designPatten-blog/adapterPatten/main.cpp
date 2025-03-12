#include <iostream>
#include "adapter.h"

using namespace std;

int main(void) {
    Sequence* s1 = new Stack();
    Sequence* s2 = new Queue();

    s1->pop();
    s1->push(8);

    s2->pop();
    s2->push(6);

    delete s1;
    delete s2;


    return 0;
}

