// //STACK ADT
// //REPRESENTATION OF STACKS AND IMPLEMENTATION OF STACK OPERATIONS USING ARRAYS

// //POP OPERATION IN STACKS USING ARRAYS
// #include<stdio.h>
// #include<stdlib.h>

// int *pop_operation(int *array,int maxsizeofarray,int numberofelementsinarray,int *top)
// {
//     if(*top==-1)
//     {
//         printf("Stack Underflow");
//         return top;
//     }
//     else
//     {
//         printf("The popped elemnent is %d",array[*top]);
//         *top=*top-1;
//         return top;
//     }
// }

// void display(int *array,int *top)
// {
//     if(*top==-1)
//     {
//         printf("The stack is empty");
//     }
//     else
//     {
//     for(int i=0;i<=*top;i++)
//     {
//         printf("The Resultant stack is:");
//         printf("%d",array[i]);
//     }
//     }
// }

// int main(void)
// {
//     int *Array,*Top;
//     int Maximumsizeofarray,Numberofelementsinarray, Noofpops,Intialvalue;
//     printf("Enter the maximum size of the array:");
//     scanf("%d",&Maximumsizeofarray);
//     Array=(int *)malloc(Maximumsizeofarray*sizeof(int));
//     if(Array==NULL)
//     {
//         printf("Memory not allocated for array\n");
//         exit(0);//exit(0) means unsuccessful termination
//     }
//     else
//     {
//         printf("Memory allocated for array successfully\n");
//     }
//     Top=(int *)malloc(sizeof(int));
//     if(Top==NULL)
//     {
//         printf("Memory not allocated for top\n");
//         exit(0);//exit(0) means unsuccessful termination
//     }
//     else
//     {
//         printf("Memory allocated for top successfully\n");
//     }
//     *Top=-1;
//     printf("Enter the number of elements you want to insert in the array:");
//     scanf("%d",&Numberofelementsinarray);
//     for(int i=0;i<Numberofelementsinarray;i++)
//     {
//         printf("Enter the element at index %d:",i);
//         scanf("%d",&Array[i]);
//         *Top=*Top+1;//This is similar to push operation but its done for the array  here in the driver code instead of the function
//     }
//     printf("Enter the number of elements you want to pop from the stack:");
//     scanf("%d",&Noofpops);
//     if(Noofpops>=Numberofelementsinarray)
//     {
//         printf("Can only perform %d pops",Numberofelementsinarray);
//         for(int j=0;j<Numberofelementsinarray;j++)
//         {
//         Top=pop_operation(Array,Maximumsizeofarray,Numberofelementsinarray,Top);
//         }

//     }
//     else if(Noofpops<Numberofelementsinarray)
//     {
//         printf("Can pop all the %d elements entered by you",Noofpops);
//         for (int k = 0; k< Noofpops; k++)
//         {
//             Top=pop_operation(Array,Maximumsizeofarray,Numberofelementsinarray,Top);
//         }
        
//     }
//     display(Array,Top);
//     free(Array);
//     free(Top);
//     return 0;
// }

//IMPLEMENTATION OF PUSH OPERATION IN STACK USING ARRAYS

#include<stdio.h>
#include<stdlib.h>

int *push_operation(int *array,int maxsizeofarray,int numberofelementsinarray,int *top,int data)
{
    if(*top==(maxsizeofarray-1))
    {
        printf("Stack Overflow");
        return top;
    }
    else
    {
        *top=*top+1;
        array[*top]=data;
        return top;
    }

}
void display(int *array,int *top,int maxsizeofarray)
{
    if(*top==maxsizeofarray-1)
    {
        printf("The stack is full");
        for(int i=0;i<*top;i++)
        {
        printf("%d",array[i]);
        }
    }
    else
    {
    printf("The Resultant stack is:");
    for(int j=0;j<=*top;j++)
    {
        printf("%d",array[j]);
    }
    }
}

int main(void)
{
    int *Array,*Top;
    int Maximumsizeofarray,Numberofelementsinarray, Noofpushes,Intialvalue,Datatopush;
    printf("Enter the maximum size of the array:");
    scanf("%d",&Maximumsizeofarray);
    Array=(int *)malloc(Maximumsizeofarray*sizeof(int));
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
    printf("Enter the number of elements you want to insert in the array:");
    scanf("%d",&Numberofelementsinarray);
    for(int i=0;i<Numberofelementsinarray;i++)
    {
        printf("Enter the element at index %d:",i);
        scanf("%d",&Array[i]);
        *Top=*Top+1;//This is similar to push operation but its done for the array  here in the driver code instead of the function
    }
    printf("Enter the number of elements you want to push into the the stack:");
    scanf("%d",&Noofpushes);
    if(Noofpushes+Numberofelementsinarray>=Maximumsizeofarray)
    {
        printf("Can only perform %d pushes",Maximumsizeofarray-Numberofelementsinarray);
        for(int j=0;j<Maximumsizeofarray-Numberofelementsinarray;j++)
        {
            printf("Enter the data to push");
            scanf("%d",&Datatopush);
           Top=push_operation(Array,Maximumsizeofarray,Numberofelementsinarray,Top,Datatopush);
        }

    }
    else if(Noofpushes+Numberofelementsinarray<Maximumsizeofarray)
    {
        printf("Can push all the %d elements entered by you",Noofpushes);
        for (int k = 0; k< Noofpushes; k++)
        {
            printf("Enter the data to push");
            scanf("%d",&Datatopush);
            Top=push_operation(Array,Maximumsizeofarray,Numberofelementsinarray,Top,Datatopush);
        }
        
    }
    display(Array,Top,Maximumsizeofarray);
    free(Array);
    free(Top);
    return 0;

}
