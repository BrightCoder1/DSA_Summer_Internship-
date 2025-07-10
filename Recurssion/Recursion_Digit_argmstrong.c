#include <STDIO.H>
#include <MATH.H>
int DigitSum(int num)
{
    int sum = 0;
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return pow((num % 10), 3) + DigitSum(num / 10);
    }
}

int main()
{
    int num = 132;
    int result = DigitSum(num);

    if (num == result)
    {
        printf("%d", result);
    }
    return 0;
}