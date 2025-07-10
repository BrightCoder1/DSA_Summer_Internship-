#include <STDIO.H>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};

    for (int i = 0; i < 6; i++)
    {
        if (i + 1 == 3)
        {
            continue;
        }
        printf("%d \t", arr[i]);
    }
    return 0;
}