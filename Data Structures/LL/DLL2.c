// CREATE A DOUBLY LINKED LIST AND DISPLAY IT

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *getnode(int data);
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

struct node *insert_beg(struct node *start, int data)
{
    struct node *newnode;
    newnode = getnode(data);
    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        newnode->next = start;
        start->prev = newnode;
        start = newnode;
    }
    return start;
}

//INSERT AN ELEMENT AT THE END OF THE DOUBLY LINKED LIST

struct node *insert_end(struct node *start, int data)
{
    struct node *newnode, *temp;
    newnode = getnode(data);
    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        temp = start;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    return start;
}

//INSERT N ELEMENTS AT THE BEGINNING OF THE DOUBLY LINKED LIST

struct node *insert_nbeg(struct node *start, int n)
{
    int i, data;
    for(i = 0; i < n; i++)
    {
        printf("Enter the data to be inserted\n");
        scanf("%d", &data);
        start = insert_beg(start, data);
    }
    return start;
}

//INSERT N ELEMENTS AT THE END OF THE DOUBLY LINKED LIST

struct node *insert_nend(struct node *start, int n)
{
    int i, data;
    for(i = 0; i < n; i++)
    {
        printf("Enter the data to be inserted\n");
        scanf("%d", &data);
        start = insert_end(start, data);
    }
    return start;
}


//INSERT N NODES AFTER NODE X

//First we need to find the node after which we need to insert the new nodes
//using a function find_node at xth position

struct node *find_node(struct node *start, int x)
{
    struct node *temp;
    temp = start;
    int i;
    for(i = 0; i < x; i++)//here we assume the first node to be at position 0
    {
        temp = temp->next;
    }
    return temp;
}

//now we can use the insert n nodes ant the end function to insert n nodes after node x
struct node *insert_nafter(struct node *start, int n, int x)
{
    struct node *temp,*after,*start2;
    temp = find_node(start, x);
    start2=insert_nend(temp, n);//insert n nodes at the end of the node x.here  
    //insert_n functions returns the pointer to temp node
    //now we need to change the links of the nodes


    after=find_node(start2, n);//here start=2 is the node before the start of the new nodes
    after->next=temp->next;
    temp->next->prev=after;
    temp->next=start2;
    start2->prev=temp;
    return start;


}