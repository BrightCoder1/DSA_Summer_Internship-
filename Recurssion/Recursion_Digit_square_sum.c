#include <STDIO.H>
int DigitSum(int num)
{
    int sum = 0;
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num % 10 * num % 10 + DigitSum(num / 10);
    }
}
int main()
{
    int num = 132;
    int result = DigitSum(num);
    printf("%d", result);
    return 0;
}