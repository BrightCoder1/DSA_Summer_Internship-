#include <STDIO.H>
// 1    10  100     1000    1000000
int main()
{
    int a = 10;
    for (int i = 0; i <= 5; i++)
    {
        printf("%d \n", a);
        a = a * i;
    }
}