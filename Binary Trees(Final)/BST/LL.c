//IMPLEMENTATION OF OPERATIONS ON BST USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node
{
    int data;
    struct node *leftchild;
    struct node *rightchild;
};

//CREATING A NEW NODE AND ALLOCATING VALUE TO STRUCTURE MEMBERS

struct node *getnode(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->leftchild=NULL;
    newnode->rightchild=NULL;
    return newnode;
}

//INSERTION IN BST

struct node *insertinBST(struct node *rootnode,int datatoinsert)
{
    struct node *newnode;
    newnode=getnode(datatoinsert);
    if(rootnode==NULL)
    {
       rootnode=newnode;
       return rootnode;
    }
    else
    {
        if(datatoinsert<(rootnode->data))
        {
            rootnode->leftchild=insertinBST(rootnode->leftchild,datatoinsert);
        }
        else if (datatoinsert>(rootnode->data))
        {
              rootnode->rightchild=insertinBST(rootnode->rightchild,datatoinsert);
        }
    }
    return rootnode;
}

// //DELETE A NODE WITH ONE CHILDREN(LEAF NODE
// struct node *deletenodewithzerochildren(struct node **rootnode,int datatodelete)
// {
//     if(*rootnode==NULL)
//     {
//         printf("Node not found");
//         return rootnode;
//     }
//     else if((*rootnode->data)==datatodelete)
//     {
//         free(*rootnode);
//         *rootnode=NULL;
//         return rootnode;
//     }
//     else if(datatodelete<(rootnode->data))
//     {
//         deletenodewithzerochildren(rootnode->leftchild,datatodelete);
//     }
//     else if(datatodelete>(rootnode->data))
//     {
//        deletenodewithzerochildren(rootnode->rightchild,datatodelete);
//     }
//     return rootnode;
// }

// void deletenodewithzerochildren(struct node **rootnode, int datatodelete)
// {
//     if (*rootnode == NULL)
//     {
//         printf("Node cannot be deleted as tree is empty");
//     }
//     else if (datatodelete < (*rootnode)->data)
//     {
//         deletenodewithzerochildren(&((*rootnode)->leftchild), datatodelete);
//     }
//     else if (datatodelete > (*rootnode)->data)
//     {
//         deletenodewithzerochildren(&((*rootnode)->rightchild), datatodelete);
//     }
//     else ((*rootnode)->data==datatodelete)
//     {
//         struct node *temp = *rootnode;
//         *rootnode = NULL; // Set the parent's link to NULL

//         free(temp); // Free the memory of the node
//     }
// }

//DELETING NODE WITH ZERO/ONE/TWO CHILDREN
struct node *deletenode(struct node *rootnode,int datatodelete)
{
    if(rootnode==NULL)
    {
        printf("Node not found in the tree or the tree is empty");
        return rootnode;
    }
    else if(datatodelete<(rootnode->data))
    {
        rootnode->leftchild=deletenode(rootnode->leftchild,datatodelete);
    }
    else if(datatodelete>(rootnode->data))
    {
        rootnode->rightchild=deletenode(rootnode->rightchild,datatodelete);
    }
    else if(rootnode->data==datatodelete)
    {
        //If the rootnode of the subtree or the rootnode itself has no leftchild
        if(rootnode->leftchild==NULL)
        {
               struct node *temp=rootnode->rightchild;
               free(rootnode);
               return temp;
        }
        else if()
    }
}

//PRINTING THE BST
void printTree(struct node *rootnode, int level)
{
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

int main(void)
{
    struct node *rootnode;
    rootnode=NULL;
    int noofnodes,datatoinsert,datatodelete;
    printf("Enter the number of nodes to insert:");
    scanf("%d",&noofnodes);
    for(int i=0;i<noofnodes;i++)
    {
        printf("Enter the data to insert:");
        scanf("%d",&datatoinsert);
        rootnode=insertinBST(rootnode,datatoinsert);
    }
    // printf("The tree is:\n");
    // printTree(rootnode,0);
    printf("Enter the data of node with zero children to be deleted:");
    scanf("%d",&datatodelete);
    deletenodewithzerochildren(&rootnode,datatodelete);
    printf("The tree after deletion is:\n");
    printTree(rootnode,0);
    return 0;
    
}

