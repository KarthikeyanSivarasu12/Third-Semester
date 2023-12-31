//DOUBLY LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *previous;
};

struct node *getnode(int data)
{
    struct node *start;
    start=(struct node *)malloc(sizeof(struct node));
    start->data=data;
    start->next=NULL;
    start->previous=NULL;
    return start;

}

void display(struct node *start)
{
    struct node *p;
    p = start;
    while (p != NULL)
    {
        printf("Data: %d, Next: %p, Previous: %p\n", p->data, p->next, p->previous);
        p = p->next;
    }
    printf("\n");
}

struct node *create_DLL(struct node *start, int n)
{
    struct node *p, *temp, *newNode;
    p = start; // Use p for iteration, but keep start pointing to the beginning
    int value;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the data part for the node: ");
        scanf("%d", &value);
        newNode = getnode(value);

        if (i == 0)
        {
            start = newNode; // Update the start to point to the first node
            temp = start;
        }
        else
        {
            temp->next = newNode;
            newNode->previous = temp;
            temp = newNode;
        }
    }
    return start;
}


int main(void)
{
    struct node *start;
    int n;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    start=create_DLL(start,n);
    display(start);
    return 0;
}