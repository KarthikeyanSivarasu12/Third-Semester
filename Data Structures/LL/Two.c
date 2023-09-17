// //INSERT A NODE AT THE BEGINNING

// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// struct node *getnode(int data)
// {
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=data;
//     p->next=NULL;
//     return p;
// }

// void display(struct node *start)

// {
//     struct node *p2;
//     p2=start;
//     while(p2!=NULL)
//     {
//         printf("%d\n",p2->data);
//         p2=p2->next;
//     }

// }

// struct node *insert_beg(struct node *start,int value)
// {
//     struct node *new;
//     new=getnode(value);
//     new->next=start;
//     return new;

// }

// int main (void)
// {
//   struct node *a,*b,*c;
//   a=getnode(1); //get node is a function which is used to create a node dynamically
//   b=getnode(13);
//   c=getnode(5);
//   a->next=b;
//   b->next=c;
//   c->next=NULL;

//   //INSERTING THE NEW NODE AT BEGINNING
//   //We can also create a function to insert at the beginning

//   struct node *new;
//   int value;
//   printf("Enter the data part of new node:");
//   scanf("%d",&value);
//   new=getnode(value);
//   new->next=a;
//   display(new);

//   //INSERTING USING THE FUNCTION
//   insert_beg(a,value);
//   display(new);

//   return 0;



// }


// //INSERTING A NODE AT THE END 
// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// struct node *getnode(int data)
// {
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=data;
//     p->next=NULL;
//     return p;
// }

// void display(struct node *start)

// {
//     struct node *p2;
//     p2=start;
//     while(p2!=NULL)
//     {
//         printf("%d\n",p2->data);
//         p2=p2->next;
//     }

// }

// // struct node *insert_end(struct node *start,int value)
// // {
// //     struct node *new,*start1;
// //     start1=start;
// //     new=getnode(value);
// //     while((start->next)!=NULL)
// //     {
// //         start=start->next;

// //     }
// //     start->next=new;
// //     start=start1;
// //     return start;
// // }

// struct node *insert_end(struct node *start, int value)
// {
//     struct node *newNode, *currentNode;
//     newNode = getnode(value);
    
//     if (start == NULL)
//     {
//         // If the list is empty, make the new node the start
//         start = newNode;
//     }
//     else
//     {
//         currentNode = start;
//         while (currentNode->next != NULL)
//         {
//             currentNode = currentNode->next;
//         }
//         currentNode->next = newNode;
//     }
    
//     return start;
// }


// int main(void)
// {
//   struct node *a,*b,*c;
//   a=getnode(1); //get node is a function which is used to create a node dynamically
//   b=getnode(13);
//   c=getnode(5);
//   a->next=b;
//   b->next=c;
//   c->next=NULL; 

//   //INSERTING AT THE END WITHOUT FUNCTION
//   //Remember here we know the last node's pointer 
//   struct node *new;
//   int value;
//   printf("Enter the data part of new node:");
//   scanf("%d",&value);
//   new=getnode(value);
//   c->next=new;
//   display(a);



//  //INSERTING USING FUNCTION
//   a = insert_end(a, value); // Update 'a' with the new pointer returned by insert_end
//   display(a);




// }


// //INSERT N NODES AT THE BEGINNING

// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// //CREATING A FUNCION CALLED GETNODE

// struct node *getnode(int data)
// {
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=data;
//     p->next=NULL;
//     return p;

// }

// //DISPLAY FUNCTION
// void display(struct node *start)
// {
//     struct node *p;
//     p=start;
//     while(p!=NULL)
//     {
//         printf("%d\n",p->data);
//         p=p->next;
//     }
// }

// struct node *insert_nbeg(struct node *start,int n)
// {
//     struct node *p,*temp;
//     int value;
//     temp=start;

//     for(int i=0;i<n;i++)
//     {

//         printf("Enter the data part of the new node:");
//         scanf("%d",&value);
//         p=getnode(value);
//         p->next=temp;
//         temp=p;

//     }

//     return temp;
// }

// int main(void)
// {
//     struct node *a,*b,*c;
//     a=getnode(1);
//     b=getnode(13);
//     c=getnode(5);
//     a->next=b;
//     b->next=c;
//     c->next=NULL;

//     int n;
//     printf("Enter the number of nodes to insert at the beginning:");
//     scanf("%d",&n);
    
//     a=insert_nbeg(a,n);
//     display(a);
//     return 0;


// }


// //INSERT N NODES AT THE END 

// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// //CREATING A FUNCION CALLED GETNODE

// struct node *getnode(int data)
// {
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=data;
//     p->next=NULL;
//     return p;

