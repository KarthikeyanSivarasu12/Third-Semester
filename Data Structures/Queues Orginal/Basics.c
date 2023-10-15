//IMPLEMENTATION OF QUEUE USING ARRAY

#include<stdio.h>
#include<stdlib.h>

void enqueue(int *array,int sizeofarray,int countofelemenets,int *front,int *rear,int data)
{
    if(countofelemenets==0||(*front==-1&&*rear==-1))
    {
      *front=0;
      *rear=0;
      array[*front]=data;
      countofelemenets++;
      return;
    }

    else if(countofelemenets==sizeofarray||(*front==0&&*rear==sizeofarray-1)||*rear==(sizeofarray-1))
    {
        printf("Cannot insert more elements\n");
        return;
    }
   else
   {
        *rear=(*rear+1)%sizeofarray;
        array[*rear]=data;
        countofelemenets++;
        return;
   }


}

int main(void)
{
  int *array1;
  int sizeofarray1;
  int numberofelements;
  int data,data1;
  printf("Enter the size of the array\n");
  scanf("%d",&sizeofarray1);

  array1=(int *)malloc(sizeof(int)*sizeofarray1);
  if(array1==NULL)
  {
      printf("Memory not available\n");
     return 0;
  }
  printf("Enter the number of elements you want to insert\n");
  scanf("%d",&numberofelements);
  for(int i=0;i<numberofelements;i++)
  {
      printf("Enter the data you want to insert\n");
      scanf("%d",&data);
      array1[i]=data;
}
int front=-1;
int rear=-1;
int countofelements=0;
int n_enqueue;
printf("Enter the number of elements you want to enqueue\n");
scanf("%d",&n_enqueue);
if(numberofelements+n_enqueue>sizeofarray1)
{
    printf("Cannot insert more elements\n");
    return 0;
}
else
{
    for(int i=0;i<n_enqueue;i++)
    {
      
        printf("Enter the data you want to enqueue\n");
        scanf("%d",&data1);
        enqueue(array1,sizeofarray1,countofelements,&front,&rear,data1);
    }
}

for(int i=0;i<numberofelements+n_enqueue;i++)
{
    printf("%d\n",array1[i]);
}

return 0;
}