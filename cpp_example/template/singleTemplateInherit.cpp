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
class Son : public Father<T> {
public:
    Son() {}
    Son(T p1, T p2):sp(p1), Father<T>(p2) {}
    
    void sonPrint() {
        cout << "Son sp = " << sp << endl;
    }

private:
    T sp;
};


int main(void) {
    Son<int> s(3, 5);
    s.sonPrint();
    s.fatherPrint();
    
    
    return 0;
}