// }

// //DISPLAY FUNCTION
// void display(struct node *start)
// {
//     struct node *p;
//     p=start;
//     while(p!=NULL)
//     {
//         printf("%d\n",p->data);
//         p=p->next;
//     }
// }

// struct node *insert_nend(struct node *start,int n)
// {
//     struct node *currentnode,*new;
//     int value;
//     currentnode=start;
//     while((currentnode->next)!=NULL)
//     {

//         currentnode=currentnode->next;

//     }

//     for(int i=0;i<n;i++)
//     {
//         printf("Enter the data part of the new node:");
//         scanf("%d",&value);
//         new=getnode(value);
//         currentnode->next=new;
//         currentnode=new;


//     }

//     return start;


// }

// int main(void)
// {
// struct node *a,*b,*c;
//   a=getnode(1); //get node is a function which is used to create a node dynamically
//   b=getnode(13);
//   c=getnode(5);
//   a->next=b;
//   b->next=c;
//   c->next=NULL;

//   int n;
//   printf("Enter the number of nodes to be inserted at the end:");
//   scanf("%d",&n);
//   a=insert_nend(a,n);
//   display(a);
//   return 0;

  

//   }


// //INSERT AFTER NODE X

// #include<stdio.h>
// #include<stdlib.h>

// //CREATE A NODE 
// struct node
// {
//     int data;
//     struct node *next;

// };

// //CREATING A FUNCION CALLED GETNODE

// struct node *getnode(int data)
// {
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=data;
//     p->next=NULL;
//     return p;

// }

// //DISPLAY FUNCTION
// void display(struct node *start)
// {
//     struct node *p;
//     p=start;
//     while(p!=NULL)
//     {
//         printf("%d\n",p->data);
//         p=p->next;
//     }
// }

// struct node *getnodeatx(struct node *start,int x)
// {
//     struct node*traverse;
//     traverse=start;
//     for(int i=0;i<x-1;i++)
//     {
//        traverse=traverse->next;

//     }

//     return traverse;

// }


// struct node *insert_nafterx(struct node *start,int n,int x)
// {
//     struct node *currentnode,*new,*oneafterx;
//     int value;
//     currentnode=getnodeatx(start,x);
//     oneafterx=currentnode->next;
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter the data part for the new node:");
//         scanf("%d",&value);
//         new=getnode(value);
//         currentnode->next=new;
//         new->next=oneafterx;
//         currentnode=new;

//     }

//     return start;



// }

// int main(void)
// {
//   struct node *a,*b,*c;
//   a=getnode(1); //get node is a function which is used to create a node dynamically
//   b=getnode(13);
//   c=getnode(5);
//   a->next=b;
//   b->next=c;
//   c->next=NULL;

//   int n,x;
//   printf("Enter the node number after which you want to insert the new node:");
//   scanf("%d",&n);
//   printf("Enter the position after which you need to enter %d nodes",n);
//   scanf("%d",&x);

//   a=insert_nafterx(a,n,x);
//   display(a);
//   return 0;



// }


// //DELETE A NODE AT START AND AT END 

// #include<stdio.h>
// #include<stdlib.h>

// //CREATE A NODE 
// struct node
// {
//     int data;
//     struct node *next;

// };

// //CREATING A FUNCION CALLED GETNODE

// struct node *getnode(int data)
// {
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=data;
//     p->next=NULL;
//     return p;

// }

// //DISPLAY FUNCTION
// void display(struct node *start)
// {
//     struct node *p;
//     p=start;
//     while(p!=NULL)
//     {
//         printf("%d\n",p->data);
//         p=p->next;
//     }
// }

// struct node *delete_start(struct node *start)
// {
//     struct node *temp;
//     temp=start;
//     start=start->next;
//     temp->next=NULL;
//     free(temp);
//     return start;


// }

// struct node *delete_end(struct node *start)
// {
//     if (start == NULL) {
//         printf("List is empty. Cannot delete from an empty list.\n");
//         return NULL;
//     }

//     struct node *currentnode, *onebeforelast;
//     currentnode = start;

//     if (currentnode->next == NULL) {
//         // If there's only one node in the list, delete it.
//         free(currentnode);
//         return NULL;
//     }

//     while (currentnode->next->next != NULL)
//     {
//         currentnode = currentnode->next;
//     }

//     onebeforelast = currentnode;
//     currentnode = currentnode->next;
//     onebeforelast->next = NULL;
//     free(currentnode);

//     return start;
// }



