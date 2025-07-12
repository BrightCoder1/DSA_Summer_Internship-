// The conditions for deletion in a Binary Search Tree (BST) are:

// Node to be deleted is a leaf (no children):

// Simply remove the node.
// Node to be deleted has one child:

// Remove the node and replace it with its child.
// Node to be deleted has two children:

// Find the node’s inorder successor (smallest value in the right subtree) or inorder predecessor (largest value in the left subtree).
// Replace the node’s value with the successor’s (or predecessor’s) value.
// Delete the successor (or predecessor) node, which will now have at most one child.

#include <STDIO.H>
#include <STDLIB.H>

struct node
{
    int data;
    struct node *left, *right;
};

int main()
{
    return 0;
}