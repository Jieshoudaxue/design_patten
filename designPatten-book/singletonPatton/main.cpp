#include <iostream>
#include "singleton.h"

using namespace std;

int main(void) {
    Singleton* pi1 = Singleton::getPi();
    Singleton* pi2 = Singleton::getPi();
    cout << pi1 << endl;
    cout << pi2 << endl;

    delete pi2;
    return 0;
}
