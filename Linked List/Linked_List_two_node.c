#include <STDIO.H>
#include <STDLIB.H>

// like map
struct node
{
    int data;
    struct node *address;
};

int main()
{
    struct node *f, *s;
    // varialbename = (structuredatatype*)malloc(sizeof(structuer));
    f = (struct node *)malloc(sizeof(struct node));
    f->data = 10;
    f->address = NULL; // if we do not send null in address for next node then it can store random value.

    s = (struct node *)malloc(sizeof(struct node));
    s->data = 20;

    f->address = s;
    s->address = NULL;

    printf("%d", f->data);
    printf("\n%d", s->data);

    return 0;
}