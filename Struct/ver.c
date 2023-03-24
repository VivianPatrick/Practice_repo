#include <stdio.h>

#define VER 1

int main()
{
    #if VER == 1
    printf("This is for Version 1\n");
    #elif VER == 2
    printf("This is for Version 2\n");
    #elif VER == 3
    printf("This is for Version 3\n");
    #elif VER == 4
    printf("This is for Version 4\n");
    #elif VER == 5
    printf("This is for Version 5\n");
    #else
    #error "Please provide the macro VER"
    #endif
    

    }