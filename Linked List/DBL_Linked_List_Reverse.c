#include <STDIO.H>
#include <STDLIB.H>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{
    struct node *f, *l, *temp;
    f = (struct node *)malloc(sizeof(struct node));
    f->next = NULL;
    f->prev = NULL;
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
        l->next = NULL;
        l->prev = temp;
        temp->next = l;
        temp = l;
    }
    temp = f;
    printf("List: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}