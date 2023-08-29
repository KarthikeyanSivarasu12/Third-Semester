//INSERTION SORT 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,i,j,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("The sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

//INSERTION SORT 

#include<stdio.h>

void insertion_sort(int *array,int length)
{
    for(int i=0;i<length;i++)
    {
        for(int j=i-1;j<(length-1);j++)
        {
            if(array[j]>array[j+1])
            {
                   *
            }
        }
    }
}



int main(void)
{
    int a[]={5,9,7,4,2,0};
    insertion_sort(a,6);
    printarray(a);
    return 0;
}
