#include <STDIO.H>
#include <STDLIB.H>

struct node
{
    int data;
    struct node *address;
};

int main()
{
    struct node *f;
    f = (struct node *)malloc(sizeof(struct node));
    f->data = 10;
    printf("%d", f->data);
    return 0;
}