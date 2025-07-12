#include <STDIO.H>

int main()
{
    int hashTable[10] = {0};
    int val[5] = {12, 13, 14, 16, 22};
    int index;
    for (int i = 0; i < 5; i++)
    {
        int key = val[i];
        index = key % 10;
        while (hashTable[index] != 0)
        {
            index = (index + 1) % 10;
        }

        hashTable[index] = key;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", hashTable[i]);
    }

    // Searching in hashtable
    int n;
    printf("\nEnter the Number with you want to search: ");
    scanf("%d", &n);
    int flg = 0;
    index = n % 10;
    int start = n;

    while (hashTable[index] != 0)
    {
        if (hashTable[index] == n)
        {
            // printf("Element is found.");
            flg = 1;
            break;
        }
        index = (index + 1) % 10;
        if (start == index)
        {
            break;
        }
    }

    if (flg == 1)
    {
        printf("Element is found.");
    }
    else
    {
        printf("Element is not found.");
    }
    return 0;
}