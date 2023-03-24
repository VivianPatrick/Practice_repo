#include <stdio.h>

#define VER 5

int main()
{
    #if VER >= 1
    printf("This is for Version 1\n");
    #endif
    #if VER >= 2
    printf("This is for Version 2\n");
    #endif
    #if VER >= 3
    printf("This is for Version 3\n");
    #endif
    #if VER >= 4
    printf("This is for Version 4\n");
    #endif
    #if VER >= 5
    printf("This is for Version 5\n");
    #endif


}