#include <STDIO.H>
int main()
{
    int a[] = {1, 2, 3, 5, 4};
    int b[] = {8, 7, 9, 10, 8};

    int c[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - 5];
        }
    }

    for (int k = 0; k < 10; k++)
    {
        printf("%d \t", c[k]);
    }
    return 0;
}