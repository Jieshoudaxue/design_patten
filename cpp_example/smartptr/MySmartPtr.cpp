#include <iostream>
#include <memory>
using namespace std;

template <class T>
class SmartPtr {
public:
    SmartPtr():ptr(NULL) {}
    SmartPtr(T* rp):ptr(rp) {
        cout << "1" << endl;
    }

    SmartPtr(SmartPtr<T>&& rs) {
        ptr = rs.ptr;
        rs.ptr = NULL;
        cout << "2" << endl;
    }
    ~SmartPtr() {
        if (ptr != NULL) {
            delete ptr;
        }
    }

    T operator*() {
        return *ptr;
    }    
private:
    T* ptr;
};

template <class T, class... Args>
SmartPtr<T> make_smart(Args&&... args) {
    return SmartPtr<T>(new T(std::forward<Args>(args)...));
}

int main(void) {
    SmartPtr<string> pa = make_smart<string>("ycao");
    cout << *pa << endl;

    SmartPtr<string> pb = new string("miao");
    cout << *pb << endl;

    SmartPtr<string> pc = std::move(pb);
    return 0;
}


