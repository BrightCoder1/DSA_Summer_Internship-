#include <STDIO.H>
int powerFind(int n)
{
    static int pow = 1;
    if (n > 0)
    {
        pow = n * (n - 1);
    }
    return pow;
}

int main()
{
    int n = 10;
    int result = powerFind(n);
    printf("%d", result);
    return 0;
}