#include <STDIO.H>
int multiply(int num)
{
    int multi = 0;
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return (num % 10) * multiply(num / 10);
    }
}
int DigitSum(int num)
{
    int sum = 0;
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num % 10 + DigitSum(num / 10);
    }
}

int main()
{
    int num = 1124;
    int result = DigitSum(num);

    int mult = multiply(num);

    // printf("%d \n", result);
    // printf("%d", mult);
    if (result == mult)
    {
        printf("Number is SpyNumber");
    }
    else
    {
        printf("Number is not SpyNumber");
    }
    return 0;
}