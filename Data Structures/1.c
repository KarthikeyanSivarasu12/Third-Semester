//Delete the starting node of a linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *getnode(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = NULL;
    return p;

}
int main()
{
    struct node *p2;
    p2 = getnode(15);
    struct node *p3;
    p3 = getnode(20);
    p2->next = p3;
    p3->next = NULL;

    struct node *start;
    struct node *temp;

    start=p2;
    start=start->next;
    



   
}
