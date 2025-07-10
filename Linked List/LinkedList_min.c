#include <STDIO.H>
#include <STDLIB.H>

struct node
{
    int data;
    struct node *address;
};

int main()
{
    struct node *f, *l, *temp;
    f = (struct node *)malloc(sizeof(struct node));
    printf("Enter first value: ");
    scanf("%d", &f->data);
    f->address = NULL;
    temp = f;

    int n = 0;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        l = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value: ");
        scanf("%d", &l->data);
        l->address = NULL;
        temp->address = l;
        temp = l;
    }

    temp = f;
    int min = temp->data;
    // printf("%d", min);

    while (temp != NULL)
    {
        // printf(" ->%d ", temp->data);
        if (min > temp->data)
        {
            min = temp->data;
        }
        temp = temp->address;
    }

    printf("Min: %d", min);

    return 0;
}