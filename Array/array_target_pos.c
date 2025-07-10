#include <STDIO.H>
int main()
{
    int arr[] = {1, 2, 4, 5};

    int target = 4;
    int flg = 0;
    int index;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == target)
        {
            flg = 1;
            index = i;
        }
    }

    if (flg == 1)
    {
        printf("Element is found at %d index..... ", index);
    }
    else
    {
        printf("Element is not found******");
    }
    return 0;
}