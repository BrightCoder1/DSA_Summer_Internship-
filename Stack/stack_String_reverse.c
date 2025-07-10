#include <stdio.h>

void StringReverse(char str[])
{
    int i = 0;
    char stack[20];
    int top = -1;

    while (str[i] != '\0')
    {
        stack[++top] = str[i];
        i++;
    }

    while (top >= 0)
    {
        printf("%c", stack[top]);
        top--;
    }

    printf("\n");
}

int main()
{
    char str[] = "Hello";
    StringReverse(str);
    return 0;
}
