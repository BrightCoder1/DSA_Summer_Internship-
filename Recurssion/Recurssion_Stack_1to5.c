#include <STDIO.H>
void show(int n)
{
    if (n > 0)
    {
        show(n - 1);
        printf("%d ", n);
    }
}
int main()
{
    show(3);

    return 0;
}