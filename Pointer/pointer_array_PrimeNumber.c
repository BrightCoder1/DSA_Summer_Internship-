#include <stdio.h>

int isPrime(int *n)
{
    if (*n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < *n; i++)
    {
        if (*n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int arr[] = {3, 5, 4, 7, 10};
    int allPrime = 1;
    int *ptr = arr; // Pointer to the array

    for (int i = 0; i < 5; i++)
    {
        if (!isPrime(ptr + i))
        {
            allPrime = 0;
            break;
        }
    }

    if (allPrime)
    {
        printf("All elements are prime numbers.\n");
    }
    else
    {
        printf("Not all elements are prime numbers.\n");
    }

    return 0;
}
