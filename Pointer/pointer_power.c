#include <STDIO.H>
#include <MATH.H>
void power(int *x, int y)
{
    int pw = pow(*x, y);
    printf("Power : %d", pw);
}
int main()
{
    int x = 10;
    int y = 3;
    power(&x, y);
    return 0;
}