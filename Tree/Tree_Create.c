// type of travers the tree:
//          PreOrder: Root, Left, Right
//          InOreder: Left, Root, Right
//          PostOrder: left, Right, Root

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

// PreOrder: Root, Left, Right
void preorder(struct node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    printf("%d ", temp->data);
    preorder(temp->left);
    preorder(temp->right);
}

// InOrder: Left, Root, Right
void inOrder(struct node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    inOrder(temp->left);
    printf("%d ", temp->data);
    inOrder(temp->right);
}

// PostOrder: Left, Right, Data
void postOrder(struct node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    postOrder(temp->left);
    postOrder(temp->right);
    printf("%d ", temp->data);
}

int main()
{
    struct node *root;
    root = NULL;
    root = create();
    printf("\nPrint PreOrder.");
    preorder(root);
    printf("\nPrint InOrder.");
    inOrder(root);
    printf("\nPrint Post Order.");
    postOrder(root);

    return 0;
}