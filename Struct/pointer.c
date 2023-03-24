#include <stdio.h>

int add(int x, int y)

{
    return x + y;

}

int main()
{
    int (*func_ptr)(int,int);//define the function pointer
    func_ptr = &add;//reference to pointer to hold the address of the function

    int result;

    result = func_ptr(5,10);
    printf("%d\n", result);
    return 0;

}