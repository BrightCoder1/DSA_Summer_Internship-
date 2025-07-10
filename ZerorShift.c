#include <STDIO.H>
int main()
{
    int arr[7] = {1, 0, 2, 0, 3, 0, 4};

    for (int i = 0; i <= 7; i++)
    {
        for (int j = i; j <= 7; j++)
        {
            if (arr[j] == 0)
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}