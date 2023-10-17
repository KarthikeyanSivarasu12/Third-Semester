//IMPLEMENTATION OF STACK USING LINKED LIST

struct stack
{
    int value;
    struct node *next;
};

struct stack *getnode(int data)
{
    struct stack *p;//p is a pointer which is of type struct node and points to a node which is of type struct node
    p=(struct stack *)malloc(sizeof(struct stack));
    p->value=data;
    p->next=NULL;
    return p;//here we return the address of the node which is of type struct node and is pointed by p
}

struct stack *push(struct stack *top,int data)
{
    struct stack *head,*newnode;
    int value1;
    value1=data;
    newnode=getnode(value1);
    if(top==NULL)
    {
        head=newnode;
    }
    else
    {
    head=top;
    newnode->next=head;
    head=newnode;
    }
    return head;

}


void display(struct stack *top)
{
    printf("The resultant stack is:")
    struct stack *currentnode;
    currentnode=top;
    if(currentnode==NULL)
    {
        Printf("Stack is empty:");
    }
    else
    {
        printf("%d",currentnode->data);
        currentnode=currentnode->next;
    }

}
struct stack *insert

int main(void)
{
    struct stack *top;
    *top=-1;
    int numberofnodes;
    printf("Enter the number of nodes to create:");
    scanf("%d",&numberofnodes);


}