 //INSERTION IN BINARY TREE USING RECURSION AND ITERATION IN ARRAYS

#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int a[MAX];
int i=0;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
struct node *insert(struct node *root,int x)
{
    if(root==NULL)
    {
        root=(struct node *)malloc(sizeof(struct node));
        root->data=x;
        root->left=NULL;
        root->right=NULL;
    }
    else if(x<root->data)
    {
        root->left=insert(root->left,x);
    }
    else if(x>root->data)
    {
        root->right=insert(root->right,x);
    }
    return root;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}


//BINARY TREES USING ARRAYS IN RECURSION
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int *createtree(int depthoftree)
{
    int *tree;
    tree=(int *)calloc((int)(pow(2,depthoftree)-1),sizeof(int));
    return tree;
}

void buildtree(int *tree,int index,int depthoftree)
{
    if(tree[0]==0)
    {
        printf("Enter data: ");
        scanf("%d",&tree[0]);
    }
    if(depthoftree==0)
    {
        return;
    }
    int data,choice;
    printf("Do you want to enter left child of %d? (1/0): ",tree[index]);
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter data: ");
        scanf("%d",&data);
        tree[2*index+1]=data;
        buildtree(tree,2*index+1,depthoftree-1);
    }
    printf("Do you want to enter right child of %d? (1/0): ",tree[index]);
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter data: ");
        scanf("%d",&data);
        tree[2*index+2]=data;
        buildtree(tree,2*index+2,depthoftree-1);
    }
}
