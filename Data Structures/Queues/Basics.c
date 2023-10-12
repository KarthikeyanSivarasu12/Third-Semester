#include<stdio.h>
#include<stdlib.h>

int enqueue(int *arr,int maxsize,int data,int front,int *rear)
{
    if(*rear==(maxsize-1))
    {
        printf("Overflow\n");
        return -1;
    }
    else
    {
       arr[++(*rear)]=data;
       return 0;
    }
}

int main(void)
{
    int *arr;
    int *front,*rear;
    
}