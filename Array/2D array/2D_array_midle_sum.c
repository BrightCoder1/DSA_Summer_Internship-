#include <STDIO.H>
int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 || j == 1)
            {
                sum = a[i][j] + sum;
            }
        }
    }
    printf("Sum %d", sum);

    return 0;
}