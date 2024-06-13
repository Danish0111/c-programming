#include <stdio.h>
#define VERSION 1

int main(){

#if VERSION == 1
    printf("version is 1");

#elif VERSION == 2
    printf("version is 2");

#endif

    return 0;
}