#include <STDIO.H>
#include <STDLIB.H>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *create(int x)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = x;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node *insert(struct node *nn, int val)
{
    if (nn == NULL)
    {
        nn = create(val);
    }
    else if (val < nn->data)
    {
        nn->left = insert(nn->left, val);
    }
    else if (val >= nn->data)
    {
        nn->right = insert(nn->right, val);
    }

    return nn;
}

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

struct node *Searching(struct node *root, int element)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data == element)
    {
        return root;
    }
    else if (element < root->data)
    {
        return Searching(root->left, element);
    }
    else
    {
        return Searching(root->right, element);
    }
}

int main()
{
    struct node *root;
    root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);

    inorder(root);
    printf("\n");
    preOrder(root);
    printf("\n");
    postOrder(root);

    printf("\n");
    struct node *flg = Searching(root, 15);
    if (flg != NULL)
    {
        printf("\nNumber is found");
    }
    else
    {
        printf("\nNumber is not found");
    }
    return 0;
}