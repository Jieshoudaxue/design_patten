#include <iostream>
#include <cstdio>
#include <cmath>
#include "version.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("%s version: %d.%d\n", argv[0], tutorial_VERSION_MAJOR, tutorial_VERSION_MINOR);
        printf("please input num!\n");
        return -1;
    }

    double inputValue = std::stod(argv[1]);
    double outputValue = sqrt(inputValue);

    printf("outputValue = %lf\n", outputValue);
    return 0;
}