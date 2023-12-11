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

struct node *getnode(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->leftchild=NULL;
    newnode->rightchild=NULL;
    return newnode;
}

struct node *parentinBST(struct node *rootnode,int dataofnode)
{
    if(rootnode==NULL || rootnode->data==dataofnode)
    {
        return rootnode;
    }
    else (dataofnode<(rootnode->data))
    {
        rootnode->leftchild=parentinBST(rootnode->leftchild,dataofnode);
    }
}

struct node *insertioninBST(struct node *rootnode,int datatoinsert)
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
            rootnode->leftchild=insertioninBST(rootnode->leftchild,datatoinsert);

        }
        else if(datatoinsert>(rootnode->data))
        {
            rootnode->rightchild=insertioninBST(rootnode->rightchild,datatoinsert);
        }
        
    }
    return rootnode;
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

void inordertraversalinBST(struct node *rootnode)
{
    if(rootnode->leftchild!=NULL)
    {
        inordertraversalinBST(rootnode->leftchild);
    }
    printf("%d",rootnode->data);
    if(rootnode->rightchild!=NULL)
    {
        inordertraversalinBST(rootnode->rightchild);
    }
    
}

void preordertraversalinBST(struct node *rootnode)
{
    printf("%d",rootnode->data);
    if(rootnode->leftchild!=NULL)
    {
        preordertraversalinBST(rootnode->leftchild);
    }
    if(rootnode->rightchild!=NULL)
    {
        preordertraversalinBST(rootnode->rightchild);
    }
    
}

void postordertraversalinBST(struct node *rootnode)
{
    if(rootnode->leftchild!=NULL)
    {
        postordertraversalinBST(rootnode->leftchild);
    }
    if(rootnode->rightchild!=NULL)
    {
        postordertraversalinBST(rootnode->rightchild);
    }
    printf("%d",rootnode->data);
}

struct node *findminimum(struct node *rootnode)
{
    if (rootnode->left != NULL)
    {
        return findminimum(rootnode->left);
    }
    return rootnode;
}

struct node *inorderpredecessor(struct node *rootnode,int dataofnode)
{
    struct node *minimumnode,*trackernode;
    int status;
    minimumnode=findminimum(rootnode);
    if(minimumnode->data==dataofnode)
    {
      status=1;
    }
    else
    {
        status=0;
    }
    if(rootnode->leftchild!=NULL)
    {
        trackernode=rootnode->leftchild;
        value=rootnode->leftchild->data;
        rootnode->leftchild=inorderpredecessor(rootnode->leftchild,dataofnode);
    }
   if(status==1 && rootnode->data==dataofnode)
   {
      printf("There is no inorder predecessor:");
      return NULL;
   }
   else if(status==0 && rootnode->data==dataofnode)
   {
          return trackernode;
   }

   if(rootnode->rightchild!=NULL)
   {
     trackernode=rootnode->rightchild;
     value=rootnode->rightchild->data;
     rootnode->rightchild=inorderpredecessor(rootnode->rightchild,dataofnode);
   }
    
}

struct node *inorderpredecessor(struct node *rootnode,int dataofnode)
{
    struct node *minimumnode;
    minimumnode=findminimum(rootnode);
     if(rootnode->leftchild!=NULL)
    {
        rootnode->leftchild=inorderpredecessor(rootnode->leftchild,dataofnode);
    }

    if(rootnode->data==dataofnode)
    {
        if(rootnode->data==minimumnode->data)
        {
            printf("There is no inorder predecessor");
            return NULL;
        }
        else if(rootnode->data!=minimumnode->data)
        {
           if(rootnode->leftchild!=NULL)
           {
              struct node *maxnode;
              maxnode=findmaximum(rootnode->leftchild);
              return maxnode;
           }
           else
           {
              return parent(rootnode);
           }
        }
    }

    if(rootnode->rightchild!=NULL)
    {
        rootnode->rightchild=inorderpredecessor(rootnode->rightchild,dataofnode);
    }
    return rootnode;
}

int main(void)
{
    struct node *rootnode;
    rootnode=NULL;
    int datatoinsert,nofnodestoinsert;
    printf("Enter the number of nodes to insert:");
    scanf("%d",&nofnodestoinsert);
    for(int i=0;i<nofnodestoinsert;i++)
    {
        printf("Enter the data to insert:");
        scanf("%d",&datatoinsert);
        rootnode=insertioninBST(rootnode,datatoinsert);
    }


    printf("The BST after insertion is:\n");
    printTree(rootnode,0);

    //INORDER TRAVERSAL
    printf("Inorder traversal:");
    inordertraversalinBST(rootnode);
    printf("\n");
    //PREORDER TRAVERSAL
    printf("Preorder traversal:");
    preordertraversalinBST(rootnode);
    printf("\n");
    //POSTORDER TRAVERSAL
    printf("Postorder traversal:");
    postordertraversalinBST(rootnode);
    printf("\n");


    return 0;
}


