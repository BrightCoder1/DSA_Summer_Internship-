#include <STDIO.H>
#include <STDLIB.H>

struct node
{
    int data;
    struct node *addr;
};

struct node *print_list(struct node *h)
{
    struct node *temp = h;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->addr;
    }
    printf("\n");
    return h;
}

struct node print_mid(struct node *h)
{
    struct node *s, *f;
    s = h;
    f = h->addr;
    while (f != NULL && f->addr != NULL)
    {
        s = s->addr;
        f = f->addr->addr;
    }
    printf("Middle element: %d\n", s->data);
    return *s;
}

int main()
{
    struct node *f, *l, *temp;
    f = (struct node *)malloc(sizeof(struct node));
    f->addr = NULL;
    printf("Enter first value: ");
    scanf("%d", &f->data);
    temp = f;
    int n = 0;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        l = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value: ");
        scanf("%d", &l->data);
        l->addr = NULL;
        temp->addr = l;
        temp = l;
    }
    f = print_list(f);
    printf("\n");

    printf("List after finding middle element:\n");
    print_mid(f);

    return 0;
}