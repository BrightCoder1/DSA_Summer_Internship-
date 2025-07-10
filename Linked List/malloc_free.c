#include <STDIO.H>
#include <STDLIB.H>

int main()
{
    int *a;
    a = (int *)malloc(sizeof(a));
    *a = 10;
    printf("%d", *a);
    free(a);
    printf("\n%d", a);

    return 0;
}