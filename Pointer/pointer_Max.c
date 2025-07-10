#include <STDIO.H>
int maxElement(int *arr, int size)
{
    int max = *arr;
    for (int i = 0; i < size; i++)
    {
        // printf("%d \t", *(arr + i));
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    return max;
}

int main()
{
    int arr[] = {10, 8, 16, 5};
    int s = sizeof(arr) / sizeof(arr[0]);
    int max = maxElement(arr, s);
    printf("%d", max);

    return 0;
}