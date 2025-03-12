#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <cstring>
using namespace std;

class MyString {
public:
    MyString() {
        str = NULL;
    }
    MyString(const char* ps): str(NULL) {
        if (ps != NULL) {
            if (str == NULL) {
                str = new char[strlen(ps) + 1];
            }
            
            strcpy(str, ps);
        }
    }
    
    MyString(const MyString& ms):str(NULL) {
        if (str == NULL) {
            str = new char[strlen(ms.str) + 1];
        }

        strcpy(str, ms.str);        
    }
    
    ~MyString() {
        delete[] str; 
    }
    
    MyString& operator=(const MyString& another) {
        if (str == NULL) {
            str = new char[strlen(another.str) + 1];
        } else {
            delete[] str;
            str = new char[strlen(another.str) + 1];
        }

        strcpy(str, another.str);
        
        return *this;
    }
    
    void print() {
        cout << "str = " << str << endl;
    }
    
private:
    char* str;
};





#endif