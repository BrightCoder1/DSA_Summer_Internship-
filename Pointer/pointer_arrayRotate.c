#include <stdio.h>

#define N 3 // Assuming a 3x3 matrix for demonstration

void transpose(int *matrix)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            // Swap matrix[i][j] with matrix[j][i]
            int temp = *(matrix + i * N + j);
            *(matrix + i * N + j) = *(matrix + j * N + i);
            *(matrix + j * N + i) = temp;
        }
    }
}

void printMatrix(int *matrix)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", *(matrix + i * N + j));
        }
        printf("\n");
    }
}

int main()
{
    int matrix[N * N] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9};

    printf("Original Matrix:\n");
    printMatrix(matrix);

    transpose(matrix);

    printf("\nTransposed Matrix:\n");
    printMatrix(matrix);

    return 0;
}
