#include <STDIO.H>
int main()
{
    int arr[5];
    int top = -1;
    int x = 1;
    int chance;

    while (x == 1)
    {
        printf("\nEnter the chance:\n1: Push\n2: Pop\n3: Display: ");
        scanf("%d", &chance);

        if (chance == 1)
        {
            if (top == 5)
            {
                printf("\nStack is full!");
            }
            else
            {
                printf("\nEnter the value: ");
                scanf("%d", &arr[++top]);
            }
            printf("\n Enter the 1 for continue: \n");
            scanf("%d", &x);
        }
        else if (chance == 2)
        {
            if (top == -1)
            {
                printf("\nStack is empty:");
            }
            else
            {
                printf("Element is delete: %d", arr[top]);
                top--;
            }
        }
        else if (chance == 3)
        {
            if (top == -1)
            {
                printf("\nStack is empty: ");
            }
            else
            {
                for (int i = top; i >= 0; i--)
                {
                    printf("%d \n", arr[i]);
                }
            }
        }
    }
    return 0;
}