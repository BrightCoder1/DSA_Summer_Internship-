#include <STDIO.H>
void arrayCheck(int arr[], int size)
{
    int isSorted = 1;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSorted = 0;
            break;
        }
        
    }

    if (isSorted)
    {
        printf("Array is sorted.");
    }
    else
    {
        printf("Array is not sorted.");
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    arrayCheck(arr, size);

    return 0;
}