#include <STDIO.H>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int st = 0;
    int end = size - 1;
    int num = 30;
    int show = 0;
    // binary search work on shorted array
    while (st <= end)
    {
        int mid = (st + end) / 2;

        if (arr[mid] == num)
        {
            show = 1;
            break;
        }
        else if (arr[mid] < num)
        {
            st = mid + 1;
        }
        else if (arr[mid] > num)
        {
            end = mid - 1;
        }
    }

    if (show == 1)
    {
        printf("Element is found.");
    }
    else
    {
        printf("Element is not found");
    }

    return 0;
}