#include <stdio.h>
int main(void){
    printf("OS detector ver 0.0.1\n");
    #ifdef __FreeBSD__
        printf ("OS detected: FreeBSD\n\n");
    #elif __linux
        printf ("OS detected: Linux\n\n");
    #endif

    return 0;
}