//IMPLEMENTATION OF BINARY SEARCH TREES USING LINKED LIST 

// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *lc;
//     struct node *rc;
// };

// struct node *getnode(int value)
// {
//     struct node *newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=value;
//     newnode->lc=NULL;
//     newnode->rc=NULL;
//     return newnode;
// }

// void displaybinarysearchtree(struct node *start,int totalnodesinserted)
// {
//    struct node *rootnode,*parent;
//    int *array1,countofnodes,level;
//    countofnodes=totalnodesinserted;
//    rootnode=start;
//    parent=start;
//    array1=(int*)malloc((2*countofnodes)*sizeof(int));
//    if(array1==NULL)
//    {
//     printf("No nodes inserted");
//    }
//    while(parent->lc=NULL && parent->rc=NULL)
//    {
//       level=0;
//       if(countofnodes==1)
//       {
//         printf("Level %d:%d",level,parent->data);
        
//       }
//       else
//       {
//         for(int i=0;i<countofnodes,i++)
//         {
//             if(i==0)
//             {
//             array[i]=parent->data;
//             i++;
//             }
//             if((parent->lc)!=NULL || (parent->rc)!=NULL)
//             {
//                 array[i]=-1;
//                 level ++;
                
//                 if((parent->lc)=NULL)
//                 {
//                     parent=parent->rc;

//                 }
//                 else if((parent->rc)=NULL)
//                 {
//                     parent=parent->lc;
//                 }
//                 else if ((parent->lc)!=NULL && (parent->rc)!=NULL)
//                 {
//                     printf("Level %d:%d %d",level,parent->lc->data,parent->rc->data);
//                 }
//             }
//         }
//       }
//    }

// }

// struct node *insertnode(struct node *start,int value)
// {
//     struct node *rootnode,*parent,*newnode;
//     rootnode=start;
//     parent=start;
//     int value1;
//     value1=value;
//     newnode=getnode(value1);
    
//     if(rootnode==NULL)
//     {
//         rootnode=newnode;
//         parent=newnode;
//     }
//     else if((rootnode->data)>=(value1))
//    {
//             parent->lc=newnode;
//             parent=parent->lc;
//    }
//    else if((rootnode->data)<(value1))
//    {
//             parent->rc=newnode;
//             parent=parent->rc;
//    }
//    return rootnode;
// }


// int main(void)
// {
//     struct node *parent,*rootnodefinal;
//     parent=NULL;
//     int noofnodes,valuetoinsert;
//     printf("Enter the number of nodes to insert");
//     scanf("%d",&noofnodes);
//     for(int i=0;i<noofnodes;i++)
//     {
//         printf("Enter the value:");
//         scanf("%d",&valuetoinsert);
//         rootnodefinal=insertnode(parent,valuetoinsert);
//     }
//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lc;
    struct node *rc;
};

struct node *getnode(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->lc=NULL;
    newnode->rc=NULL;
    return newnode;
}



struct node *insertnode(struct node *start, int value)
{
    struct node *rootnode, *parent, *newnode;
    rootnode = start;
    parent = start;
    int value1;
    value1 = value;
    newnode = getnode(value1);

    if (rootnode == NULL)
    {
        rootnode = newnode;
        parent = newnode;
    }
    else if ((rootnode->data) >= (value1))
    {
        parent->lc = newnode;
        parent = parent->lc;
    }
    else if ((rootnode->data) < (value1))
    {
        parent->rc = newnode;
        parent = parent->rc;
    }
    return rootnode;
}
// void displaybinarysearchtree(struct node *start, int totalnodesinserted)
// {
//     struct node *rootnode, *parent;
//     int *array1, countofnodes, level;
//     countofnodes = totalnodesinserted;
//     rootnode = start;
//     parent = start;
//     array1 = (int *)malloc((2 * countofnodes) * sizeof(int));
//     if (array1 == NULL)
//     {
//         printf("No nodes inserted");
//     }
//     while (parent->lc != NULL && parent->rc != NULL)
//     {
//         level = 0;
//         if (countofnodes == 1)
//         {
//             printf("Level %d:%d", level, parent->data);
//         }
//         else
//         {
//             for (int i = 0; i < countofnodes; i++)
//             {
//                 if (i == 0)
//                 {
//                     array1[i] = parent->data;
//                     i++;
//                 }
//                 if ((parent->lc) != NULL || (parent->rc) != NULL)
//                 {
//                     array1[i] = -1;
//                     level++;

//                     if ((parent->lc) == NULL)
//                     {
//                         parent = parent->rc;
//                     }
//                     else if ((parent->rc) == NULL)
//                     {
//                         parent = parent->lc;
//                     }
//                     else if ((parent->lc) != NULL && (parent->rc) != NULL)
//                     {
//                         printf("Level %d:%d %d", level, parent->lc->data, parent->rc->data);
//                     }
//                 }
//             }
//         }
//     }
// }



int main(void)
{
    struct node *parent,*rootnodefinal;
    parent=NULL;
    int noofnodes,valuetoinsert;
    printf("Enter the number of nodes to insert");
    scanf("%d",&noofnodes);
    for(int i=0;i<noofnodes;i++)
    {
        printf("Enter the value:");
        scanf("%d",&valuetoinsert);
        rootnodefinal=insertnode(parent,valuetoinsert);
    }
    displaybinarysearchtree(rootnodefinal,noofnodes);
    return 0;
}


//SEARCH FOR DATA IN THE BINARY TREE

