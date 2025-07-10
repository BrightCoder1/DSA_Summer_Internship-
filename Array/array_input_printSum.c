#include <STDIO.H>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element:\n");
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    
    for (int j = 0; j < 5; j++)
    {
        printf("%d \t", arr[j]);
        sum = arr[j] + sum;
    }

    printf("\n Sum: %d", sum);
    return 0;
}