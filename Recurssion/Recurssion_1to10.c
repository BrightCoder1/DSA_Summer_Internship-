#include <STDIO.H>
void show(int n)
{
    if (n <= 10)
    {
        printf("%d ", n);
    }
    show(n + 1);
}
int main()
{
    show(1);
    return 0;
}