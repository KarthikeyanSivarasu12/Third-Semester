//Create a node



struct node
{
    int date;
    struct node *next;
};

//Allocate memory for a node

int main(void)
{
 struct node *pointer;
 pointer=(struct node*)malloc(sizeof(struct node));//this creates an emptry node 
 //of type struct node and returns the address of the node

}

//create a function called get node
struct node *getnode(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));//creates an empty node
    p->data = data;
    p->next = NULL;

    return p;
}

//create 2 nodes in main function
int main(void)
{
    struct node *p, *q;
    p = getnode(1);
    q = getnode(13);//both nodes doesnt have address of next node
    //draw the diagram of node
    struct node *p3;
    p3 = getnode(5);
    
    //draw the p3 node
   printf(p1->data);
    printf(p1->next);
    printf(p2->data);
    printf(p2->next);
    printf(p3->data);
    printf(p3->next);
}

// p1 has the value 1 and address of next node is null
// p2 has the value 13 and address of next node is null
// p3 has the value 5 and address of next node is null

// to intialise the address of next node
// p1->next = p2;
// p2->next = p3;
// p3->next = NULL;
//we have created a single linked list
//but a start pointer is required to access the linked list
//start pointer is a pointer which points to the first node of the linked list
//program to create a start pointer

struct node *start;
start = p1;

//write a function called display which takes start pointer as argument and prints the linked list
void display(struct node *start)
{
    struct node *p;
    p = start;
    while(p != NULL)
    {
        printf("%d", p->data);
        p = p->next;
    }
}
//when we come to display we dont know about p1,p2 or p3 .
//we only know about start pointer

//we can also have 
//start->next->next->data
//if we use a temporary variable to print the data
//we can use a temporary variable to print the data
void display(struct node *start)
{
    struct node *p;
    p = start;
    while(p != NULL)
    {
        printf("%d", p->data);
        p = p->next;
    }
}
