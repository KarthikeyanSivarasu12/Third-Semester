// //IMPLEMENTATION OF INSERTION IN BINARY SEARCH TREE USING LINKED LIST

// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *leftchild;
//     struct node *rightchild;
// };

// struct node *getnode(int value)
// {
//   struct node *rootnode;
//   rootnode=(struct node*)malloc(sizeof(struct node));
//   rootnode->data=value;
//   rootnode->leftchild=NULL;
//   rootnode->rightchild=NULL;
//   return rootnode;

// }

// struct node *insertnode(struct node *rootnode,int value)
// {
//     struct node *currentnode,*newnode,*start;
//     start=rootnode;
//     int value1;
//     value1=value;
//     newnode=getnode(value1);
//     currentnode=rootnode;
//     if(currentnode==NULL)
//     {
//         printf("Enter a value:");
//         scanf("%d",&value1);
//         currentnode=newnode;
//     }
//     else
//     {
//         printf("Enter a value:");
//         scanf("%d",&value1);
        
//         if((currentnode->data)>(newnode-data))
//         {
//             printf("LC");
//             currentnode->leftchild=newnode;
//             currentnode=currentnode->leftchild;
//         }
//         else if((currentnode->data)<(newnode-data))
//         {
//             printf("RC");
//             currentnode->rightchild=newnode;
//             currentnode=currentnode->rightchild;
//         }

//     }
    
//     return start;

// }
// void display(struct node *rootnode)
// {
//     while(rootnode->leftchild=NULL && rootnode->rightchild=NULL)
//     {
//         printf("%d",rootnode->data);
//         rootnode=rootnode->leftchild;
//     }
//     while(rootnode->leftchild=NULL && rootnode->rightchild=NULL)
//     {
//         printf("%d",rootnode->data);
//         if(rootnode->leftchild=NULL && rootnode->rightchild!=NULL)
//         {
//            rootnode=rootnode->leftchild;
//         }
//     }
// }
// int main(void)
// {
//    struct node *rootnode;
//    printf("Enter the number of nodes to insert:");
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        insertnode(rootnode);
//    }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *leftchild;
    struct node *rightchild;
};

struct node *getnode(int value)
{
    struct node *rootnode;
    rootnode = (struct node *)malloc(sizeof(struct node));
    rootnode->data = value;
    rootnode->leftchild = NULL;
    rootnode->rightchild = NULL;
    return rootnode;
}

void insertnode(struct node *rootnode, int value)
{
    struct node *currentnode, *newnode;
    int value1 = value;
    newnode = getnode(value1);
    currentnode = rootnode;

    if (currentnode == NULL)
    {
        printf("Enter a value:");
        scanf("%d", &value1);
        currentnode = newnode;
    }
    else
    {
        printf("Enter a value:");
        scanf("%d", &value1);

        if (currentnode->data > newnode->data)
        {
            printf("LC");
            currentnode->leftchild = newnode;
            currentnode = currentnode->leftchild;
        }
        else if (currentnode->data < newnode->data)
        {
            printf("RC");
            currentnode->rightchild = newnode;
            currentnode = currentnode->rightchild;
        }
    }
}

void display(struct node *rootnode)
{
    if (rootnode == NULL)
    {
        return;
    }

    display(rootnode->leftchild);
    printf("%d ", rootnode->data);
    display(rootnode->rightchild);
}

int main(void)
{
    struct node *rootnode = NULL;
    int n, value;

    printf("Enter the number of nodes to insert: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &value);
        insertnode(rootnode, value);
    }

    printf("In-order Traversal: ");
    display(rootnode);

    return 0;
}
