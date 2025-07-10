#include <stdio.h>

int main()
{
    int num1, num2, sum, sub, multi, div;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    printf("Sub of %d and %d is %d\n", num1, num2, sub);
    printf("Multi of %d and %d is %d\n", num1, num2, multi);
    printf("Div of %d and %d is %d\n", num1, num2, div);

    return 0;
}
