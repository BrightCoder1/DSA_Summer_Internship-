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

    return 0;
}