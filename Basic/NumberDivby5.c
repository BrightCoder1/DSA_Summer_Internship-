#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 5 == 0 && number % 2 == 0)
    {
        printf("%d is divisible by both 5 and 2.\n", number);
    }
    else
    {
        printf("%d is NOT divisible by both 5 and 2.\n", number);
    }

    return 0;
}
