#include <STDIO.H>
#include <STDLIB.H>
int main()
{
    int *a;
    a = (int *)calloc(5, sizeof(a));
    int *b;
    b = (int *)calloc(5, sizeof(b));

    int *c;
    c = (int *)calloc(5, sizeof(c));

    *a = 20;
    *b = 10;
    *c = 30;
    printf("%d", *a);
    free(a);
    printf("\n%d", &a);

    printf("\n%d", *b);
    free(b);
    printf("\n%d", &b);

    printf("\n%d", *c);
    free(c);
    printf("\n%d", &c);
    return 0;
}