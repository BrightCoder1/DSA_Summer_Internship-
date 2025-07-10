#include <STDIO.H>
void PUSH(int stack[], int *top, int max)
{
    if (*top == max - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        (*top)++;
        printf("Enter the value:");
        scanf("%d", &stack[*top]);
    }
}

void POP(int stack[], int *top)
{
    if (*top == -1)
    {
        printf("Stack is empty.");
    }
    else
    {
        printf("\nElement delete: %d", *top);
        (*top)--;
    }
}
void SHOW(int stack[], int *top)
{
    if (*top == -1)
    {
        printf("\nStack is empty:");
    }
    else
    {
        for (int i = *top; i >= 0; i--)
        {
            printf("%d \n", stack[i]);
        }
    }
}

int main()
{
    int ch;
    int top = -1;
    int x = 1;
    int max = 5;
    int stack[max];

    while (x == 1)
    {
        printf("PRESS NUMBER FOR OPERATION  \n1.PUSH\n2.POP \n3.PRINT");

        printf("\nEnter the Chance:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            PUSH(stack, &top, max);
            break;
        case 2:
            POP(stack, &top);
            break;
        case 3:
            SHOW(stack, &top);
            break;
        default:
            printf("Invalid choice. Please enter a valid choice.\n");
        }

        printf("Loop Run again then enter 1:");
        scanf("%d", &x);
    }

    return 0;
}