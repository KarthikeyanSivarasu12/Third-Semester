#include<stdio.h>
#include<stdlib.h>

int enqueue(int *arr,int maxsize,int data,int *rear)
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
    int max, n,countofenque;
    int value;
    int *rear;
    rear=-1;
    printf("Enter the number of elements for the array to hold:");
    scanf("%d", &max);
    arr = (int *)malloc(max * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the number of elements you want to be inserted in the array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr[i]);
        top++;
    }

    printf("Enter the number of elements to be enqueued:");
    scanf("%d",&countofenque);
    for(int i=0;i<countofenque;i++)
    {
        printf("Enter the data to be enqueued:");
        scanf("%d",&value);
        enqueue(arr,max,value,rear);
        

    }


   

}
    
