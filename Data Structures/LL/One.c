//SINGLY LINKED LIST

//ONE

#include<stdio.h>
#include<stdlib.h>

//CREATE A NODE
struct node
{
    int data;
    struct node *next;

};

//CREATING A FUNCION CALLED GETNODE

struct node *getnode(int data)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->next=NULL;
    return p;

}

//DISPLAY FUNCTION
void display(struct node *start)
{
    struct node *p;
    p=start;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}


//CREATING 2 NODES IN MAin FUNCTION
int main(void)
{
  struct node *a,*b,*c;
  a=getnode(1); //get node is a function which is used to create a node dynamically
  b=getnode(13);
  c=getnode(5);
  a->next=b;
  b->next=c;
  c->next=NULL;

  printf("%d\n",a->data);
  printf("%d\n",b->data);
  printf("%d\n",c->data);
  printf("%p\n",a->next);
  printf("%p\n",b->next);
  printf("%p\n",c->next);


  //START POINTER TO DISPLAY THE LINKED LIST

  struct node *start;
  start=a;
  while(start!=NULL)
  {
    printf("%d\n",start->data);
    start=start->next;

  }

  display(a);//DISPLAYS THE LINKED LIST

  //ACCESSING WITHOUT USING LOOP
  printf("%d\n",a->data);//1
  printf("%d\n",a->next->data);//13
  printf("%d\n",a->next->next->data);//5
  printf("%d\n",a->next->next->next->data);//GARBAGE VALUE or SEGMENTATION FAULT

  return 0;




}



