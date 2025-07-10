#include <STDIO.H>
int checkNeon(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + checkNeon(n / 10);
    }
}
int main()
{

    return 0;
}