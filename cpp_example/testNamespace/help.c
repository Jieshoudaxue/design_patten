#include <stdio.h>

{

    int func1(void) {
        printf("this is func1\n");
    }

    int func2(void) {
        printf("this is func2\n");
    }
}



int main(void) {
    printf("hello world\n");
    
    func1();
    func2();
    
    return 0;
}














