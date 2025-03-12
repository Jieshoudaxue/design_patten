#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <functional>
#include <algorithm>
#include <memory>
using namespace std;

class Demo {
public:
    Demo() : pi(new int(3)) {
        cout << "default constructor" << endl;
    }
    Demo(const Demo& rd) : pi(new int(*rd.pi)) {
        cout << "copy constructor" << endl;
    }
    Demo(Demo&& rd) : pi(new int(*rd.pi)) {
        rd.pi = NULL;
        cout << "move constructor" << endl;
    }
    void print() {
        cout << *pi << endl;
    }
    ~Demo() {
        if (pi != NULL) {
            delete pi;
        }
        cout << "destructor" << endl;
    }
private:
    int *pi;
};

int main() {
    cout << "*******call move constructor******" << endl;
    {
        Demo d = Demo();
    }

    cout << "*******call copy constructor******" << endl;
    {
        Demo tmp;
        Demo d = tmp;
    }

    cout << "*******call move constructor again******" << endl;
    {
        Demo tmp;
        Demo d = std::move(tmp);
        d.print();
        //tmp.print();          //Segmentation fault
    }    

    cout << "*******call move constructor again and again******" << endl;
    {
        Demo tmp1;
        Demo d1(tmp1);

        Demo d2(std::move(tmp1));
    }   
    //g++ main.cpp -fno-elide-constructors -o test
    //http://c.biancheng.net/view/7847.html
    //http://c.biancheng.net/view/7863.html
}