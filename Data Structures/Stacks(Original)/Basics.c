//IMPLEMENTATION OF STACK OPERATIONS USING ARRAYS

#include<stdio.h>
#include<stdlib.h>

int *pushoperation(int *array,int maxsizeofarray,int noofelementsinarrray,int *top,int data)
{
    if((*top)==(maxsizeofarray-1))
    {
        printf("Stack Overflow");
        return top;
    }
    else 
    {
        array[++(*top)]==data;
        return top;
    }
}



int main(void)
{
    int *Array,*Top,totalnoofpushes,countofelemetsinarray,maximumsizeofarray,value,valuetopush;
    Top=(int*)malloc(sizeof(int));
    *Top=-1;
    printf("Enter the max size of the array:");
    scanf("%d",&maxsize);
    Array=(int*)malloc(maximumsizeofarray*sizeof(int));
    if(Array=NULL || Top=NULL)
    {
        printf("Memory Allocation failed");
        return 1;
    }
    printf("Count of elements in array:");
    scanf("%d",&countofelemetsinarray);
    
    for(int i=0;i<countofelemetsinarray;i++)
    {
       printf("ENter the value at index %d",i);
       scanf("%d",&value);
       Array[i]=value;
    }

    printf("Enter the total number of pushes:");
    scanf("%d",&totalnoofpushes);
    if(totalnoofpushes+countofelemetsinarray>maximumsizeofarray)
    {
        printf("Only %d pushes can be performed out of the total %d pushes",(maximumsizeofarray-countofelemetsinarray),totalnoofpushes)
        for(int j=0;j<(maximumsizeofarray-countofelemetsinarray);j++)
        {
            printf("Enter the value to push:");
            scanf("%d",&valuetopush)
            Top=pushoperation(Array,maximumsizeofarray,countofelemetsinarray,Top,valuetopush);
        }
    }
   else if (totalnoofpushes+countofelemetsinarray<=maximumsizeofarray)
   {
         printf("All the %d pushes can be performed",totalnoofpushes);
         for(int k=0;k<totalnoofpushes;k++)
        {
            printf("Enter the value to push:");
            scanf("%d",&valuetopush)
            Top=pushoperation(Array,maximumsizeofarray,countofelemetsinarray,Top,valuetopush);
        }
   }
   free(Array);
   free(Top);
   return 0;
   
   

    




}

