#include <stdio.h>

int main()
{
    int rows = 4, cols = 4;
    int a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    printf("Boundary elements of the matrix:\n");

    for (int j = 0; j < cols; j++)
    {
        printf("%d ", a[0][j]);
    }

    for (int i = 1; i < rows - 1; i++)
    {
        printf("%d ", a[i][cols - 1]);
    }

    for (int j = cols - 1; j >= 0; j--)
    {
        printf("%d ", a[rows - 1][j]);
    }

    for (int i = rows - 2; i > 0; i--)
    {
        printf("%d ", a[i][0]);
    }

    return 0;
}
