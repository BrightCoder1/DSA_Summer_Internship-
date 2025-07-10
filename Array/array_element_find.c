#include <STDIO.H>
int main()
{
    int arr[] = {1, 2, 4, 5};
    int elm;
    int index;

    for (int j = 0; j < 4; j++)
    {
        int gap = arr[j + 1] - arr[j];
        if (gap != 1)
        {
            elm = arr[j] + 1;
            index = j + 1;
            break;
        }
    }
    printf("%d", elm);
    printf("\n%d", index);

    return 0;
}