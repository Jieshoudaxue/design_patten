#include <iostream>

using namespace std;


int main(void) {
    int *p = new int;
    cout << "*p = " << *p << endl;    
    
    delete p;

    int *p1 = new int(32);
    cout << "*p = " << *p << endl;
    delete p1;    


    int *p2 = new int[10];
    for (int i = 0; i < 10; i ++) {
	cout << "*p2 " << i << " = " << p2[i] << endl; 
    }
    for (int i = 0; i < 10; i ++) {
        p2[i] = i;
	cout << "*p2 " << i << " = " << p2[i] << endl; 
    }
    delete []p2;

    return 0;
}
