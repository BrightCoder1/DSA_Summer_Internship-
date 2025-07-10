#include <STDIO.H>
void calc(int arr[], int *sum)
{
    *sum = 0;

    for (int i = 0; i < 5; i++)
    {
        *sum = *sum + arr[i];
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p;
    p = arr;
    int sum;
    calc(p, &sum);

    printf("sum: %d", sum);
    return 0;
}