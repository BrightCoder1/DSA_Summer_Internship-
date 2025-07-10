#include <STDIO.H>
#include <STDLIB.H>

struct node
{
    int data;
    struct node *address;
};
int main()
{
    struct node *f, *s, *c;
    f = (struct node *)malloc(sizeof(struct node));
    s = (struct node *)malloc(sizeof(struct node));
    c = (struct node *)malloc(sizeof(struct node));
    f->data = 10;
    s->data = 20;
    c->data = 30;

    f->address = s;
    s->address = c;
    c->address = NULL;

    printf("%d", f->data);
    printf("\n%d", s->data);
    printf("\n%d", c->data);

    return 0;
}