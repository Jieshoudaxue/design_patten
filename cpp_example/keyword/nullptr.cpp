#include <iostream>

using namespace std;

int main(void) {
    //int a = NULL;
    
    int *a = NULL;
    char *b = NULL;
    int *bi = (void *)b;
    
    if (a == 0) {
        cout << "a == 0" << endl;
    }
    
    int *c = nullptr;
    char *d = nullptr;
    //int e = nullptr;
    //cout << "NULL = " << a << endl;
    
    
    
    return 0;
}













