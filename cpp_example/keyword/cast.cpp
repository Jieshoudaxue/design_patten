#include <iostream>
#include <cstdio>

using namespace std;


int main(void) {
    char a = 35;
    int b = a;
    b = static_cast<int>(a);
    
    cout << "b = " << b << endl;
    
    int c = 999;
    char d = static_cast<char>(c);
    printf("d = %d\n", d);
    
    void *pc = &c;
    int *pc1 = static_cast<int *>(pc);
    int *pc2 = (int *)pc;
    //int *pc3 = pc;      //不行
    
    cout << "*pc1 = " << *pc1 << endl;
    cout << "*pc2 = " << *pc2 << endl;

    char *pa = &a;
    //int *pa1 = static_cast<int *>(pa);    //不行
    //int *pa1 = (int *)&a;                 //行
    int *pa1 = reinterpret_cast<int *>(pa); //行
    cout << "*pa1 = " << *pa1 << endl;
    
    const int e = 88;
    //int *pe = &e;     //不行
    int *pe = const_cast<int *>(&e);
        
    return 0;
}
