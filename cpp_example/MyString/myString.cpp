#include "myString.h"

MyString& MyString::operator=(const MyString& another) {
    if (str == NULL) {
        str = new char[strlen(another.str) + 1];
    } else {
        delete[] str;
        str = new char[strlen(another.str) + 1];
    }

    strcpy(str, another.str);
    
    return *this;
}