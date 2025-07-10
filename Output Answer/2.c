#include <STDIO.H>
int main()
{
    int j = 10;
    for (int i = 0; i < 5; i++)
    {
        int j = 10;
        j--;
        printf("%d", j);
    }
    printf("\n%d", j);
    return 0;
}