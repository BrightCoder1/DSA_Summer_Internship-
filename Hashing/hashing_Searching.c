#include <STDIO.H>

int main()
{
    int hash[10] = {0};
    int val[5] = {10, 12, 14, 16, 19};

    int index;
    for (int i = 0; i < 5; i++)
    {
        int key = val[i];
        index = key % 10;
        hash[index] = key;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", hash[i]);
    }

    // Searching in hashtable
    int n;
    printf("\nEnter the Number with you want to search: ");
    scanf("%d", &n);

    int searchKey = n % 10;
    if (hash[searchKey] == n)
    {
        printf("\nElement is found: ");
    }
    else
    {
        printf("\nElement is not found.");
    }

    return 0;
}