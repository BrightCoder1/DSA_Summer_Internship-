#include <STDIO.H>
void prime(int n)
{
    int isprime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }

    if (isprime == 1)
    {
        printf("Number is prime.");
    }
    else
    {
        printf("Number is not prime.");
    }
}
int main()
{
    int n = 7;
    prime(n);

    return 0;
}