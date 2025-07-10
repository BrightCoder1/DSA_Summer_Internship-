#include <STDIO.H>

void sum(int a, int b)
{
    int sum = a + b;
    printf("Sum: %d \n", sum);
}

void sub(int a, int b)
{
    int sub = a - b;
    printf("Sub: %d \n", sub);
}

void multi(int a, int b)
{
    int multi = a * b;
    printf("Multi: %d \n", multi);
}

void div(int a, int b)
{
    int div = a / b;
    printf("Div: %d \n", div);
}

int main()
{
    int a, b;
    printf("Enter the Number 1:");
    scanf("%d", &a);
    printf("Enter the Number 2");
    scanf("%d", &b);

    sum(a, b);
    sub(a, b);
    multi(a, b);
    div(a, b);
    return 0;
}