int search(int *tree,int data,int maxsizeofarray)
{
    
    int iterable=0;
    while(tree[iterable]!=data)
    {
        if(iterable==(maxsize-1))
        {
            printf("Data not found");
            return -1;
        }
        if(tree[iterable]>data)
        {
            iterable=2*iterable+1;
        }
        else if(tree[iterable]<data)
        {
            iterable=2*iterable+2;
        }
    }

    printf("The data is found at %d:",iterable);
    return iterable;
}


void delete(int *tree,int data,)
{
    int index;
    index=search(tree,data);
    if(index==-1);
    {
        printf("Data to be deleted is not present in the tree");
        return;
    }
    else if(tree[2*index+1]==-1 && tree[2*index+2]==-1)
    {
        printf("It is a leaf node");
        tree[index]=-1;//deleting the node
        return;

    }
}

//SEARCH FOR DATA IN BINARY TREE USING LINKED LIST

struct binarytree*search(struct binarytree*root,int data)
{
    struct binarytree*currentnode,*parentnode,*check;
    currentnode=root;
    parentnode=root;
    check=root;
    if(parentnode->leftchild!=NULL && parentnode->rightchild!=NULL)
    {
         if(parentnode->data>check->leftchild->data)
         {
            currentnode=currentnode->leftchild;
         }
         else if(parentnode->data<check->rightchild->data)
         {
            currentnode=currentnode->rightchild;
         }
    }
    }
    while(currentnode->dataofnode!=(data))
    {
        if(parentnode->data>currentnode->data)
        {
            parentnode=parentnode->leftchild;

            return parent;
        }
        else
    }



//CASE:1
//DELETING A NODE WITH NO CHILDREN(LEAF NODE)

void delete(struct node *root,int data)
{
    struct node *parentofnodetobedeleted,*delete;
    parentofnodetobedeleted=search(root,data);
    if(parentofnodetobedeleted->leftchild=NULL && parentofnodetobedeleted->rightchild=NULL || parentofnodetobedeleted=NULL)
    {
        printf("Node to be deleted not found in the tree");
    }
    else if (parentofnodetobedeleted->leftchild=NULL || parentofnodetobedeleted->rightchild==NULL )
    {
        if(parentofnodetobedeleted->leftchild=NULL)
        {
            if(parentofnodetobedeleted->rightchild==data)
            {
                if(parentofnodetobedeleted->rightchild->rightchild && parentofnodetobedeleted->rightchild->leftchild==NULL)
                {
                    parentofnodetobedeleted->rightchild==NULL;
                    free(parentofnodetobedeleted->rightchild);
                }
            }
        }
        else if(parentofnodetobedeleted->rightchild=NULL)
        {
            if(parentofnodetobedeleted->leftchild==data)
            {
                if(parentofnodetobedeleted->leftchild->rightchild && parentofnodetobedeleted->leftchild->leftchild=NULL)
                {
                    parentofnodetobedeleted->leftchild==NULL;
                    free(parentofnodetobedeleted->leftchild);
                }
            }
        }
    }
    

}


//CASE 2
//DELETE A NODE WITH ONE CHILDREN

int delete1(struct node *root,int data)
{
    int checkresult;
    struct node *node;
    checkresult=check(root,data);
    if(checkresult==1)
    {
        printf("It is a leaf node");
        return 0;
    }
    else if(checkresult==0)
    {
         parentofnodetobedeleted=search(root,data);
         if(parentofnodetobedeleted->leftchild=NULL && parentofnodetobedeleted->rightchild=NULL || parentofnodetobedeleted=NULL)
    {
    }

}}


//CASE TWO
//DELETE NODES IN BINARY SEARCH TREE WHICH HAS ONE CHILDREN

void deletenodewithonechildren(struct node *root,int data)
{
    struct node *parentnodeofnodetobedeleted,*node,*nodeleftchild,*noderightchild;
    int checkstatus;
    parentnodeofnodetobedelete=search(root,data);
    checkstatus=check(root,data);
    if(checkstatus==1)
    {
        printf("It is a leaf node");
        return;
    }
    else if(checkstatus==0)
    {
        printf("Ist not a leaf node");

        if(parentnodeofnodetobedeleted->leftchild && parentnodeofnodetobedeleted->rightchild!=NULL || parentnodeofnodetobedeleted!=NULL)
        {
               if (parentnodeofnodetobedeleted->leftchild==NULL)
               {
                  node=parentnodeofnodetobedeleted->rightchild;
               }

                else if(parentnodeofnodetobedeleted->rightchild==NULL)
                {
                    node=parentnodeofnodetobedeleted->leftchild;
                }
                  if(node->leftchild==NULL)
                  {
                     noderightchild=node->rightchild;
                     parentnodeofnodetobedeleted->rightchild=noderightchild;
                     free(node);
                  }
                  else if(node->rightchild==NULL)
                  {
                     nodeleftchild=node->leftchild;
                     parentnodeofnodetobedeleted->leftchild=nodeleftchild;
                    free(node);
                  }

         }

        }

    }

}

//CASE 3
//DELETE NODES IN BINARY SEARCH TREE WHICH HAS TWO CHILDREN

int *inordersuccessor(struct node *nodex)
{
    struct node *current;
    current=nodex;

    
}



//Restore function 
void restore(int *tree,int index)
{
    int tempindex;
    tempindex=index;
    
      if(tree[2*index+1]==-1)
      {
         tree[2*index+2]==
      }
}