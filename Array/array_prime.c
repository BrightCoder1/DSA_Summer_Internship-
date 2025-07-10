#include <stdio.h>

int main()
{
    int arr[] = {2, 3, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int isAllPrime = 1; 

    for (int i = 0; i < size; i++)
    {
        int isPrime = 1; 
        if (arr[i] <= 1)
        {
            isPrime = 0;
        }
        else
        {
            for (int j = 2; j <= arr[i] / 2; j++)
            {
                if (arr[i] % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime == 0)
        {
            isAllPrime = 0;
            break;
        }
    }

    if (isAllPrime == 1)
    {
        printf("All elements are prime numbers.\n");
    }
    else
    {
        printf("All elements are not prime numbers.\n");
    }

    return 0;
}
