#include <STDIO.H>
#include <STDLIB.H>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};


struct node* insert(struct node* head, int n) {
    struct node *temp = head, *l;
    for (int i = 1; i < n; i++) {
        l = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value: ");
        scanf("%d", &l->data);
        l->next = NULL;
        l->prev = temp;
        temp->next = l;
        temp = l;
    }
    return head;
}

struct node* insertAtBeg(struct node* head) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value to insert at beginning: ");
    scanf("%d", &newNode->data);
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    return newNode;
}

struct node* deleteEnd(struct node* head) {
    if (head == NULL) return NULL;
    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    if (temp->prev != NULL) {
        temp->prev->next = NULL;
    } else {
        head = NULL;
    }
    free(temp);
    return head;
}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->next = NULL;
    head->prev = NULL;
    printf("Enter first value: ");
    scanf("%d", &head->data);

    int n = 0;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    head = insert(head, n);

    printf("List: ");
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    head = insertAtBeg(head);
    printf("List after insertion at beginning: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    head = deleteEnd(head);
    printf("List after deleting from end: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    temp = head;
    struct node *next;
    while (temp != NULL) {
        next = temp->next;
        free(temp);
        temp = next;
    }
    return 0;
}