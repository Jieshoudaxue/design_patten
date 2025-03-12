#include <iostream>
#include "templateMethod.h"

using namespace std;

int main(void) {
    TestPaper* tp = new YcaoAnswer();
    tp->question();
    tp->answer();

    delete tp;

    tp = new MiaoAnswer();
    tp->answer();

    delete tp;
    
    return 0;
}
