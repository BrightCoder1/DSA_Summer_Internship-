#include <STDIO.H>
int main()
{
    int arr[5] = {10, 20, 15, 8, 3};
    int match = 35;
    int sum = 0;
    int found = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum = arr[i] + arr[j];
            if (sum == match && i != j)
            {
                printf("Sum is found: %d + %d = %d", arr[i], arr[j], match);
                found = 1;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
    if (!found)
    {
        printf("No such pair found.\n");
    }
    return 0;
}