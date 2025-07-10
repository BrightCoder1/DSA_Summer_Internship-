#include <STDIO.H>
void factorail(int *n, int *result)
{
    *result = 1;

    for (int i = 1; i <= *n; i++)
    {
        *result *= i;
    }
    
}
int main()
{
    int n = 3;
    int result;
    factorail(&n, &result);
    printf("Factorial: %d", result);
    return 0;
}