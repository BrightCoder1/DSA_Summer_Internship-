#include <STDIO.H>

void SwapFun(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a: %d\n", *a);
    printf("b: %d", *b);
}
int main()
{
    int a = 10;
    int b = 20;
    SwapFun(&a, &b);
    return 0;
}