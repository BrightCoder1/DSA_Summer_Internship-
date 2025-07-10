#include <STDIO.H>

int main()
{
    int n = 10;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
}