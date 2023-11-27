//IMPLEMENTATION OF BINARY SEARCH TREE USING LINKED LIST

//INSERTION IN BINARY SEARCH TREES USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node
{
    int data;
    struct node *leftchild;
    struct node *rightchild;
};//Semicolon is compulsory

struct node *getnode(int value)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->leftchild=NULL;
    newnode->rightchild=NULL;
    return newnode;

}

struct node *insertinBST(struct node *rootnode,int datatoinsert)
{
      struct node *newnode;
      newnode=getnode(datatoinsert);
      if(rootnode==NULL) //Base case
      {
        rootnode=newnode;
        return rootnode;
      }
      else
      {
        if(datatoinsert<(rootnode->data)) //Left subtree
        {
            rootnode->leftchild=insertinBST(rootnode->leftchild,datatoinsert);
        }
        else if(datatoinsert>(rootnode->data)) //right subtree
        {
            rootnode->rightchild=insertinBST(rootnode->rightchild,datatoinsert);
        }
      }
      return rootnode;
}

//SEARCHING FOR A NODE IN A BINARY SEARCH TREE
struct node *search(struct node *rootnode, int datatosearch)
{
    if(rootnode==NULL)
    {
        printf("Node not found as the tree is empty");
        return NULL;
    }
    else if(rootnode->data==datatosearch)
    {
        return rootnode;
    }
    else
    {
        if (datatosearch < rootnode->data)
        {
            struct node *result = search(rootnode->leftchild, datatosearch);
            return result;
        }
        else
        {
            struct node *result = search(rootnode->rightchild, datatosearch);
            return result;
        }
    }
    return NULL;
}


struct node *parentofnode(struct node *rootnode, int datatosearch)
{
    if (rootnode == NULL)
    {
        printf("Node not found as the tree is empty");
        return NULL;
    }

    if (rootnode->data == datatosearch)
    {
        return rootnode; // Data found at the root, indicating that the root has no parent but we return the rootnode itself
    }

    if ((rootnode->leftchild != NULL && rootnode->leftchild->data == datatosearch) ||
        (rootnode->rightchild != NULL && rootnode->rightchild->data == datatosearch))
    {
        return rootnode;
    }
    else
    {
        if (datatosearch < rootnode->data)
        {
            struct node *result = parentofnode(rootnode->leftchild, datatosearch);
            return result; // Return the result from the left child
        }
        else if (datatosearch > rootnode->data)
        {
            struct node *result = parentofnode(rootnode->rightchild, datatosearch);
            return result; // Return the result from the right child
        }
    }

    return NULL; // This line should not be reached in a valid BST, but added for completeness
}

//DELETE NODE WITH NO CHILDREN(LEAF NODE)
void deletenodewithnochildren(struct node **rootnode, int datatodelete)
{
    struct node *parentofnodetodelete = parentofnode(*rootnode, datatodelete);

    if (parentofnodetodelete == NULL)
    {
        printf("There is no parent for the node with data %d and it is the rootnode\n", datatodelete);
        free(*rootnode);
        *rootnode = NULL;
    }
    else if (parentofnodetodelete->leftchild != NULL && parentofnodetodelete->leftchild->data == datatodelete)
    {
        free(parentofnodetodelete->leftchild);
        parentofnodetodelete->leftchild = NULL;
    }
    else if (parentofnodetodelete->rightchild != NULL && parentofnodetodelete->rightchild->data == datatodelete)
    {
        free(parentofnodetodelete->rightchild);
        parentofnodetodelete->rightchild = NULL;
    }

}

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


int main(void)
{
    struct node *rootnode,*newnode,*parent;
    rootnode=NULL;
    newnode=NULL;
    parent=NULL;
    int noofnodes,datatoinsert,dataofnode,datatodelete;
    printf("Enter the number of nodes to insert:");
    scanf("%d",&noofnodes);
   for (int i = 0; i < noofnodes; i++)
   {
    printf("Enter the data of node to insert:");
    scanf("%d", &datatoinsert);
    rootnode=insertinBST(rootnode,datatoinsert);
   }
    printTree(rootnode,0);
    // printf("Enter the node with data for which parent needs to be found:");
    // scanf("%d",&dataofnode);
    // parent=parentofnode(rootnode,dataofnode);
    // if (parent != NULL)
    // {
    //     printf("Parent found with data: %d\n", parent->data);
    // }
    // else
    // {
    //     printf("Node not found.\n");
    // }
    //DELETING A LEAF NODE
    printf("Enter the data of the leaf node to delete");
    scanf("%d",&datatodelete);
    deletenodewithnochildren(&rootnode,datatodelete);
    printf("The tree after deleting a leaf node is:\n");
    printTree(rootnode,0);

}



