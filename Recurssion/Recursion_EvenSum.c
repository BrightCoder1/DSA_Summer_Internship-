#include <STDIO.H>
int sum(int n)
{
    static int s = 0;
    if (n > 0 )
    {
        if (n % 2 == 0)
        {
            s = s + n;
        }
        sum(n - 1);
    }

    if (n == 0)
    {
        return 0;
    }
    else
    {
        return s;
    }
}
int main()
{
    int x = sum(10);
    printf("%d", x);
    return 0;
}