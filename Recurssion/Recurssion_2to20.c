#include <STDIO.H>
void show(int n)
{
    if (n <= 20)
    {
        if(n % 2 == 0){
            printf("%d ", n);
        }
    }
    show(n + 1);
}
int main()
{
    show(1);
    return 0;
}