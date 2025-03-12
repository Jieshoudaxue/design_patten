#include <iostream>

using namespace std;

struct s1 {
    char a;
    int b;
    short c;
}__attribute__((aligned(sizeof(double))));

struct s2 {
    char a;
    int b;
    short c;
}__attribute__((packed));

#pragma pack(1)
struct s3 {
    char a;
    int b;
    short c;
};
#pragma pack()

struct alignas(sizeof(double)) s4 {
    char a;
    int b;
    short c;
};

struct alignas(1) s5 {
    char a;
    int b;
    short c;
};

int main(void) {
    cout << "alignof s1 = " << alignof(s1) << endl;
    cout << "sizeof s1 = " << sizeof(s1) << endl;

    cout << "alignof s2 = " << alignof(s2) << endl;
    cout << "sizeof s2 = " << sizeof(s2) << endl;

    cout << "alignof s3 = " << alignof(s3) << endl;
    cout << "sizeof s3 = " << sizeof(s3) << endl;

    cout << "alignof s4 = " << alignof(s4) << endl;
    cout << "sizeof s4 = " << sizeof(s4) << endl;
    
    cout << "alignof s5 = " << alignof(s5) << endl;
    cout << "sizeof s5 = " << sizeof(s5) << endl;    
    
    return 0;
}
