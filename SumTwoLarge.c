#include <stdio.h>

int main()
{
    int arr[5] = {12, 35, 10, 34, 6};
    int max = arr[0];
    int smax = arr[0];

    int first = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > first)
        {
            first = arr[i];
        }
    }
    printf("%d \n", first);
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }

    printf("Second Max: %d\n", smax);
    int sum = max + smax;
    printf("Sum: %d", sum);
    return 0;
}
