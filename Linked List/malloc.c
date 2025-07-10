#include <STDIO.H>
#include <STDLIB.H>

int main()
{
    int *a;
    a = (int *)malloc(sizeof(a));
    *a = 10;
    printf("%d", *a);
    return 0;
}