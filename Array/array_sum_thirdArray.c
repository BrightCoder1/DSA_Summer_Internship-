#include <STDIO.H>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int sumArr[5];

    for (int i = 0; i < 5; i++)
    {
        int sum = arr[i] + arr2[i];
        // for (int j = 0; j < 5; j++)
        // {
        sumArr[i] = sum;
        // }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", sumArr[i]);
    }
    return 0;
}