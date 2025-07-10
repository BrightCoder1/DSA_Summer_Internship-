#include <STDIO.H>
int main()
{
    int arr[3][3];
    printf("Enter the Element: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d \n", &arr[i][j]);
        }
    }

    // print tha array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}