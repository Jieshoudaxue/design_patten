#include <iostream>
#include <memory>
using namespace std;

struct Base {
    virtual void print() {
        cout << "base hello" << endl;
    }
};
struct Derived : public Base {
    void print() {
        cout << "derived hello" << endl;
    }
};

int main(void) {
    shared_ptr<string> sp(new string("ycao"));
    cout << *sp << endl;

    //shared_ptr<string> sp1 = new string("miao");      //invalid
    //shared_ptr<string> sp1 = string("miao");          //invalid, not string
    
    shared_ptr<string> sp1 = std::make_shared<string>("miao");
    cout << *sp1 << endl;
    cout << sp1.use_count() << endl;
    cout << boolalpha << sp1.unique() << endl;

    auto sp2 = sp1;
    cout << *sp2 << endl;
    cout << sp1.use_count() << endl;
    cout << boolalpha << sp1.unique() << endl;

    sp1.reset();
    cout << "ycao " << sp1.use_count() << endl;
    cout << "ycao " << boolalpha << sp1.unique() << endl;
    cout << "ycao " << sp2.use_count() << endl;
    cout << "ycao " << boolalpha << sp2.unique() << endl;

    string* p = sp2.get();
    cout << *p << endl;

    if (sp2) {
        cout << boolalpha << true << endl;
    } else {
        cout << boolalpha << false << endl;
    }
    cout << sp1 << endl;
    sp2.reset();
    cout << sp2 << endl;

    shared_ptr<string[]> spa(new string[3]);
    spa[0] = "miao";
    cout << spa[0] << endl;


    /*test static_pointer_cast and dynamic_pointer_cast*/
    shared_ptr<Base> sp3 = make_shared<Derived>();
    //sp3->print();         //invalid, should cust
    auto dp = static_cast<Derived*>(sp3.get());
    dp->print();

    auto dp1 = dynamic_cast<Derived*>(sp3.get());
    dp1->print();


    //g++ -std=c++11 main.cpp -fno-elide-constructors -o test
    //valgrind --tool=memcheck --leak-check=full --show-reachable=yes --trace-children=yes ./test

    return 0;
}


