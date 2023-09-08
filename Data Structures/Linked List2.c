//Insert n nodes where nodes are always inserted as first node 
//in the linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *getnode(int data)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->next=NULL;
}


int main()
{
    struct node *p1,*p2,*start;
    p1=(struct node *)malloc(sizeof(struct node));
    p2=(struct node *)malloc(sizeof(struct node));
    
    start=p1;
    p1=getnode(1);
    p2=getnode(2);

    p->next=p1;
    start=p2;


    while(start!=NULL)
    {
        printf("%d/n",start->data);
        start=
    }

}