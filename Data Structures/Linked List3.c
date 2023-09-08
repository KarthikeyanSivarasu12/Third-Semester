//Creating n nodes where each node is inserted at the beginning 
//of the linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node *next;
};
 struct node *getnode(int data)
    {
        struct node *p1;
        p1=(struct node *)malloc(sizeof(struct node));
        p1->data=data;
        p1->next=NULL;
        return p1;

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


int main(void)
{   
    int n,m,a;
    struct node *current,*start;
    scanf("%d/n",&a);
    printf("Enter the data part for the node that start points to:");
    scanf("%d",&n);
    start=getnode(n);

    for(int i=0;i<a;i++)
    {
        printf("Enter the data part for the new node to be inserted");
        scanf("%d",&m);
        current=getnode(m);
        current->next=start;
        start=current;
        
    }

    display(start);



}