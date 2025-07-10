#include <STDIO.H>
int main()
{
    int arr[6] = {10, 11, 20, 15, 30};
    int pos = 2;
    int elm = 21;

    for (int i = 5; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elm;

    // print the element
    for (int i = 0; i < 6; i++)
    {
        printf("%d \t", arr[i]);
    }

    return 0;
}