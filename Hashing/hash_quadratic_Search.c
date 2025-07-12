#include <STDIO.H>

int main()
{
    int hashTable[7] = {0};
    int val[5] = {10, 20, 15, 7, 17};

    int index;

    for (int i = 0; i < 5; i++)
    {
        int key = val[i];
        index = key % 7;
        if (hashTable[index] == 0)
        {
            hashTable[index] = key;
        }
        else
        {
            int nextIndex = (index + i * i) % 7;
            hashTable[nextIndex] = key;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d \t", hashTable[i]);
    }
}
