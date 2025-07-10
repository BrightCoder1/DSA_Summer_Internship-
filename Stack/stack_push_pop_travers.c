#include <STDIO.H>
int main()
{
    int ch;
    int top = -1;
    int x = 1;
    int max = 5;
    int stack[5];

    while (x == 1)
    {
        printf("PRESS NUMBER FOR OPERATION  \n1.PUSH\n2.POP \n3.PRINT");

        printf("\nEnter the Chance:");
        scanf("%d", &ch);
        if (ch == 1)
        {
            if (top == max - 1)
            {
                printf("Stack is full.");
            }
            else
            {
                top++;
                printf("Enter the Value:");
                scanf("%d", &stack[top]);
            }
        }
        else if (ch == 2)
        {
            // pop
            if (top == -1)
            {
                printf("Stack is empty.");
            }
            else
            {
                printf("Element delete: %d", top);
                top--;
            }
        }
        else if (ch == 3)
        {
            if (ch == -1)
            {
                printf("Stack is empty.");
            }
            else
            {
                for (int i = top; i >= 0; i--)
                {
                    printf("%d \n", stack[i]);
                }
            }
        }
        else
        {
            printf("You enter wrong input.");
        }

        printf("Enter 1 if continue:");
        scanf("%d", &x);
    }

    return 0;
}