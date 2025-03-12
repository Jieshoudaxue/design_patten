#include <iostream>

using namespace std;

int divide(int a, int b) throw(int) {
    if (b == 0) {
        throw b;
    }
    
    return a/b;
}


int main(void) {
    int num1, num2;
    //double num1, num2;
    cout << "please input two nums: ";
    cin >> num1 >> num2;
    
/*    
    try {
        if (num2 == 0) {
            throw num2;
        }
        cout << "num1/num2 = " << num1/num2 << endl;
    } 
    catch(int e) {
        cout << "int e = " << e << endl;
    }
    catch(double e) {
        cout << "double e = " << e << endl;
    }
*/
    
    try {
        cout << "num1/num2 = " << divide(num1 ,num2) << endl;
    }
    catch(int e) {
        cout << "e is wrong: " << e << endl;
    }
    
    return 0;
}
