//IMPLEMENTATION OF BINARY HEAPS USING ARRAYS


//INSERTION IN A BINARY HEAP USING ARRAYS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int insertionincompletebinarytree(int *completebinarytree,int maximumlevels,int datatobeinserted,int index)
{
    if(completebinarytree[index]==0)
    {
        completebinarytree[index]=datatobeinserted;
        return index+1;
    }
    return -1;
}

void swapdata(int dataone,int datatwo)
{
    int temp;
    temp=dataone;
    dataone=datatwo;
    datatwo=temp;

}

void percolateup(int *completebinarytree,int latestindex)
{
    int parentindex;
    parentindex=(latestindex-2)/2
    if(latestindex-1==0)
    {
        return;
    }
    else if(completebinarytree[latestindex-1]<completebinarytree[parentindex])
    {
        swap(&parentindex,&(latestindex-1));
        percolateup(completebinarytree,parentindex);
    }
    else
    {
        return;
    }
   
}

void percolatedown(int *completebinarytree,int latestindex)
{
    int newroot;
    newroot=completebinarytree[latestindex-1];

}
