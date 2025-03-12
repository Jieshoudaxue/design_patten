#include "myString.h"

int main(void) {
    MyString ms("ycao");
    MyString ms1("miaomiaomiaomiaomiao");
    
    MyString msa = ms;
    msa.print();
    
    msa = ms1;
    
    msa.print();
    
    MyString msb;
    msb = ms = ms1;
    ms.print();
    msb.print();
    
    
    return 0;
}