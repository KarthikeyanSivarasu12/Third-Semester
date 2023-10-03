//Insert n nodes at the beginning of the linked 
//list using insert at the beginning function
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *getnode(int data)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->next=NULL;
    return p;
}


struct node *insertatbeg(struct node *head,int data)
{
    struct node *p;
    p=getnode(data);
    p->next=head;
    head=p;
    return head;
}

    void display(struct node *p)
    {
        struct node *start1;
        start1=p;
        while(start1!=NULL)
        {
            printf("%d\n",start1->data);
            start1=start1->next;
        }
    }

int main()
{
    struct node *a1,*a2;
    a1=getnode(15);
    a2=getnode(20);
    a1->next=a2;
    a2->next=NULL;
    
    struct node *head=NULL;
    int n,data;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&data);
        head=insertatbeg(head,data);
    }
    
    display(head);
    display(a1);

    return 0;
}
