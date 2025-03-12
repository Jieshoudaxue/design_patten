#include <iostream>
#include "prototype.h"

using namespace std;

int main(void) {
    Resume a("ycao", "male", 28, "2018-2021", "fiberhome");
    a.toString();

    // 利用一个对象，创建一个新对象，这就是原型模式
    Resume b = a;
    b.setWork("2015-2018", "hdu");
    b.toString();

    
    return 0;
}
