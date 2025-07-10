#include <STDIO.H>
int main()
{
    int arr[] = {1, 2, 3, 0, 0, 0};
    int arr2[] = {2, 5, 6};

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = arr2[i - 3];
        }
    }

    // sort the array
    for (int k = 0; k < 6; k++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}