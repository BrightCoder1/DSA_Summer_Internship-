#include <STDIO.H>
void SwapNum(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    printf("a is: %d \nb is: %d", a, b);
}
int main()
{
    int a = 10;
    int b = 20;

    SwapNum(a, b);
    return 0;
}