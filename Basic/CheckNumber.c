#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 9)
    {
        printf("%d is a Single Digit number.\n", num);
    }
    else if (num >= 10 && num <= 99)
    {
        printf("%d is a Double Digit number.\n", num);
    }
    else if (num >= 100 && num <= 999)
    {
        printf("%d is a Triple Digit number.\n", num);
    }
    else
    {
        printf("%d: Not Defined\n", num);
    }

    return 0;
}
