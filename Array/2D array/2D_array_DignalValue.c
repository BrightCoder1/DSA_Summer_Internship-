#include <STDIO.H>
int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf(" %d ", a[i][j]);
            }
            else if (i + j == 2)
            {
                printf(" %d ", a[i][j]);
            }
        }
    }

    return 0;
}