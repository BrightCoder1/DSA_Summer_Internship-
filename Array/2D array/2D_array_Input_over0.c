#include <STDIO.H>
int main()
{
    int arr[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}};

    printf("Enter the element:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");

        for (int k = 0; k < 3; k++)
        {
            for (int n = 0; n < 3; n++)
            {
                printf(" %d ", arr[k][n]);
            }
            printf("\n");
        }
    }

    return 0;
}