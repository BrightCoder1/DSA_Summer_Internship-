// multiply by 5
#include <STDIO.H>
void show(int n)
{
    if (n * 5 <= 50)
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