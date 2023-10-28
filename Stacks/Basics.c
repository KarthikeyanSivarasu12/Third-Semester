//IMPLEMENTATION OF STACK OPERATIONS USING ARRAYS


//POP OPERATION IN STACK USING ARRAYS

#include<stdio.h>
#include<stdlib.h>

int *pop_operation(int *array,int maxsizeofarray,int noofelementsinarray,int *top)
{
    int poppedvalue;
    if(*top==-1)  //noofelementsinarray==0
    {
       printf("Stack underflow:\n");
       return top;
    }
    else
    {
         poppedvalue=array[*top];
         printf("The popped value is %d:\n",poppedvalue);
         *top=*top-1;
         return top;

    }
}

void display(int *Array, int *Top) {
    printf("The resultant stack is: ");
    for (int i = 0; i <= *Top; i++) {
        printf("%d ", Array[i]);
    }
    printf("\n");
}


int main(void)
{
    int Maxsizeofarray,Noofelementsinarray,Value,Noofpops,*Array,*Top;

    printf("Enter the maximum size of the array:");
    scanf("%d",&Maxsizeofarray);
    Array=(int *)malloc(Maxsizeofarray*sizeof(int));
    if(Array==NULL)
    {
        printf("Memory not allocated for array\n");
        exit(0);//exit(0) means unsuccessful termination
    }
    else
    {
        printf("Memory allocated for array successfully\n");
    }
    Top=(int *)malloc(sizeof(int));
    if(Top==NULL)
    {
        printf("Memory not allocated for top\n");
        exit(0);//exit(0) means unsuccessful termination
    }
    else
    {
        printf("Memory allocated for top successfully\n");
    }
    *Top=-1;
    printf("Enter the number of elements in the array:");
    scanf("%d",&Noofelementsinarray);
    for(int i=0;i<Noofelementsinarray;i++)
    {
        printf("Enter the value:");
        scanf("%d",&Value);
        Array[i]=Value;
        *Top=*Top+1;
    }
    printf("Enter the number of pops:");
    scanf("%d",&Noofpops);
    if(Noofpops>Noofelementsinarray)
    {
        printf("Only %d pops can be performed as after that stack underflow will occur:\n",Noofelementsinarray);
        for(int j=0;j<Noofelementsinarray;j++)
        {
            Top=pop_operation(Array,Maxsizeofarray,Noofelementsinarray,Top);
        }
    }
    else if(Noofpops<=Noofelementsinarray)
    {
        printf("All the %d elements can be popped successfully\n",Noofpops);
        for(int k=0;k<Noofpops;k++)
        {
            Top=pop_operation(Array,Maxsizeofarray,Noofelementsinarray,Top);
        }
    }
    display(Array,Top);
    free(Array);
    free(Top);
    return 0;

}

