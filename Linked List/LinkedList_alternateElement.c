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

    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            printf(" ->%d ", temp->data);
        }
        temp = temp->address;
    }

    return 0;
}