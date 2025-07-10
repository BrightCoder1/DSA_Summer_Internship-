#include <STDIO.H>
void table(int n)
{
    if (n > 0)
    {
        table(n - 1);
        printf("%d \n", 2 * n);
    }
}
int main()
{
    table(10);
    return 0;
}