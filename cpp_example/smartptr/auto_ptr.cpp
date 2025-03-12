#include <iostream>
#include <memory>
using namespace std;

void func(auto_ptr<double> pa) {
    cout << *pa << endl;
}

int main(void) {
    cout << "***********auto_ptr usage*************" << endl;
    auto_ptr<int> p(new int(3));
    cout << *p << endl;

    //auto_ptr<int> p1 = new int(4);    //failed
    auto_ptr<int> p1 = p;
    cout << *p1 << endl;
    //cout << *p << endl;       //Segmentation fault 

    int* pt = p1.get();
    cout << *pt << endl;
    cout << *p1 << endl;

    int* pt1 = p1.release();
    cout << *pt1 << endl;
    //cout << *p1 << endl;      //Segmentation fault 
    delete pt1;                 //if not, will heap leak!

    p1.reset(new int(9));
    cout << *p1 << endl;

    cout << "***********auto_ptr defect**************" << endl;
    auto_ptr<double> pd(new double(5.5));
    cout << *pd << endl;

    auto_ptr<double> pd1;
    pd1 = pd;
    cout << *pd1 << endl;
    //cout << *pd << endl;      //Segmentation fault 

    //pd1.release();            //heap leak;
    pd1.reset();

    auto_ptr<double> pd2(new double(4.4));
    func(pd2);
    //cout << *pd2 << endl;     //Segmentation fault 


    //g++ main.cpp -g -o test
    //valgrind --tool=memcheck --leak-check=full --show-reachable=yes --trace-children=yes ./test
    return 0;
}


