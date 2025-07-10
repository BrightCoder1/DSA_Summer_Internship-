#include <stdio.h>

int main()
{
    int size = 5;

    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {5, 4, 3, 2, 1};
    int product[5];

    // Multiply corresponding elements
    for (int i = 0; i < size; i++)
    {
        product[i] = a[i] * b[i];
    }

    // Display arrays
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

    printf("\nProduct Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", product[i]);
    }

    return 0;
}
