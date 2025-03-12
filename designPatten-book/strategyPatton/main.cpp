#include <iostream>
#include "strategy.h"

using namespace std;

int main(void) {
    CashContext cc1("normal");
    cout << cc1.getResult(234.0) << endl;

    CashContext cc2("0.8");
    cout << cc2.getResult(234.0) << endl;

    CashContext cc3("300 back 100");
    cout << cc3.getResult(234.0) << endl;  
    cout << cc3.getResult(434.0) << endl;  
    return 0;
}
