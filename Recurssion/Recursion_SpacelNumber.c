#include <STDIO.H>

int fact(int num)
{
    if ((num == 0) || (num == 1))
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}

int factSum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return fact(num % 10) + factSum(num / 10);
    }
}

int main()
{
    int num = 145;
    int factResult = factSum(num);
    if (num == factResult)
    {
        printf("Sp Number.");
    }
    else
    {
        printf("Not Sp Number.");
    }
}