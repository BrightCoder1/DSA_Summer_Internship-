#include <STDIO.H>
void countEvenOdd(int *arr, int size)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even number: %d \t", even);
    printf("Odd number: %d \t", odd);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    countEvenOdd(arr, size);
    return 0;
}