#include <iostream>
#include <memory>
using namespace std;

struct Foo {
public:
    Foo() {
        cout << "foo ctor" << endl;
    }
    Foo(const Foo& rf) {
        cout << "foo copy ctor" << endl;
    }
    Foo(Foo&& rf) {
        cout << "foo move ctor" << endl;
    }
    ~Foo() {
        cout << "~Foo" << endl;
    }
};

struct D {
    D() {
        cout << "d ctor" << endl;
    }
    D(const D& rd) {
        cout << "d copy ctor" << endl;
    }
    D(D&& rd) {
        cout << "d move ctor" << endl;
    }
    void operator()(Foo* p) {
        cout << "deletor d" << endl;
        delete p;
    }
};

template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

void func(unique_ptr<string> pa) {
    cout << *pa << endl;
}

int main(void) {
    cout << "*******call foo ctor" << endl;
    {
        unique_ptr<Foo> up(new Foo());
    }
    cout << "*******call deletor d" << endl;
    {
        unique_ptr<Foo, D> up(new Foo(), D());
    }
    cout << "*******call foo ctor again" << endl;
    {
        unique_ptr<Foo> up(new Foo());
        unique_ptr<Foo> up1(std::move(up));
    }
    cout << "*******call foo ctor array" << endl;
    {
        unique_ptr<Foo[]> up(new Foo[3]);
    }

    cout << "*******test unique_ptr func" << endl;
    {
        unique_ptr<string[]> up(new string[3]);
        up[0] = "ycao";
        up[1] = "miao";
        up[2] = "bao";
        cout << up[0] << " " << up[1] << " " << up[2] << endl;

        unique_ptr<string> up1(new string("ycao"));
        up1.reset(new string("miao"));
        cout << *up1 << endl;
        if (up1) {
            cout << boolalpha << true << endl;
        } else {
            cout << boolalpha << false << endl;
        }
        string* s = up1.release();
        if (up1) {
            cout << boolalpha << true << endl;
        } else {
            cout << boolalpha << false << endl;
        }        
        cout << *s << endl;
        delete s;

        unique_ptr<string> tmp;
        if (tmp) {
            cout << boolalpha << true << endl;
        } else {
            cout << boolalpha << false << endl;
        }          

        unique_ptr<string> up2 = make_unique<string>("bao");
        cout << *up2 << endl;
        //up2.release();                    //heap leak
        //unique_ptr<string> up3 = up2;     //invalid
        //func(up2);                        //invalid
        unique_ptr<string> up3 = std::move(up2);
        cout << *up3 << endl;
        //cout << *up2 << endl;             //Segmentation fault

        int* p = new int(7);
        unique_ptr<int> up4, up5;
        up4.reset(p);
        cout << *up4 << endl;
        //up5.reset(p);                     //Segmentation fault
    }
    return 0;
}


