#include <iostream>
#include <cstdio>
#include <cmath>
#include "tutorialconfig.h"

#ifdef USE_MYMATH
#include "mathfunctions.h"
#endif

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("%s version: %d.%d\n", argv[0], tutorial_VERSION_MAJOR, tutorial_VERSION_MINOR);
        printf("please input num!\n");
        return -1;
    }

    double inputValue = std::stod(argv[1]);

#ifdef USE_MYMATH    
    double outputValue = mysqrt(inputValue);
#else
    double outputValue = sqrt(inputValue);
#endif


    printf("outputValue = %lf\n", outputValue);
    return 0;
}