// CREATE A DOUBLY LINKED LIST AND DISPLAY IT

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *getnode(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void display(struct node *start)
{
    struct node *temp;
    temp = start;
    while(temp != NULL)
    {
        printf("The data part of the node is %d\n", temp->data);
        printf("The address of the next node is %p\n", temp->next);
        printf("The address of the previous node is %p\n", temp->prev);
        temp = temp->next;
    }

}

//INSERT AN ELEMENT AT THE BEGINNING OF THE DOUBLY LINKED LIST



struct node *insert_beg(struct node *start,int data)
{
    struct node *newnode;
    int value;
    value=data;
    newnode=getnode(value);
    if(start==NULL)
    {
        start=newnode;
        return start;
    }
    else
    {
        newnode->next=start;
        start->prev=newnode;
        start=newnode;
        return start;
    }

}

//INSERT AN ELEMENT AT THE END OF THE DOUBLY LINKED LIST

struct node *insert_end(struct node *start,int data)
{
    struct node *newnode,*p;
    p=start;
    int value;
    value=data;
    newnode=getnode(value);
    if(start==NULL)
    {
        start=newnode;
        return start;
    }
    else
    {
       while(p->next!=NULL)
       {
         p=p->next;
       }

       p->next=newnode;
       newnode->prev=p;
       return start;
    }
}

//INSERT N NODES AT THE BEGINNING OF THE DOUBLY LINKED LIST

struct node *insert_nbeg(struct node *start,int n)
{
    struct node *newstart;
    int value;
    for(int i=0;i<n;i++)
    {
           printf("Enter the value of the node\n");
           scanf("%d",&value);
           newstart=insert_beg(start,value);
           
    }
    return newstart;

}

//INSERT N NODES AT THE END OF THE DOUBLY LINKED LIST

struct node *insert_nend(struct node *start,int n)
{
    struct node *newstart;
    int value;
    for(int i=0;i<n;i++)
    {
           printf("Enter the value of the node\n");
           scanf("%d",&value);
           newstart=insert_end(start,value);
           
    }
    return newstart;

}

//NODECOUNT FUNCTION

int nodecount(struct node *start)
{
    struct node *p;
    p = start;
    int nodecount = 0; // Initialize nodecount to 0

    while (p != NULL)
    {
        nodecount++; // Increment nodecount for each node
        p = p->next;
    }

    return nodecount; // Return the final count
}



//INSERT N NODES BEFORE NODE X IN A DOUBLY LINKED LIST 

struct node *getnode_atx(struct node *start,int x)
{
    struct node *p;
    p=start;
    int count;
    count=nodecount(start);
    if(count<x)
    {
        printf("The node does not exist\n");
        return start;
    }
    else
    {
        for(int i=0;i<x;i++)
        {
            p=p->next;
        }
        return p;
    }


    
}

struct node *insert_nbeforex(struct node *start,int x,int n)
{
    struct node *p,*newstart,*q;
    p=start;
}