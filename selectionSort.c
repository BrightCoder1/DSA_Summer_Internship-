#include <STDIO.H>
int main()
{

    int arr[] = {10, 4, 1, 3, 6};
    int pos = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        pos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[pos])
            {
                pos = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }

    for (int k = 0; k < size; k++)
    {
        printf("%d \t", arr[k]);
    }
    return 0;
}