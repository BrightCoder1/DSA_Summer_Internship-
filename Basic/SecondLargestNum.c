#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    int second_smallest;

    // Check all possible cases
    if ((a > b && a < c) || (a > c && a < b))
    {
        second_smallest = a;
    }
    else if ((b > a && b < c) || (b > c && b < a))
    {
        second_smallest = b;
    }
    else if ((c > a && c < b) || (c > b && c < a))
    {
        second_smallest = c;
    }
    else
    {
        printf("There is no unique second smallest number.\n");
        return 0;
    }

    printf("Second smallest number is: %d\n", second_smallest);

    return 0;
}