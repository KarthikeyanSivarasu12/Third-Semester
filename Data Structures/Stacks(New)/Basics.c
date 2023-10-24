// //IMPLEMENTATION OF BASIC OPERATIONS IN STACKS USING ARRAYS

// //PUSH OPERATION

// #include<stdio.h>
// #include<stdlib.h>

// int* pushoperation(int *array,int maxsizeofarray,int noofelementsinarray,int *top,int datatopush)
// {
//     if(*top==(maxsizeofarray-1))
//     {
//         printf("Stack Overflow");
//         return top;
//     }
//     else
//     {
//        array[++(*top)]=datatopush;
//        return top;//Here we return the updated value of top which is incremented by 1 and
//        //  the return type is int* because we are returning the address of the top variable which is of type int
//     }

//     void display(int *array,int *top)
//     {
//         for(int k=0;k<top;k++)
//         {
//             printf("%d",array[k]);
//         }
//     }
// }

// int main(void)
// {
//     int maxsize,noofelements,datainarray,noofpushes,*Array,*top,datainstack,*newtop;
//     newtop=(int*)malloc(sizeof(int));
//     top=newtop;
//     *top=-1;
//     printf("Enter the maximum size of array to be dynamically created:");
//     scanf("%d",&maxsize);
//     Array=(int*)malloc(maxsize*sizeof(int));
//     if(Array==NULL)
//     {
//         printf("Memory allocation failed");
//         return 1;
//     }
//     printf("Number of elements for the array to intially have before push operation:");
//     scanf("%d",&noofelements);
//     for(int i=0;i<noofelements;i++)
//     {
//         printf("Enter the element at index %d",i);
//         scanf("%d",&datainarray);
//         Array[i]=datainarray;
//     }

//     printf("No of elements to push into the array:");
//     scanf("%d",&noofpushes);
//     if(noofelements+noofpushes>maxsize)
//     {

//         printf("Could only push %d elements\n",maxsize-noofelements);
//         int count=noofelements;
//         for(int i=0;i<(maxsize-noofelements);i++)
//         {
//             printf("Enter the data to push:");
//             scanf("%d",&datainstack);
//             newtop=pushoperation(Array,maxsize,noofelements,top,datainstack);
//             count++;
            
//         }
//         noofelements=count;

//     }
//     else
//     {
//         printf("Can push all the %d elements\n",noofpushes);
//         int count=noofelements;
//         for(int j=0;j<noofpushes;j++)
//         {
//             printf("Enter the data to push:");
//             scanf("%d",&datainstack);
//             newtop=pushoperation(Array,maxsize,noofelements,top,datainstack);
//             count++;
//         }
//         noofelements=count;
//     }
//     free(Array);
//     free(newtop);
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>

int top = -1;

int pushoperation(int *array, int maxsizeofarray, int noofelementsinarray, int top, int datatopush) {
    if (top == (maxsizeofarray - 1)) {
        printf("Stack Overflow\n");
        return top;
    } else {
        array[++top] = datatopush;
        return top;
    }
}

void display(int *array, int top) {
    for (int k = 0; k <= top; k++) {
        printf("%d\n", array[k]);
    }
}

int main(void) {
    int maxsize, noofelements, datainarray, noofpushes, *Array, datainstack, newtop;
    newtop = top;
    printf("Enter the maximum size of array to be dynamically created: ");
    scanf("%d", &maxsize);
    Array = (int *)malloc(maxsize * sizeof(int));
    if (Array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Number of elements for the array to initially have before push operation: ");
    scanf("%d", &noofelements);
    for (int i = 0; i < noofelements; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &datainarray);
        Array[i] = datainarray;
    }

    printf("No of elements to push into the array: ");
    scanf("%d", &noofpushes);
    if (noofelements + noofpushes > maxsize) {
        printf("Could only push %d elements\n", maxsize - noofelements);
        int count = noofelements;
        for (int i = 0; i < (maxsize - noofelements); i++) {
            printf("Enter the data to push: ");
            scanf("%d", &datainstack);
            newtop = pushoperation(Array, maxsize, noofelements, top, datainstack);
            count++;
        }
        noofelements = count;
    } else {
        printf("Can push all the %d elements\n", noofpushes);
        int count = noofelements;
        for (int j = 0; j < noofpushes; j++) {
            printf("Enter the data to push: ");
            scanf("%d", &datainstack);
            newtop = pushoperation(Array, maxsize, noofelements, top, datainstack);
            count++;
        }
        noofelements = count;
    }
    display(Array, newtop);
    free(Array);
    return 0;
}
