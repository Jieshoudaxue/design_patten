#include <iostream>

using namespace std;

struct str1 {
    char &rc;
};

struct str2 {
    int &rc;
};

int main(void) {
    bool a = true;
    bool b = false;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    cout << "sizeof(bool) = " << sizeof(bool) << endl;
    
    string s1 = "曹益";
    cout << "s1 is " << s1 << endl;
    
    char c1[] = "曹益";
    cout << "c1 is " << c1 << endl;
    
    if (a and ( not b)) {
        cout << boolalpha << true << endl;
    }
    
    int num1 = 8;
    int num2 = 4;
    int &rnum1 = num1;
    int &rnum2 = num2;
    int *pnum1 = &num1;
    int *pnum2 = &num2;
    
    cout << "rnum1 = " << rnum1 << endl;
    cout << "rnum2 = " << rnum2 << endl;

    rnum1 = 10;
    cout << "num1 = " << num1 << endl;

    cout << "sizeof(rnum1) = " << sizeof(rnum1) << endl;
    cout << "sizeof(pnum1) = " << sizeof(pnum1) << endl;
    cout << "sizeof(*pnum1) = " << sizeof(*pnum1) << endl;

    cout << "sizeof(str1) = " << sizeof(str1) << endl;
    cout << "sizeof(str2) = " << sizeof(str2) << endl;

    swap(num1, num2);
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    
    char str1[] = "ycao";
    char str2[] = "miao";
    //char* &rstr1 = str1;   //引用不用用于指针变量！
    //char* &rstr2 = str2;
    
    int num3 = 34;
    int num4 = 89;
    const int &rnum3 = num3;
    const int &rnum4 = num4;
    
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;    
    //rnum3 = 90;     //用const修饰引用，其值不能修改
    
    
    return 0;
}

void swap(int &rnum1, int &rnum2) {
    int tmp = 0;
    tmp = rnum1;
    rnum1 = rnum2;
    rnum2 = tmp;
}





