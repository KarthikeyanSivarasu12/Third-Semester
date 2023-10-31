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
