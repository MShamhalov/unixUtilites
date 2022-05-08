#include <stdio.h>
int main(void){
    #ifdef _WIN64
        printf ("Windows 64");
    #elif __FreeBSD__
        printf ("FreeBSD");
    #elif __linux
        printf ("Linux");
    #endif

    return 0;
}