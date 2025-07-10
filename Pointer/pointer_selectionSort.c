#include <STDIO.H>
void selectionSort(int *arr, int size)
{
    int pos;
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

    // print elm
    for (int k = 0; k < size; k++)
    {
        printf("%d \t", arr[k]);
    }
}

int main()
{
    int arr[] = {1, 10, 3, 9, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    return 0;
}