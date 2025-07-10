#include <STDIO.H>
#include <STDLIB.H>

struct node
{
    int data;
    struct node *address;
};
int main()
{
    struct node *f, *s, *c, *temp;
    f = (struct node *)malloc(sizeof(struct node));
    s = (struct node *)malloc(sizeof(struct node));
    c = (struct node *)malloc(sizeof(struct node));
    f->data = 10;
    f->address = NULL;
    s->data = 20;
    s->address = NULL;
    c->data = 30;
    c->address = NULL;
   

    f->address = s;
    s->address = c;
    c->address = NULL;

    temp = f;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->address;
    }

    return 0;
}