#include <STDIO.H>
int main()
{
    int arr[] = {6, -2, 5, -1, 4};

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 0)
        {
            continue;
        }
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] >= 0 && arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}