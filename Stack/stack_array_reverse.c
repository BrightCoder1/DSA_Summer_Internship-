#include <STDIO.H>
int main()
{
    int arr[5];
    int top = -1;
    int x = 1;
    int stap;

    while (x == 1)
    {
        printf("Enter the stap:\n1: insertion,\n2: show");
        scanf("%d", &stap);
        if (stap == 1)
        {
            if (top == 5)
            {
                printf("\nStack is full.\n");
            }
            else
            {
                printf("\nEnter the value:\n ");
                scanf("%d", &arr[++top]);
            }
            printf("\nEnter number 1 for continue: \n");
            scanf("%d", &x);
        }
        else if (stap == 2)
        {
            if (top == -1)
            {
                printf("\nStack is empty\n");
            }
            else if (stap == 2)
            {
                if (top == -1)
                {
                    printf("Stack is empty.\n");
                }
                else
                {
                    printf("Stack elements (reversed):\n");
                    for (int i = top; i >= 0; i--)
                    {
                        printf("%d\n", arr[i]);
                    }
                }
            }
        }
    }

    return 0;
}