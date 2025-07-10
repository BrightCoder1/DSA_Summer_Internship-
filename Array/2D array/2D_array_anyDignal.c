#include <stdio.h>

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int sum = 0;
    int size = 3;

    for (int i = 0; i < size; i++)
    {
        sum += a[i][size - 1 - i]; 
    }

    printf("Sum of anti-diagonal elements = %d\n", sum);

    return 0;
}
