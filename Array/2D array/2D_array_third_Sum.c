#include <stdio.h>

int main()
{
    int size = 5;

    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {5, 4, 3, 2, 1};
    int sum[5];

    // Calculate sum of elements into third array
    for (int i = 0; i < size; i++)
    {
        sum[i] = a[i] + b[i];
    }

    // Print the result
    printf("Array A: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nArray B: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\nSum Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
