#include <STDIO.H>
int main()
{
    int a = 10;
    int b = 20;

    int *num = &a;
    int *num2 = &b;
    int sum = *num + *num2;

    printf("%d",sum);
    return 0;
}