//CREATE A DOUBLE LINKED LIST AND DISPLAY IT
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* getnode(int data) {
    struct node* p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = data;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

struct node* insertn_fromend(struct node* start, int n) {
    struct node *p, *temp, *newNode;
    p = start;
    int value;
    for (int i = 0; i < n; i++) {
        printf("Enter the data part for the node: ");
        scanf("%d", &value);
        newNode = getnode(value);
        if (p == NULL) {
            start = newNode;
            p = start;
        } else {
            p->next = newNode;
            newNode->prev = p;
            p = newNode;
        }
    }
    return start;
}

void display(struct node* start) {
    struct node* p;
    p = start;
    while (p != NULL) {
        printf("Data: %d, Next: %p, Previous: %p\n", p->data, p->next, p->prev);
        p = p->next;
    }
    printf("\n");
}

int main() {
    struct node* start = NULL;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    start = insertn_fromend(start, n);
    display(start);
    return 0;
}

//INSERT A NODE AT THE BEGINNING OF A DOUBLE LINKED LIST


struct node *insertatbeg(struct node *start,int data)
{
  struct node *p;
  p=start;
  struct node *newNode;
  newNode=getnode(data);
    if(p==NULL)
    {
        start=newNode;
        p=start;
    }
    else
    {
        newNode->next=p;
        p->prev=newNode;
        start=newNode;
    }
    return start;


}


//INSERT A NODE AT THE END OF A DOUBLE LINKED LIST

struct node *insertatlast(struct node *start, int data)
{
    struct node *p, *temp, *newNode;
    newNode = getnode(data);

    if (start == NULL)
    {
        // If the list is empty, make the new node the start.
        start = newNode;
    }
    else
    {
        p = start;
        temp = NULL;

        while (p->next != NULL)
        {
            temp = p;
            p = p->next;
        }

        p->next = newNode;
        newNode->prev = p;
    }

    return start;
}

//
