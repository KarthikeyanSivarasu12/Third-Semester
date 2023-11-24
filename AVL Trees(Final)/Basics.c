//IMPLEMENTATION OF OPERATIONS ON AVL TREES USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node
{
    int data;
    int height;
    struct node *leftchild;
    struct node *rightchild;
};

//FUNCTION TO CREATE A NODE AND ALOCATE VALUES TO STRUCT NODE
struct node *getnode(int value)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->height=1;
    newnode->leftchild=NULL;
    newnode->rightchild=NULL;
    return newnode;
}

//FUNCTION TO INSERT A NODE IN BINARY SEARCH TREE
struct node *insertinBST(struct node *rootnode,int datatoinsert)
{
    struct node *newnode;
    newnode=getnode(datatoinsert);
    if(rootnode==NULL)
    {
        rootnode=newnode;
    }
    else
    {
        if(datatoinsert<(rootnode->data))
        {
             rootnode->leftchild=insertinBST(rootnode->leftchild,datatoinsert);
        }
        else if(datatoinsert>(rootnode->data))
        {
            rootnode->rightchild=insertinBST(rootnode->rightchild,datatoinsert);
        }
    }

    return rootnode;
}

//FUNCTION TO SEARCH FOR A NODE
struct node *search(struct node *rootnode,int datatosearch)
{
    
    if(rootnode==NULL || rootnode->data==datatosearch)
    {
        return rootnode;
    }
    else
    {
        if(datatosearch<(rootnode->data))
        {
             rootnode->leftchild=search(rootnode->leftchild,datatosearch);
        }
        else if(datatosearch>(rootnode->data))
        {
            rootnode->rightchild=search(rootnode->rightchild,datatosearch);
        }
    }

    return rootnode;
}
//FUNCTION TO FIND THE MAXIMUM OF TWO NUMBERS
int max(int a,int b)
{
    if(a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
//FUNCION TO FIND THE HEIGHT OF A NODE

int heightofnode(struct node *node)
{
    if(node==NULL)
    {
        return -1;
    }
    int leftheight,rightheight;

    leftheight=heightofnode(node->leftchild);
    rightheight=heightofnode(node->rightchild);

    return max(leftheight,rightheight)+1;

}

//FUNCTION TO CALCULATE THE BALANCE FACTOR OF A NODE

int balancefactorofnode(struct node *requirednode)
{
    if(requirednode==NULL || (requirednode->leftchild==NULL && requirednode->rightchild==NULL))
    {
        printf("The node is not present in the tree or it is a leaf node\n");
        return 0;
    }
    else
    {
        int leftsubtreeheight=heightofnode(requirednode->leftchild);
        int rightsubtreeheight=heightofnode(requirednode->rightchild);
        return (leftsubtreeheight-rightsubtreeheight);
    }
}
//FUNCTION TO PRINT THE TREE
void printTree(struct node *rootnode, int level) {
    if (rootnode == NULL) {
        return;
    }

    printTree(rootnode->rightchild, level + 1); // Right child

    for (int i = 0; i < level; i++) {
        printf("    ");
    }
    printf("%d\n", rootnode->data); // Current node

    printTree(rootnode->leftchild, level + 1); // Left child
}

//FUNCTION TO GET LEFT SUBTREE OF A NODE
struct node *leftsubtree(struct node *node)
{
    if(node==NULL)
    {
        return NULL;
    }
    else
    {
        return node->leftchild;
    }
}

//FUNCTION TO GET RIGHT SUBTREE OF A NODE
struct node *rightsubtree(struct node *node)
{
    if(node==NULL)
    {
        return NULL;
    }
    else
    {
        return node->rightchild;
    }
}

//FUNCTION TO PERFORM LL ROTATION
struct node* LLoperation(struct node *ancestor) {
    if (ancestor == NULL || ancestor->leftchild == NULL) {
        // Invalid input or LL operation not applicable
        return ancestor;
    }

    struct node *child, *lstofchild, *rstofchild, *rstofancestor;
    struct node *temp;
    child = ancestor->leftchild;

    lstofchild = leftsubtree(child);
    rstofchild = rightsubtree(child);
    rstofancestor = rightsubtree(ancestor);

    temp = rstofchild;
    child->rightchild = ancestor;
    child->rightchild->leftchild = temp;
    child->rightchild->rightchild = rstofancestor;
    return child;
}

//FUNCTION TO PERFORM RR ROTATION
struct node* RRoperation(struct node *ancestor) {
    if (ancestor == NULL || ancestor->rightchild == NULL) {
        // Invalid input or RR operation not applicable
        return ancestor;
    }

    struct node *child, *lstofchild, *rstofchild, *lstofancestor;
    struct node *temp;
    child = ancestor->rightchild;

    lstofchild = leftsubtree(child);
    rstofchild = rightsubtree(child);
    lstofancestor = leftsubtree(ancestor);

    temp = lstofchild;
    child->leftchild = ancestor;
    child->leftchild->rightchild = temp;
    child->leftchild->leftchild = lstofancestor;
    return child;
}

int main(void)
{
   struct node *rootnode;
   rootnode=NULL;
   int numberofnodes;
   printf("Enter the number of nodes to insert in the tree\n");
   scanf("%d",&numberofnodes);
   for(int i=0;i<numberofnodes;i++)
   {
    int datatoinsert;
     printf("Enter the data to insert in the tree\n");
    scanf("%d",&datatoinsert);
    rootnode=insertinBST(rootnode,datatoinsert);
   }

   rootnode=LLoperation(rootnode);
    printf("The tree is\n");
    printTree(rootnode, 0);

    
    printf("\n");

    free(rootnode);
    return 0;



}

