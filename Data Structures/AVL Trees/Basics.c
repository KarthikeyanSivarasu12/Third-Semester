//IMPLEMENTATION OF OPERATIONS IN AVL TREES USING LINKED LIST
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//STRUCTURE
struct node
{
    int data;
    int height;
    struct node *leftchild;
    struct node *rightchild;
}

//FUNCTION TO CREATE A NODE
struct node *getnode(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->value=data;
    newnode->height=0;
    newnode->leftchild=NULL;
    newnode->rightchild=NULL;
    return newnode;

}




//FUNCTION TO INSERT IN BINARY SEARCH TREE
struct node* insertinbst(struct node *rootnode, int datatoinsert) {
    struct node *newnode;
    newnode = getnode(datatoinsert);

    if (rootnode == NULL) {
        return newnode;
    } else {
        if (datatoinsert < (rootnode->data)) {
            rootnode->leftchild = insertinbst(rootnode->leftchild, datatoinsert);
        } else if (datatoinsert > (rootnode->data)) {
            rootnode->rightchild = insertinbst(rootnode->rightchild, datatoinsert);
        }
    }
    return rootnode;
}


struct node *RR(struct node *rootnode,struct node *newnode,int datainserted)
{
    int balancefactor;
   if(datainserted<(rootnode->data))
   {
       while(rootnode!=newnode)
       {
          if(rootnode->height=)
       }
   }
}

