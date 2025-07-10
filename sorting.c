#include <stdio.h>

int main()
{
    int arr[] = {5, 10, 8, 2, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int num = 9;
    int st = 0;
    int end = len - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == num)
        {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (num < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    printf("Number is not found\n");

    return 0;
}
