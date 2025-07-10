#include <stdio.h>

#define N 3 

void printMatrix(int a[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void rotate90(int a[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0, k = N - 1; j < k; j++, k--)
        {
            int temp = a[i][j];
            a[i][j] = a[i][k];
            a[i][k] = temp;
        }
    }
}

int main()
{
    int a[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("Original Matrix:\n");
    printMatrix(a);

    rotate90(a);

    printf("\nMatrix after 90-degree rotation:\n");
    printMatrix(a);

    return 0;
}
