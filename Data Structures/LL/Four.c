//DOUBLY LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *previous;
}

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
    p=start;
    temp=start;
    while(p!=NULL)
    {
        
        p=p->next;
    }
}

struct node *create_DLL(struct node *start,int n)
{
    struct node *p,*temp;
    p=start;
    int value;
    for(int i=0;i<n;i++)
    {
        printf("Enter the value");
        scanf("%d",&value);
        if(i==0)
        {
            p=getnode(value);
            temp=p;
        }
        else
        {
            p=getnode(value);
            p->previous=temp;
            temp=p;

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