#include <STDIO.H>

void caluSum(int *arr, int num, int *sum)
{
    *sum = 0;
    for (int i = 0; i < num; i++)
    {
        *sum = *sum + *(arr + i);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int num = 4;
    int sum;
    // int *p;
    // p = arr;`
    // int size = 4;
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d \t", *(p + i));
    // }

    caluSum(arr, num, &sum);
    printf("%d", sum);

    return 0;
}