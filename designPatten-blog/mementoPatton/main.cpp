#include <iostream>
#include "memento.h"

using namespace std;

int main(void) {
    Caretake ct;
    YiDaShi y;
    y.show();

    ct.save(y.save());

    y.beat();
    y.show();

    y.load(ct.load(0));
    y.show();
    return 0;
}
