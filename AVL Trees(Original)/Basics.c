//IMPLEMENTATION OF OPERATIONS ON AVL TREES USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>

int level=0;
struct node
{
    int data;
    int height;
    struct node *leftchild;
    struct node *rightchild;
}

//FUNCTION TO GET A NODE

struct node *getnode(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->height=0;
    newnode->leftchild=NULL;
    newnode->rightchild=NULL;
    return newnode;
}

struct node *insertinbinarysearchtree(struct node *rootnode,int datatoinsert)
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
        level++;
        rootnode->leftchild=insertinbinarysearchtree(rootnode->leftchild,datatoinsert);
      }
      else if(datatoinsert>(rootnode->data))
      {
        level++;
        rootnode->rightchild=insertinbinarysearchtree(rootnode->rightchild,datatoinsert);
      }
   }
   rootnode->height=level;
   return rootnode;

}

struct node *search(struct node *rootnode,int datatosearch)
{
    if(rootnode->data==datatosearch || rootnode==NULL)
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

    printf("Data not found in the tree");
    return NULL;
}



int heightofnode(struct node *rootnode, int datainnode)
{
    struct node *newlyinsertednode = search(rootnode, datainnode);
    if (newlyinsertednode  != NULL)
    {
        return newlyinsertednode->height;
    }
    else
    {
        printf("Node with data %d not found.\n", datainnode);
        return -1; // Or any appropriate value indicating an error
    }
}
int heightofleftsubtreeofnode(struct node *rootnode,int dataofnode,int datainnewnode)
{
    struct node *newlyinsertednode,*requirednode;

    int heightofnewlyinsertednode,heightofrequirednode;

    newlyinsertednode=search(rootnode,datainnewnode);
    heightofnewlyinsertednode=heightofnode(rootnode,datainnewnode);

    requirednode=search(rootnode,dataofnode);
    heightofrequirednode=heightofnode(rootnode,dataofnode);


}


int heightofleftsubtree(struct node *rootnode,int datainnode)
{
    struct node *requirednode;
    requirednode=search(rootnode,datainnode);
    while(requirednode!=NULL)
    {
        if(requirednode->leftchild!=NULL || requirednode->rightchild!=NULL)
        {
            if(requirednode->leftchild!=NULL)
            {
                requirednode=requirednode->leftchild;
            }
            else if(requirednode->rightchild!=NULL)
            {
                requirednode=requirednode->rightchild;
            }
        }
    }
}