// int main(void)
// {
//   struct node *a,*b,*c;
//   a=getnode(1); //get node is a function which is used to create a node dynamically
//   b=getnode(13);
//   c=getnode(5);
//   a->next=b;
//   b->next=c;
//   c->next=NULL;

// //   a=delete_start(a);
// //   display(a);

//   a=delete_end(a);
//   display(a);
//   return 0;

  


// }


// //DELETE AFTER NODE X


// #include<stdio.h>
// #include<stdlib.h>

// //CREATE A NODE 
// struct node
// {
//     int data;
//     struct node *next;

// };

// //CREATING A FUNCION CALLED GETNODE

// struct node *getnode(int data)
// {
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=data;
//     p->next=NULL;
//     return p;

// }

// //DISPLAY FUNCTION
// void display(struct node *start)
// {
//     struct node *p;
//     p=start;
//     while(p!=NULL)
//     {
//         printf("%d\n",p->data);
//         p=p->next;
//     }


// }

// struct node *create_LL(int n)
// {
//     struct node *new, *start = NULL, *temp = NULL;
//     int value;

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the data part of the node:");
//         scanf("%d", &value);
//         new = getnode(value);
        
//         if (i == 0)
//         {
//             start = new;
//             temp = start;
//         }
//         else
//         {
//             temp->next = new;
//             temp = new;
//         }
//     }
//     return start;
// }


// struct node *getnode_atx(struct node *start,int x)
// {
//     struct node *currentnode;
//     currentnode=start;
//     for(int i=1;i<x;i++)
//     {
//         currentnode=currentnode->next;
//     }
//     return currentnode;

// }


// struct node *delete_afterx(struct node *start,int x)
// {
//   struct node *p,*temp,*start1;
//   start1=start;
//   p=getnode_atx(start,x);
  
//   temp=p;
//   p=p->next;
//   temp->next=NULL;
//   free(p);
//   return start1;


// }


// int main(void)
// {
//   int n;
//   struct node *start;

//   printf("Enter the no of nodes to be created:");
//   scanf("%d",&n);
//   start=create_LL(n);

//   int x;
//   printf("Enter the node number after which you want to delete:");
//   scanf("%d",&x);
  
//   start=delete_afterx(start,x);
//   display(start);
//   return 0;



// }

// //INSERT BEFORE NODE X
// #include<stdio.h>
// #include<stdlib.h>

// //CREATE A NODE 


// struct node
// {
//     int data;
//     struct node *next;

// };

// //CREATING A FUNCION CALLED GETNODE

// struct node *getnode(int data)
// {
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=data;
//     p->next=NULL;
//     return p;

// }

// //DISPLAY FUNCTION
// void display(struct node *start)
// {
//     struct node *p;
//     p=start;
//     while(p!=NULL)
//     {
//         printf("%d\n",p->data);
//         p=p->next;
//     }


// }

// struct node *create_LL(int n)
// {
//     struct node *new, *start = NULL, *temp = NULL;
//     int value;

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the data part of the node:");
//         scanf("%d", &value);
//         new = getnode(value);
        
//         if (i == 0)
//         {
//             start = new;
//             temp = start;
//         }
//         else
//         {
//             temp->next = new;
//             temp = new;
//         }
//     }
//     return start;
// }

// struct node *getnode_atx(struct node *start,int x)
// {
//     struct node *currentnode;
//     currentnode=start;
//     for(int i=1;i<x;i++)
//     {
//         currentnode=currentnode->next;
//     }
//     return currentnode;

// }

// struct node *insert_nbeforex(struct node *start,int n,int x)
// {
//     struct node *p,*onebeforex,*new,*new1,*start1;
//     start1=start;
//     int value;
//     p=getnode_atx(start,x);
//     onebeforex=getnode_atx(start,x-1);
//     new1=p;
    
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter the data part of new node to be inserted:");
//         scanf("%d",&value);
//         new=getnode(value);
//         onebeforex->next=new;
//         new->next=new1;
//         new1=new;
//     }
//    return start1;
// }





// int main(void)
// {
//   int n;
//   struct node *start;

//   printf("Enter the no of nodes to be created:");
//   scanf("%d",&n);
//   start=create_LL(n);

//   int a,x;
//   printf("Enetr the number of nodes to be inserted :");
//   scanf("%d",&a);
//   printf("Enter the node number before which the new nodes have to be inserted:");
//   scanf("%d",&x);

//   start=insert_nbeforex(start,a,x);
//   display(start);
//   return 0;




// }


// //DELETE N NODES BEFORE NODE X

// #include<stdio.h>
// #include<stdlib.h>

// //CREATE A NODE 


// struct node
// {
//     int data;
//     struct node *next;

