//IMPLEMENTATION OF BINARY HEAPS USING ARRAYS

//INSERTION IN A MIN HEAP USING ARRAYS

#include<stdio.h>
#include<stdlib.h>

int insertincompletebinarytree(int *array,int maxsizeofarray,int index,int datatobeinserted)
{
     if(index<=(maxsizeofarray-1))
     {
        array[index]=datatobeinserted;
        return index+1;
     }
    
    return index-1;//this gives the last element in the array 
}

void printTree(int *array, int index, int level, int size)
{
    if (index > (size - 1) || array[index] == 0)
    {
        return;
    }

    printTree(array, 2 * index + 2, level + 1, size); // Right child

    for (int i = 0; i < level; i++)
    {
        printf("    ");
    }
    printf("%d\n", array[index]); // Current node

    printTree(array, 2 * index + 1, level + 1, size); // Left child
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void reheapify(int *array, int maxsizeofarray, int index) {
    if (index <= 0) {
        return; // Base case: no further percolation needed
    }

    int parentIndex = (index - 1) / 2;

    if (array[parentIndex] > array[index]) {
        swap(&array[parentIndex], &array[(index-1)]);
        reheapify(array, maxsizeofarray, parentIndex);
    }
}


int main(void)
{
    int *Array;
    int Maximumsizeofarray,Index,Datatobeinserted,Noofnodestoinsert;
    Index=0;
    printf("Enter the maximum size of the array\n");
    scanf("%d",&Maximumsizeofarray);
    Array=(int *)calloc(Maximumsizeofarray,sizeof(int));
    if(Array==NULL)
    {
        printf("Memory not allocated\n");
        exit(0);
    }
    printf("Enter the number of nodes to be inserted\n");
    scanf("%d",&Noofnodestoinsert);
    for(int i=0;i<Noofnodestoinsert;i++)
    {
        printf("Enter the data to be inserted\n");
        scanf("%d",&Datatobeinserted);
        Index=insertincompletebinarytree(Array,Maximumsizeofarray,Index,Datatobeinserted);
        reheapify(Array,Maximumsizeofarray,Index);
    }
    printTree(Array,0,0,Maximumsizeofarray);
    free(Array);
    return 0;
}