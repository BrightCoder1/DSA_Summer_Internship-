#include<STDIO.H>
#include<STDLIB.H>

struct node
{
    int data;
    struct node *addr;
};


void main()
{
    struct node *f, *l, *temp;
    f = (struct node *)malloc(sizeof(struct node));
    printf("Enter first value:");
    scanf("%d", &f->data);
    f->addr = NULL;
    temp = f;
    int n = 0;
    printf("Enter number of nodes:");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        l = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value");
        scanf("%d", &l->data);
        l->addr = NULL;
        temp->addr = l;
        temp = l;
    }
    temp = f;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->addr;
    }

    // insertion at beg
    struct node *z;
    z = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value of first node:");
    scanf("%d", &z->data);
    z->addr = NULL;

    z->addr = f;
    f = z;

    temp = f;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->addr;
    }

    // @ last

    z = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value of last node:");
    scanf("%d", &z->data);
    z->addr = NULL;

    l->addr = z;
    l = z;

    temp = f;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->addr;
    }

    // insert in b/t 2 nodes
    struct node *x;
    temp = f;
    while (temp != NULL)
    {
        if (temp->data != 3)
        {
            x = temp;
            temp = temp->addr;
        }
        else
        {
            break;
        }
    }

    z = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value of node:");
    scanf("%d", &z->data);
    z->addr = NULL;

    x->addr = z;
    z->addr = temp;

    temp = f;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->addr;
    }

    // Deleting first node
    temp = f;
    f = f->addr;
    temp->addr = NULL;
    free(temp);
    printf("\nAfter deletion of first node:\n");
    temp = f;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->addr;
    }

    // Deletion from mid
    printf("\nEnter the data of node to be deleted:");
    scanf("%d", &n);
    temp = f;
    while (temp != NULL)
    {
        if (temp->data != n)
        {
            x = temp;
            temp = temp->addr;
        }
        else
        {
            x->addr = temp->addr;
            temp->addr = NULL;
            free(temp);
            break;
        }
    }

    printf("\nAfter deletion of %d node:\n", n);
    temp = f;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->addr;
    }

    // deletion of last node
    temp = f;
    while (temp->addr != NULL)
    {
        x = temp;
        temp = temp->addr;
    }
    l = x;
    l->addr = NULL;
    free(temp);

    printf("\nAfter deletion of last node:\n");
    temp = f;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->addr;
    }
}