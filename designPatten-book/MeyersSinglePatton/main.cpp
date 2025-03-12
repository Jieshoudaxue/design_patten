#include <iostream>
#include "singleton.h"

using namespace std;

int main(void) {
    Singleton &s1 = Singleton::Instance();
    Singleton &s2 = Singleton::Instance();

    s1.print_test_a();
    s2.print_test_a();

    return 0;
}
