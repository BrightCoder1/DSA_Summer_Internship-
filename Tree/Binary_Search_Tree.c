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
    return 0;
}