#include <STDIO.H>
int main()
{
    int arr[] = {10, 20, 5, 8, 15};

    for (int i = 0; i < 5; i++)
    {
        int sum = arr[i] + arr[i + 1];
        printf("%d\n",sum);
    }
    return 0;
}