#include<stdio.h>
#include<stdlib.h>


struct node
{
    float coefficient;
    int exponent;
    struct node *next;
}

struct node *getnode(float c,int e)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->coefficient=c;
    p->exponent=e;
    p->next=NULL;
    return p;
}

struct node *create_polynomial(int n)
{
    struct node *start,*new,*temp;
    float val1;
    float val2;


    for(int i=0;i<n;i++)
    {
        printf("Enter the coefficient:");
        scanf("%f",&val1);
        printf("Enter the exponent:");
        scanf("%f",&val2);
        if(i==0)
        {
        new=getnode(val1,val2);
        start=new;
        temp=start;

        }
        else
        {
            temp->next=new;
            temp=new;
        }
    }
}

struct node *sortedpolynomial(struct node *start)
{
    struct node *p,*arr;
    p=start;
    int length;
    while(p!=NULL)
    {
        p=p->next;
        length++
    }
    

    arr=(float*)malloc((length)*sizeof(float));
    for(int i=0;i<length;i++)
    {
        arr[i]=p->data;
        p=p->next;
    }
    

    for(int j=0;j<length;j++)
    {
        for(int k=0;k<length-1-i;k++)
        {
            if(arr[j]<arr[j+1])
            {

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }

    for(int l)
}
