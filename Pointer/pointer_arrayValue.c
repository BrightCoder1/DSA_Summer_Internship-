#include <STDIO.H>
void update(int *n)
{
    *n = *n * 10;
}
int main()
{
    int arr[] = {1, 2, 3, 4};

    for (int i = 0; i < 3; i++)
    {
        // update(&arr[i]);
        int x = arr[i];
        update(&x);
        arr[i] = x;
    }

    for (int j = 0; j < 3; j++)
    {
        printf("%d \t", arr[j]);
    }
    return 0;
}