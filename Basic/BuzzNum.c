#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 10 == 7 || number % 7 == 0)
    {
        printf("%d is a Buzz Number.\n", number);
    }
    else
    {
        printf("%d is NOT a Buzz Number.\n", number);
    }

    return 0;
}
