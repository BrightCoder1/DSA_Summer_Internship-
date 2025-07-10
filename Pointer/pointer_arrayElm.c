#include <STDIO.H>
int main()
{
    int arr[] = {10, 20, 30, 40};
    int *p;
    p = arr;

    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        sum = sum + *(p + i);
    }

    printf("Sum: %d", sum);
    return 0;
}