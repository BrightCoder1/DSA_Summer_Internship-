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
    f->address = NULL;
    printf("Enter the First value: ");
    scanf("%d", &f->data);
    temp = f;
    int n = 0;
    printf("\nEnter the number of nodes");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        l = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the value: ");
        l->address = NULL;
        scanf("%d", &l->data);
        temp->address = l;
        temp = l;
    }
    temp = f;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->address;
    }

    // Insert at beg
    struct node *z;
    z = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the node that add first: ");
    scanf("%d", &z->data);
    z->address = f;
    f = z;
    temp = f;

    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->address;
    }

    // insert at end
    struct node *y;
    y = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the Last Element Insert: ");
    scanf("%d", &y->data);
    y->address = NULL;

    l->address = y;
    l = y;
    temp = f;

    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->address;
    }

    // delete at first
    temp = f;
    f = f->address;
    temp->address = NULL;
    free(temp);
    printf("\nAfter Delete the first node:\n");
    temp = f;
    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->address;
    }
}