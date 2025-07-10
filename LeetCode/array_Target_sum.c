#include <STDIO.H>
int main()
{
    int arr[] = {3, 2, 5, 1, 8};
    int target = 5;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum = arr[i] + arr[j];
            if (sum == target)
            {
                printf(" %d %d \n", i, j);
            }
        }
    }

    return 0;
}