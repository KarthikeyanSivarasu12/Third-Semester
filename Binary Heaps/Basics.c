//IMPLEMENTATION OF BINARY HEAP USING ARRAYS

//INSERTION IN A BINARY HEAP

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int insertionincompletebinarytree(int *completebinarytree, int maxlevels, int datatoinsert, int index)
{
    if (index < (pow(2, maxlevels) - 1))
    {
        completebinarytree[index] = datatoinsert;
        return index + 1; // Update the index for the next insertion
    }
    return index;
}

void printTree(int *completebinarytree, int index, int level, int size)
{

    if (index >= size || completebinarytree[index] == 0)
    {
        return;
    }

    printTree(completebinarytree, 2 * index + 2, level + 1, size); // Right child

    for (int i = 0; i < level; i++)
    {
        printf("    ");
    }
    printf("%d\n", completebinarytree[index]); // Current node

    printTree(completebinarytree, 2 * index + 1, level + 1, size); // Left child
}

void printcompletebinarytree(int *completebinarytree, int maxlevels)
{
    for (int i = 0; i < (pow(2, maxlevels) - 1); i++)
    {
        printf("%d ", completebinarytree[i]);
    }
    printf("\n");
}


int main(void)
{
    int Maxlevels,Datatoinsert,Index,Numberofelementstoinsert,Size,*Completebinarytree;
    Index=0;
    Size=(pow(2,Maxlevels)-1);
    printf("Enter the maximum number of levels in the binary tree");
    scanf("%d",&Maxlevels);
    Completebinarytree=(int *)calloc((pow(2,Maxlevels)-1),sizeof(int));
    printf("Enter the number of elements to insert in the binary tree");
    scanf("%d",&Numberofelementstoinsert);
    if(Numberofelementstoinsert>(pow(2,Maxlevels)-1))
    {
        printf("The number of elements to insert is greater than the maximum number of elements that can be inserted in the binary tree");
        return 0;
    }
    else
    {
        for(int i=0;i<Numberofelementstoinsert;i++)
        {
            printf("Enter the data to insert in the binary tree");
            scanf("%d",&Datatoinsert);
            Index=insertionincompletebinarytree(Completebinarytree,Maxlevels,Datatoinsert,Index);
        }
    }
    printTree(Completebinarytree,0,0,Size);
    return 0;
}
