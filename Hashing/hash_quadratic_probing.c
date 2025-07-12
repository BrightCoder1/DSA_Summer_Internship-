#include <STDIO.H>

int main()
{
    int hashTable[10] = {0};
    int val[5] = {10, 20, 15, 7, 17};
    int index;

    for (int i = 0; i < 5; i++)
    {
        int key = val[i];
        index = key % 10;
        if (hashTable[index] == 0)
        {
            hashTable[index] = key;
        }
        else
        {
            int nextIndex = (index + i * i) % 10;
            hashTable[nextIndex] = key;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", hashTable[i]);
    }

    return 0;
}