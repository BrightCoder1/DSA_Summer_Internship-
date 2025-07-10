#include <stdio.h>

void PUSH(int stack[], int *top, int max)
{
    if (*top == max - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        (*top)++;
        printf("Enter the value: ");
        scanf("%d", &stack[*top]);
    }
}

void SHOW(int stack[], int top)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements (top to bottom):\n");
        int max = stack[0];
        for (int i = top; i >= 0; i--)
        {
            if (stack[i] > max)
            {
                max = stack[i];
            }
        }
        printf("Max number: %d\n", max);
    }
}

int main()
{
    int stack[5];
    int top = -1;
    int choice;
    int running = 1;

    while (running)
    {
        printf("\n1. Push\n2. Show\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            PUSH(stack, &top, 5);
            break;
        case 2:
            SHOW(stack, top);
            break;
        case 3:
            running = 0;
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
