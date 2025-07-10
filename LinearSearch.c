#include <STDIO.H>
int main()
{
    int arr[] = {10, 40, 20, 50, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int found = 0;
    int num = 200;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            return 0;
        }
    }
    if (found != 0)
    {
        printf("Element is not found");
    }
    else
    {
        printf("Element is found");
    }

    return 0;
}