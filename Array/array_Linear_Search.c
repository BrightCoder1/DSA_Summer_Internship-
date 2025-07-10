#include <STDIO.H>
int main()
{
    int arr[] = {10, 20, 30, 40, 20};

    int elm = 20;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 20)
        {
            printf("Element is found: (index)->%d \n \n", i);
        }
    }

    return 0;
}