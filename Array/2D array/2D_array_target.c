#include <STDIO.H>
int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int target = 5;
    int flg = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == target)
            {
                printf("Element is found at index: [%d,%d]", i, j);
                return 0;
            }
        }
        // printf("\n");
    }

    return 0;
}