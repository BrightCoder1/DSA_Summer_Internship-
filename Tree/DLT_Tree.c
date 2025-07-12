#include <STDIO.H>
#include <STDLIB.H>

struct node
{
    int data;
    struct node *right, *left;
};

struct node *create(int x)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = x;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node *insert(struct node *newElm, int val)
{
    if (newElm == NULL)
    {
        newElm = create(val);
    }
    else if (val < newElm->data)
    {
        newElm->left = insert(newElm->left, val);
    }
    else if (val > newElm->data)
    {
        newElm->right = insert(newElm->right, val);
    }
    return newElm;
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

struct node *Searching(struct node *tree, int val)
{
    if (tree == NULL)
    {
        return NULL;
    }
    else if (tree->data == val)
    {
        return tree;
    }
    else if (val < tree->data)
    {
        return Searching(tree->left, val);
    }
    else if (val > tree->data)
    {
        return Searching(tree->right, val);
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
    struct node *check = Searching(root, 10);
    if (check != NULL)
    {
        printf("Element is found");
    }
    else
    {
        printf("Element is not found");
    }
}