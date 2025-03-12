#include <stdio.h>

#ifdef __cplusplus
#define USECPP 1
#else
#define USECPP 0
#endif


int main(void) {
    printf("hello ycao\n");

    printf("USECPP is %d\n", USECPP);

    int *a = NULL;
    int *b = (void *)0;
    if (a == 0) {
        printf("a = 0\n");
    }
    
    return 0;
}









