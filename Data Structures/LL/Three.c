// DOUBLY LINKED LIST

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *previous;
};

struct node *getnode(int data)
{
    struct node *start;
    start = (struct node *)malloc(sizeof(struct node));
    start->data = data;
    start->next = NULL;
    start->previous = NULL;
    return start;
}

void display(struct node *start)
{
    struct node *p;
    p = start;
    int i = 1;
    while (p != NULL) // Change loop condition to traverse the list
    {
        printf("The data part of node %d is %d\n", i, p->data);
        printf("The node %d's points to next address %p\n", i, p->next);
        printf("The node %d's points to previous address %p\n", i, p->previous);

        p = p->next;
        i++;
    }
}

struct node *create_DLL(struct node *start, int n)
{
    struct node *p, *temp, *start1;
    p = start;
    start1 = start;
    int value;
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the data part of node %d: ", j);
        scanf("%d", &value);
        if (i == 0)
        {
            p = getnode(value);
            temp = p;
        }
        else
        {
            p = getnode(value);
            temp->next = p;
            p->previous = temp;
            temp = p;
        }
        j++;
    }

    return start1;
}

int main(void)
{
    struct node *a;
    a = NULL; // Initialize a to NULL
    int n;
    printf("Enter the number of nodes to be created: ");
    scanf("%d", &n);
    a = create_DLL(a, n);
    display(a);
    return 0;
}
