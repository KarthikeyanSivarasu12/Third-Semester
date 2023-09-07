//Create a node

struct node
{
    int data;
    struct node *next;

}

//so we have create a node which has 1 data and 1 pointer
//linked list is alist of elements and those elements are represented by nodes
//so we have to create a node
//we have to create a function to create a node

//Allocate memory for a node
int main(void)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    //This node is empty and it doesnt have any data
    //malloc is a function which is used to allocate memory
    //p is a pointer variable which points to a structure of type struct node
    //malloc returns a void pointer so we have to typecast it to struct node
    //malloc returns the address of the node
    //malloc allocates memory in heap
    //malloc allocates memory in heap and returns the address of the memory


    //create a function called get node
    struct node *getnode(int data)
    {
        struct node *p1;
        p=(struct node *)malloc(sizeof(struct node));
        p->data=data;
        p->next=NULL;
        //p1 is a pointer variable which points to a structure of type struct node
        //here ny p->data we are accessing the data of the node
        //here by p->next we are accessing the address of the next node
        //here we are intialising the address of next node to null  
        return p1;

    }

    //create 2 nodes in main function
    int main(void)
    {
        struct node *p1,*p2;
        p1=getnode(1);
        p2=getnode(13);
        //both nodes doesnt have address of next node
        //p1 has an data part which stores 1 and address of next node is null
        //p2 has an data part which stores 13 and address of next node is null

        struct node *p3;
        p3=getnode(5);
        //draw the p3 node
        printf(p1->data);
        printf(p1->next);
        printf(p2->data);
        printf(p2->next);
        printf(p3->data);
        printf(p3->next);
    }

    //Program to create a start pointer
    
    struct node *start;
    p1=start;
    //write a function called display which takes start pointer as argument and prints the linked list

    void display(struct node *start)
    {
        struct node *p2;

        while(p2!=NULL)
        {
           
        }
    }      

//we can also have 
//start->next->next->data

//this gives us the value which by first accessing the address pointed by start
//and then we find that that points to address of the next node 


//#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *getnode(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node)); // Create a new node
    p->data = data;
    p->next = NULL;

    return p;
}

int main(void)
{
    struct node *p1, *p2, *p3;
    p1 = getnode(1);
    p2 = getnode(13);
    p3 = getnode(5);
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;

    struct node *start;
    start = p1;

    // Print the values of the linked list
    printf("Linked List Values:\n");
    while (start != NULL)
    {
        printf("%d -> ", start->data);
        start = start->next;
    }
    printf("NULL\n");

    return 0;
}





}
