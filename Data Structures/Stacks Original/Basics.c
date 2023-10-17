// //IMPLEMENTATION OF STACKS USING ARRAYS

// #include<stdio.h>
// #include<stdlib.h>


// int * push(int *array,int *top,int maxsize,int numberofelements,int data)
// {
//     if(*top==maxsize-1||numberofelements==maxsize)
//     {
//         printf("Stack overflow");
//         return top;
//     }
//     else
//     {
//         array[++(*top)]=data;
//         return top;
//     }
// }

// void display(int *array,int *top)
// {
//     for(int i=0;i<=*top;i++)
//     {
//         printf("%d",array[i]);
//     }
// }

// int main(void)
// {
//     int Numberofelements,*Array,Data,Maxsize,Npushes,*Top;
//     Top=(int*)malloc(sizeof(int));
//     *Top=-1;
    
//     printf("Enter the maximum size of the array:");
//     scanf("%d",&Maxsize);
//     Array=(int*)malloc(Maxsize*sizeof(int));
//     if(Array==NULL)
//     {
//         printf("Memory allocation failed");
//         return 1;
//     }
//     printf("Enter the number of elements to be inserted in array:");
//     scanf("%d",&Numberofelements);

//     for(int i=0;i<Numberofelements;i++)
//     {
//         printf("Enter the element at index %d",i);
//         scanf("%d",&Data);
//         Array[i]=Data;
//         *Top=*Top+1;
//     }
//     printf("Enter the number of pushes to be performed:");
//     scanf("%d",&Npushes);
//     while(Npushes+Numberofelements>Maxsize)
//     {
//         printf("Stack overflow");
//         printf("Enter a correct value:");
//         scanf("%d",&Npushes);
//     }
//     if(Npushes==0)
//     {
//         printf("No pushes to be performed\n");
//         display(Array,Top);
//         return 0;
//     }
//     else
//     {

//     for(int j=0;j<Npushes;j++)
//     {
//           int DatatoPush;
//           printf("Enter the data to be pushed:");
//           scanf("%d",&DatatoPush);
//           Top=push(Array,Top,Maxsize,Numberofelements,DatatoPush);

//     }

//     if(*Top==Maxsize-1)
//     {
//         printf("Stack is full and the value of the top is Maxsize-1");
//         return 1;
//     }
//     else if(*Top=-1)
//     {
//         printf("The stack is empty and the value of top is -1")
//         return 1;
//     }
//     else
//     {
//         display(Array,Top);
//     }
//     }
    
//     free(Array);
//     free(Top);
//     return 0;
// }



//POP OPERATION
#include<stdio.h>
#include<stdlib.h>


int *pop(int *array,int *top,int maxsize,int numberofelements)
{
    if(*top==-1)
    {
        printf("Stack Underflow");
        return top;
    }
    else
    {
       printf("The element popped is:%d\n",array[*top]);
       *top=*top-1;
       return top;
    }
}

void display(int *array,int *top)
{
    printf("The resultant array after popping is:");
    for(int i=0;i<=*top;i++)
    {
        printf(" %d ",array[i]);
    }
}


int main(void)
{
    int Numberofelements,*Array,Data,Maxsize,Npops,*Top;
    Top=(int*)malloc(sizeof(int));
    *Top=-1;
    
    printf("Enter the maximum size of the array:");
    scanf("%d",&Maxsize);
    Array=(int*)malloc(Maxsize*sizeof(int));
    if(Array==NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    printf("Enter the number of elements to be inserted in array:");
    scanf("%d",&Numberofelements);

    for(int i=0;i<Numberofelements;i++)
    {
        printf("Enter the element at index:%d",i);
        scanf("%d",&Data);
        Array[i]=Data;
        *Top=*Top+1;
    }
    printf("Enter the number of pops to be performed:");
    scanf("%d",&Npops);
    while(Npops>Numberofelements)
    {
        printf("Stack underflow");
        printf("Enter a correct value:");
        scanf("%d",&Npops);
    }

    if(Npops==0)
    {
        printf("No pops to be performed\n");
        display(Array,Top);
        return 0;
    }
    else
    {

    for(int j=0;j<Npops;j++)
    {
    
          Top=pop(Array,Top,Maxsize,Numberofelements);

    }

    if(*Top==-1)
    {
        printf("The stack is empty and the value of top is -1");
        
        return 1;
    }
    else if(*Top==Maxsize-1)
    {
       printf("Stack is full and the value of the top is Maxsize-1");
       return 1;
    }

    display(Array,Top);
    }
   
    
    
    free(Array);
    free(Top);
    return 0;
}


