//STACKS

#include<stdio.h>
#include<stdlib.h>


int *push(int *arr,int top,int numberofelements)
{
    int *newarr;
    newarr=(int *)malloc(sizeof(int)*(numberofelements+1));
    for(int i=0;i<numberofelements;i++)
    {
        newarr[i]=arr[i];
    }
    printf("Enter the element to be pushed: ");
    scanf("%d",&newarr[numberofelements]);
    top++;
    return newarr;
}

int main()
{
    int *arr;
    int top=-1;
    int numberofelements;
    printf("Enter the number of elements: ");
    scanf("%d",&numberofelements);
    arr=(int *)malloc(sizeof(int)*numberofelements);
    for(int i=0;i<numberofelements;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
        top++;
    }
    arr=push(arr,top,numberofelements);
    for(int i=0;i<numberofelements+1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}


//STACKS 


#include<stdio.h>
#include<stdlib.h>

int push(int *arr,int top,int numberofelements,int data)
{
    if(top==numberofelements-1)
    {
        printf("Stack Overflow\n");
        return top;
    }
    else
    {
        top++;
        arr[top]=data;
        return top;
    }
}

int main(void)
{
    int *arr;
    int top=-1;
    int numberofelements;
    printf("Enter the number of elements: ");
    scanf("%d",&numberofelements);
    arr=(int *)malloc(sizeof(int)*numberofelements);
    for(int i=0;i<numberofelements;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
        top++;
    }
    int data;
    printf("Enter the data to be pushed: ");
    scanf("%d",&data);
    top=push(arr,top,numberofelements,data);
    for(int i=0;i<numberofelements+1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}