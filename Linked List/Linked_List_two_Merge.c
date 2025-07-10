#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *addr;
};
void main()
{
    struct node *f, *l, *temp1;
    struct node *s, *m, *temp2;
    int n1, n2;
    printf("Enter number of nodes for first list: ");
    scanf("%d",&n1);
    f=(struct node*)malloc(sizeof(struct node));
    printf("Enter first value for first list: ");
    scanf("%d", &f->data);
    f->addr=NULL;
    temp1=f;
    for(int i=1;i<n1;i++)
    {
        l=(struct node*)malloc(sizeof(struct node));
        printf("Enter value for first list: ");
        scanf("%d",&l->data);
        l->addr=NULL;
        temp1->addr=l;
        temp1=l;
    }
    printf("Enter number of nodes for second list: ");
    scanf("%d",&n2);
    s=(struct node*)malloc(sizeof(struct node));
    printf("Enter first value for second list: ");
    scanf("%d",&s->data);
    s->addr=NULL;
    temp2=s;
    for(int i=1;i<n2;i++)
    {
        m=(struct node*)malloc(sizeof(struct node));
        printf("Enter value for second list: ");
        scanf("%d", &m->data);
        m->addr=NULL;
        temp2->addr=m;
        temp2=m;
    }
    temp1=f;
    while(temp1->addr!=NULL)
    {
        temp1=temp1->addr;
    }
    temp1->addr=s;
    temp1=f;
    while(temp1!= NULL)
    {
        printf("%d ",temp1->data);
        temp1=temp1->addr;
    }
}
