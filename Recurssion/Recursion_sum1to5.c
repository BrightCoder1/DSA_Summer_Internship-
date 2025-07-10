#include <STDIO.H>
int show(int n)
{
    static int sum = 0;
    if (n > 0)
    {
        show(n - 1);
        sum = sum + n;
        printf("%d \t", n);
    }

    
    if(n == 0){
        return 0;
    }else{
        return sum;
    }
}
int main()
{
    int sum = show(5);
    printf("\n%d", sum);

    return 0;
}