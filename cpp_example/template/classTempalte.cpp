#include <iostream>

using namespace std;

template <typename T>
class Operation {
public:
    Operation() {}
    Operation(T n1, T n2):num1(n1), num2(n2) {}
    
    T add() {
        return num1 + num2;
    }

    T mul();
    
    void test(T n) {
        cout << "parameter n = " << n << endl;
    }
private:
    T num1;
    T num2;
};

template <typename T>
T Operation<T>::mul() {
    return num1 * num2;
}


template <typename T1, typename T2>
class Operation1 {
public:
    Operation1() {}
    Operation1(T1 n1, T2 n2):num1(n1), num2(n2) {}
    
    T1 mul();
    
private:
    T1 num1;
    T2 num2;
};

template <typename T1, typename T2>
T1 Operation1<T1,T2>::mul() {
    return num1 * num2;
}

int main(void) {
    Operation<int> o1(3, 4);
    cout << "add result is " << o1.add() << endl;
    o1.test(9);
    
    Operation<double> o2(3.3, 4.4);
    cout << "mul result is " << o2.mul() << endl;
    o2.test(9.8);    
    
    Operation<string> o3("ycao", " No.1");
    cout << o3.add() << endl;;
    
    Operation1<double, int> o4(4.3, 5);
    cout << "mul result is " << o4.mul() << endl;
    
    return 0;
}
