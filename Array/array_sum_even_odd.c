#include <STDIO.H>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int evSum = 0;
    int odSum = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evSum = arr[i] + evSum;
        }
        else
        {
            odSum = arr[i] + odSum;
        }
    }

    printf("Even Sum: %d \n", evSum);
    printf("Odd Sum: %d \n", odSum);

    return 0;
}