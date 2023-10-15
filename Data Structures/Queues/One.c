#include<stdio.h>
#include<stdlib.h>

void enqueue(int *arr,int maxsize,int data,int *front,int *rear)
{

    if(front==-1)
    {
        ++(*front);
    }
    
    if(*rear==(maxsize-1)||*front==(maxsize-1))
    {
        printf("Overflow:\n");
        return;
    }
    else
    {
        arr[++(*rear)]=data;
        return;
    }
}

int main(void)
{
    int *front=-1;
    int *rear=-1;
    int max,*arr,n,n_e;
    printf("Enter the maximum number of elements:");
    scanf("%d",&max);
    arr=(int *)malloc(max*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory Allocation failed");
        return -1;
    }
    printf("Enter the number elements to insert in the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the element at index %d",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of elements to enqueue");
    scanf("%d",&n_e);
    for(int j=0;j<n_e;j++)
    {
        enqueue(arr,max,value,front,rear)
    }



}