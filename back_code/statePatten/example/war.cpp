#include <iostream>
#include "war.h"

using namespace std;

void War::showState() {
    if (duration < 10) {
        cout << duration << "days, in propahse of war, The two sides tried each other" << endl;
    } else if (duration < 20) {
        cout << duration << "days, in metaphase of war, Each has its own victory or defeat" << endl;
    } else if (duration < 30) {
        cout << duration << "days, in anaphase of war, Fight to death" << endl;
    } else {
        cout << "war is over" << endl;
    }
}

