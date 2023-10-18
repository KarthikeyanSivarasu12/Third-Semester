//IMPLEMENTATION OF BINARY TREE USING ARRAY

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void)
{
    int totalelements,*Array,*Array2,Data;
    printf("Enter the total elements in the tree:");
    scanf("%d",&totalelements);
    Array=(int*)malloc((pow(2,totalelements)-1)*sizeof(int));
      if(Array==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        printf("Memory allocated");
    }

    for(int i=0;i<(pow(2,totalelements)-1);i++)
    {
        Array[i]=-1;
    }
    for(int j=0;j<totalelements;j++)
    {
        printf("Enter the data");
        scanf("%d",&Data);
        Array2[j]=Data;
    }

    for(int k=-1;k<totalelements-1;k++)
    {
        int l=0;
        if(k==-1)
        {
            Array[l]=Array2[l];
            l++;
        }
        else
        {
           if(Array2[l]<Array2[l-1])
           {
              Array[2*k+1]=Array[l];
              
           }
           if(Array2[l]>Array2[l-1])
           {
             Array[2*k+2]=Array[l];
           }
           l++;
        }

    }

    for(int m=0;m<(pow(2,totalelements)-1);m++)
    {
        printf("%d",Array[m]);
    }
    return 0;

}
