#include <STDIO.H>
void arrayElementSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;
    }

    printf("The sum of array elme: %d", sum);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    arrayElementSum(arr, size);
    return 0;
}