#include <iostream>
#include "state.h"

using namespace std;

int main(void) {
    State* ps = new PropahseState();
    cout << "new state: " << ps << endl;
    War* pw = new War(ps);

    for (int i = 5; i < 40; i += 10) {
        pw->setDuration(i);
        pw->getCurState();
    }

    delete pw;
        
    return 0;
}
