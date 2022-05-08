#include <stdio.h>
int main(void){
    #ifdef _WIN64
        printf ("Windows 64");
    #elif _FreeBSD_
        printf ("FreeBSD");
    #elif __linux
        printf ("Linux");
    #endif

    return 0;
}