#include <iostream>

using namespace std;

template <typename U>
class Father {
public:
    Father() {}
    Father(U p):fp(p) {}
    
    void fatherPrint() {
        cout << "Father fp = " << fp << endl;
    }

private:
    U fp;
};

template <typename T>
class Son : public Father<double> {
public:
    Son() {}
    Son(T p1, double p2):sp(p1), Father<double>(p2) {}
    
    void sonPrint() {
        cout << "Son sp = " << sp << endl;
    }

private:
    T sp;
};


int main(void) {
    Son<int> s(3, 5.5);
    s.sonPrint();
    s.fatherPrint();
    
    
    return 0;
}
