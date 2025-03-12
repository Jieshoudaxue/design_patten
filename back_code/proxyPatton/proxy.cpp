#include <iostream>
#include "proxy.h"

using namespace std;

void HugeImageProxy::show() {
    if (hi == NULL) {
        hi = new HugeImage(name);
    }
    hi->show();
}

