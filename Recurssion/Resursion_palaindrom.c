#include <stdio.h>

int pali(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }
    else
    {
        rev = (num % 10) + rev * 10;
        return pali(num / 10, rev);
    }
}

int main()
{
    int n = pali(121, 0);
    printf("%d", n);
    return 0;
}