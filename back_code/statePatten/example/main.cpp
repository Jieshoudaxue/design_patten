#include <iostream>
#include "war.h"

using namespace std;

int main(void) {
    War w;

    for (int i = 5; i < 40; i += 10) {
        w.setDuration(i);
        w.showState();        
    }


    return 0;
}
