#include <STDIO.H>
int main()
{
    int a = 10;
    int *b;
    b = &a;
    printf("%d\n", b); // here print the address of a so b can hold address of a
    printf("%d", *b);  // here *b ref the value of a
    return 0;
}