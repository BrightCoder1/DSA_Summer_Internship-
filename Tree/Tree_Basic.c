#include <STDIO.H>
#include <STDLIB.H>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *create()
{
    int x;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter a value: (enter -1 to input NULL)");
    scanf("%d", &x);

    if (x == -1)
    {
        return NULL;
    }

    temp->data = x;

    printf("\nEnter the left child of %d", x);
    temp->left = create();
    printf("\n");
    printf("\nEnter the right child of %d", x);
    temp->right = create();
}

int main()
{
    struct node *root;
    root = NULL;
    root = create();

    return 0;
}