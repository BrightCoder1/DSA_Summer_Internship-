#include <STDIO.H>

int check_neon(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + check_neon(n / 10);
    }
}

int main()
{

    int num = 9;
    int sq = num * num;
    int x = check_neon(sq);
    printf("%d", x);
}