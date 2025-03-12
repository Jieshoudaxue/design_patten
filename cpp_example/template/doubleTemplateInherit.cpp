#include <iostream>

using namespace std;

template <typename U1, typename U2>
class Father {
public:
    Father() {}
    Father(U1 p1, U2 p2):fp1(p1), fp2(p2) {}
    
    void fatherPrint() {
        cout << "Father fp1 = " << fp1 << endl;
        cout << "Father fp2 = " << fp2 << endl;
    }

private:
    U1 fp1;
    U2 fp2;
};

template <typename T1, typename T2>
class Son : public Father<T1, T2> {
public:
    Son() {}
    Son(T1 p1, T2 p2, T1 p3, T2 p4):sp1(p1), sp2(p2), Father<T1,T2>(p3, p4) {}
    
    void sonPrint() {
        cout << "Son sp1 = " << sp1 << endl;
        cout << "Son sp2 = " << sp2 << endl;
    }

private:
    T1 sp1;
    T2 sp2;
    
};


int main(void) {
    Son<int,double> s(3, 4.4, 5, 6.6);
    s.sonPrint();
    s.fatherPrint();
    
    
    return 0;
}
