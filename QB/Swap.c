#include <STDIO.H>

int main()
{
    int a = 10;
    int b = 5;

    b = a + b;
    a = b - a;
    b = b - a;

    printf("a %d", a);
    printf("\nb %d", b);
}