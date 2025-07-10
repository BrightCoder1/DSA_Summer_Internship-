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
    int target;
    printf("Enter the target Number: ");
    scanf("%d", &target);
    int flg = 0;

    while (temp != NULL)
    {
        if (target == temp->data)
        {
            flg = 1;
            break;
        }
        temp = temp->address;
    }

    if (flg == 1)
    {
        printf("Element is found.");
    }
    else
    {
        printf("Element is not found.");
    }

    return 0;
}