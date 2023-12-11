#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *leftchild;
    struct node *rightchild;
};

struct node *getnode(int value);
struct node *insertioninBST(struct node *rootnode, int datatoinsert);
void printTree(struct node *rootnode, int level);

int main(void)
{
    struct node *rootnode;
    rootnode = NULL;
    int datatoinsert, nofnodestoinsert;

    printf("Enter the number of nodes to insert:");
    scanf("%d", &nofnodestoinsert);

    for (int i = 0; i < nofnodestoinsert; i++)
    {
        printf("Enter the data to insert:");
        scanf("%d", &datatoinsert);
        rootnode = insertioninBST(rootnode, datatoinsert);
    }

    printf("The BST after insertion is:\n");
    printTree(rootnode, 0);

    return 0;
}

struct node *getnode(int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    newnode->data = value;
    newnode->leftchild = NULL;
    newnode->rightchild = NULL;

    return newnode;
}

struct node *insertioninBST(struct node *rootnode, int datatoinsert)
{
    if (rootnode == NULL)
    {
        return getnode(datatoinsert);
    }
    else
    {
        if (datatoinsert < rootnode->data)
        {
            rootnode->leftchild = insertioninBST(rootnode->leftchild, datatoinsert);
        }
        else if (datatoinsert > rootnode->data)
        {
            rootnode->rightchild = insertioninBST(rootnode->rightchild, datatoinsert);
        }
    }

    return rootnode;
}

void printTree(struct node *rootnode, int level)
{
    if (rootnode == NULL)
    {
        return;
    }

    printTree(rootnode->rightchild, level + 1);

    for (int i = 0; i < level; i++)
    {
        printf("    ");
    }

    printf("%d\n", rootnode->data);

    printTree(rootnode->leftchild, level + 1);
}