// };

// //CREATING A FUNCION CALLED GETNODE

// struct node *getnode(int data)
// {
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=data;
//     p->next=NULL;
//     return p;

// }

// //DISPLAY FUNCTION
// void display(struct node *start)
// {
//     struct node *p;
//     p=start;
//     while(p!=NULL)
//     {
//         printf("%d\n",p->data);
//         p=p->next;
//     }


// }

// struct node *create_LL(int n)
// {
//     struct node *new, *start = NULL, *temp = NULL;
//     int value;

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the data part of the node:");
//         scanf("%d", &value);
//         new = getnode(value);
        
//         if (i == 0)
//         {
//             start = new;
//             temp = start;
//         }
//         else
//         {
//             temp->next = new;
//             temp = new;
//         }
//     }
//     return start;
// }

// struct node *getnode_atx(struct node *start,int x)
// {
//     struct node *currentnode;
//     currentnode=start;
//     for(int i=1;i<x;i++)
//     {
//         currentnode=currentnode->next;
//     }
//     return currentnode;

// }

// struct node *delete_nbeforex(struct node *start,int n,int x)
// {
//     struct node *p,*new,*start1;
//     start1=start;
//     p=getnode_atx(start,x);
//     int z=(x-(n+1));
//     if (z < 1) {
//         // If z is less than 1, we can't delete nodes before the start of the list
//         return start1;
//     }

//     new=getnode_atx(start,z);
//     new->next=p;
//     return start1;

// }



// int main(void)
// {
//   int n;
//   struct node *start;

//   printf("Enter the no of nodes to be created:");
//   scanf("%d",&n);
//   start=create_LL(n);

//   int a,x;
//   printf("Enetr the number of nodes to be deleted :");
//   scanf("%d",&a);
//   printf("Enter the node number before which the  nodes have to be deleted:");
//   scanf("%d",&x);
  
//   start=delete_nbeforex(start,a,x);
//   display(start);
//   return 0;


// }




// //DISPLAY THE LINKED LIST IN AN ORDERLY FASHION ALONG WITH THE ADDRESS OF EACH NODE 

// #include<stdio.h>
// #include<stdlib.h>

// //CREATE A NODE 


// struct node
// {
//     int data;
//     struct node *next;

// };

// //CREATING A FUNCION CALLED GETNODE

// struct node *getnode(int data)
// {
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=data;
//     p->next=NULL;
//     return p;

// }

// //DISPLAY FUNCTION
// void display(struct node *start) {
//     struct node *p = start;
//     int i = 1;
//     while (p != NULL) {
//         printf("The data part of node %d is %d\n", i, p->data);
//         if (p->next != NULL) {
//             printf("The address of node %d is %p\n", i, (void *)p);
//         } else {
//             printf("The address of node %d is NULL\n", i);
//         }
//         printf("\n\n");
//         p = p->next;
//         i++;
//     }
// }


// struct node *create_LL(int n)
// {
//     struct node *new, *start = NULL, *temp = NULL;
//     int value;

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the data part of the node:");
//         scanf("%d", &value);
//         new = getnode(value);
        
//         if (i == 0)
//         {
//             start = new;
//             temp = start;
//         }
//         else
//         {
//             temp->next = new;
//             temp = new;
//         }
//     }

//     return start;
// }

// int main(void)
// {

//   int n;
//   struct node *start;

//   printf("Enter the no of nodes to be created:");
//   scanf("%d",&n);
//   start=create_LL(n);
//   display(start);
//   return 0;

// }

//SEARCH FOR NODE X
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

struct node *create_LL(int n)
{
    struct node *new, *start = NULL, *temp = NULL;
    int value;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the data part of the node:");
        scanf("%d", &value);
        new = getnode(value);
        
        if (i == 0)
        {
            start = new;
            temp = start;
        }
        else
        {
            temp->next = new;
            temp = new;
        }
    }
    return start;
}

struct node *getnode_atx(struct node *start,int x)
{
    struct node *currentnode;
    currentnode=start;
    for(int i=1;i<x;i++)
    {
        currentnode=currentnode->next;
    }
    return currentnode;

}

int main(void)
{
  int n;
  struct node *start;
  struct node *currentnode;

  printf("Enter the no of nodes to be created:");
  scanf("%d",&n);
  start=create_LL(n);
  int x;
  printf("Enter the node number to search :");
  scanf("%d",&x);

  currentnode=getnode_atx(start,x);
  printf("The data part of node %d is %d",x,currentnode->data);
  printf("The address part of node %d is %p",x,currentnode);
  return 0;
  
}




