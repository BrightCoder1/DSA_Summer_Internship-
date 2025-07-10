#include <STDIO.H>
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int num = 5;

    int factCont = fact(num);
    printf("Fact: %d", factCont);
    return 0;
}