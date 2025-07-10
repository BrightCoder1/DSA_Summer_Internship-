#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
