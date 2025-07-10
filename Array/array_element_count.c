#include <STDIO.H>

int main()
{
    int arr[] = {-3, 0, 2, -1, 5, 0, 4};
    int zero = 0;
    int positive = 0;
    int negative = 0;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] > 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }

    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zero: %d\n", zero);

    return 0;
}