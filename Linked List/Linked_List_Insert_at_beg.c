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

    printf("Enter the first value: ");
    scanf("%d", &f->data);

    f->address = NULL;

    temp = f;

    int n = 0;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        l = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value");
        scanf("%d", &l->data);
        l->address = NULL;
        temp->address = l;
        temp = l;
    }
    temp = f;

    while (temp != NULL)
    {
        printf("%d \n", temp->data);
        temp = temp->address;
    }

    // Insert at beg
    struct node *z;
    z = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter the value of first node: ");
    scanf("%d", &z->data);
    z->address = NULL;
    z->address = f;
    f = z;

    // print statement 
    temp = f;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->address;
    }
    
    return 0;
}