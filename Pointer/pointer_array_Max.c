#include <STDIO.H>

int find_max(int *arr, int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int arr[] = {10, 3, 20, 21, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = find_max(arr, size);

    printf("Max: %d", max);

    return 0;
}