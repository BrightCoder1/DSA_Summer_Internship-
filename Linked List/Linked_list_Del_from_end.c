#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *addr;
};

struct node *insert_at_beg(struct node *h)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory not available");
    }
    else
    {
        printf("Enter a value");
        scanf("%d", &temp->data);
        temp->addr = NULL;
        temp->addr = h;
        h = temp;
    }
    return h;
}

void display(struct node *t)
{
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->addr;
    }
}

struct node *insert_at_end(struct node *h)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("memory not available");
    }
    else if (h == NULL)
    {
        printf("Enter a value");
        scanf("%d", &temp->data);
        temp->addr = NULL;
        h = temp;
    }
    else
    {
        printf("Enter a value");
        scanf("%d", &temp->data);
        temp->addr = NULL;
        struct node *p1;
        p1 = h;
        while (p1->addr != NULL)
        {
            p1 = p1->addr;
        }
        p1->addr = temp;
        p1 = temp;
    }
    return h;
}

struct node *del_from_beg(struct node *h)
{
    struct node *t;
    if (h == NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        printf("Deleted node is:%d", h->data);
        t = h;
        h = h->addr;
        t->addr = NULL;
        free(t);
    }
    return h;
}

struct node *del_from_end(struct node *h)
{
    if (h == NULL)
    {
        printf("\nLinked list is Empty");
    }
    else if (h->addr == NULL)
    {
        printf("The deleted node is %d", h->data);
        free(h);
        h = NULL;
    }
    else
    {
        struct node *t, *x;
        t = h;
        while (t->addr != NULL)
        {
            x = t;
            t = t->addr;
        }
        printf("Deleted node is %d", t->data);
        x->addr = NULL;
        free(t);
    }
    return (h);
};

void main()
{
    struct node *head;
    head = NULL;
    head = insert_at_end(head);
    head = insert_at_end(head);
    head = insert_at_end(head);
    head = insert_at_end(head);
    head = insert_at_beg(head);
    head = del_from_beg(head);
    display(head);
}