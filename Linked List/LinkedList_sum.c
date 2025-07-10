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

    int sum = 0;
    while (temp != NULL)
    {
        // printf(" ->%d ", temp->data);
        sum = temp->data + sum;
        temp = temp->address;
    }

    printf("Sum: %d", sum);
    return 0;
}