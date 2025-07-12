#include <STDIO.H>
#include <STDLIB.H>

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Array Element: ");
        scanf("%d", &arr[i]);
    }
    int stack[5];
    int top = -1;
    for (int j = 0; j < 5; j++)
    {
        top++;
        stack[top] == arr[j];
        if (stack[top] < arr[j + 1])
        {
            stack[top] == arr[j + 1];
        }
    }

    printf("%d ", stack[top]);

    return 0;
}