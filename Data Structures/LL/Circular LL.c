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
    start = (struct node *)malloc(sizeof(struct node));
    start->data = data;
    start->next = NULL;
    start->previous = NULL;
    return start;
}

void display(struct node *start)
{
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *p = start;
    do
    {
        printf("Data: %d, Next: %p, Previous: %p\n", p->data, p->next, p->previous);
        p = p->next;
    } while (p != start);

    // Handle the circular linkage for the first and last elements
    printf("Data at the first node: %d, Next: %p, Previous: %p\n", start->data, start->next, start->previous);
    printf("Data at the last node: %d, Next: %p, Previous: %p\n", p->data, p->next, p->previous);
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

    if (n > 1) {
        newNode->next = start;
        start->previous = newNode;
    }
    else if (n == 1) {
        start->next = start;
        start->previous = start;
    }

    return start;
}

int main(void)
{
    struct node *start = NULL;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    start = create_DLL(start, n);
    display(start);
    return 0;
}


// /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head)
{
    struct ListNode *b;
    b=head;
    int z,middle;
    z=nodecount(head);
    if(z==1)
    {
       middle=0;
       b=getnode_atx(head,0);
       free(b);
    }
    else
    {
        
    }

}

struct ListNode *getnode_atx(struct ListNode *start,int x)
{
    struct ListNode *p;
    p=start;
    if(x==0)
    {
        return p;
    }
    for(int i=0;i<x-1;i++)
    {
        if(x>1)
        {
        p=p->next;
        }
        else
        {
            
            break;
        }

    }
    return p;

}

int nodecount(struct ListNode *start)
{
    struct ListNode *a;
    a=start;
    int nodecount=1;
     if(p==NULL)
    {
        nodecount=0;
    }
    else
    {
     while((p->next)!=NULL)
     { 
       
        int nodecount++;
        p=p->next;

    }
    }

    return nodecount;


}