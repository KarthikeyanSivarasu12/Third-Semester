//LINKED LIST

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

//CREATING 2 NODES IN MAin FUNCTION
int main(void)
{
  struct node *a,*b,*c;
  a=getnode(1); //get node is a function which is used to create a node dynamically
  b=getnode(13);
  c=getnode(5);

  printf(a->data);
  printf(a->next);
  printf(b->data);
  printf(b->next);
  printf(c->data);
  printf(c->next);
  return 0;




}