#include <iostream>

using namespace std;

void func1(void);
namespace NS1 {
    void func1(void);
    void func2(void);

}
    
namespace NS2 {
    void func1(void) {
        cout << "NS2::func1 calls NS1::func1" << endl;
        NS1::func1();
    }
    
    void func2(void) {
        cout << "NS2::func1 calls NS1::func1" << endl;
        NS1::func2();
    }    
}

namespace {
    void func(void);
}
namespace NS3 {
    void func1(void);
    void func2(void);
    namespace NS1 {
        void func1(void);
        void func2(void);
    }
}

int main(void) {
    cout << "this is main" << endl;
    
    func1();
    NS1::func1();
    NS1::func2();

    NS2::func1();
    NS2::func2();
    func();
    NS3::func1();
    NS3::func2();
    NS3::NS1::func1();
    NS3::NS1::func2();
    return 0;
}

void func1(void) {
    cout << "this is func1, in default namespace" << endl;
}

    void NS1::func1(void) {
        cout << "this is NS1::func1" << endl;
    }
    
    void NS1::func2(void) {
        cout << "this is NS1::func2" << endl;
    }
    


namespace {
    void func(void) {
        cout << "this is func of anonymous namespace" << endl;
    }
}

namespace NS3 {
    void func1(void) {
        cout << "this is NS3::func1" << endl;
    }
    
    void func2(void) {
        cout << "NS3::func2 calls NS3::NS1::func1" << endl;
        NS1::func1();
    }
    
    namespace NS1 {
        void func1(void) {
            cout << "this is NS3::NS1::func1" << endl;
        }
        
        void func2(void) {
            cout << "NS3::NS1::func2 calls NS3::func1" << endl;
            NS3::func1();
        }
    }
}











