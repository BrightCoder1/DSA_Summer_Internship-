#include <STDIO.H>
int main()
{
    int arr[] = {5, 2, 6, 3, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int k = 0; k < size; k++)
    {
        printf("%d \t", arr[k]);
    }
    return 0;
}