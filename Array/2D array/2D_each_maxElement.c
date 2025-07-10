#include <stdio.h>

int main()
{
    int rows = 3, cols = 4;
    int a[3][4] = {
        {5, 1, 9, 3},
        {4, 8, 2, 7},
        {6, 0, 3, 5}};

    for (int i = 0; i < rows; i++)
    {
        int max = a[i][0]; 

        for (int j = 1; j < cols; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }

        printf("Maximum element in row %d: %d\n", i + 1, max);
    }

    return 0;
}
