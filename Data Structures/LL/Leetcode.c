/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int nodecount(struct node *start)
{
    struct node *p;
    p = start;
    int nodecount = 0; // Initialize nodecount to 0

    while (p != NULL)
    {
        nodecount++; // Increment nodecount for each node
        p = p->next;
    }

    return nodecount; // Return the final count
}


struct node *getnode_atx(struct node *start, int x)
{
    struct node *p;
    p = start;
    int count;
    count = nodecount(start);

    if (count < x || x <= 0)
    {
        printf("The node does not exist\n");
        return NULL; // Return NULL to indicate that the requested node doesn't exist
    }
    else
    {
        for (int i = 1; i < x; i++) // Start the loop at 1
        {
            p = p->next;
        }
        return p;
    }
}

struct ListNode* swapNodes(struct ListNode* head, int k){

    struct node *p,*node_a,*node_b;
    int data1;
    int total;
    total=nodecount(head);
    p=head;
    node_a=getnode_atx(head,k);
    node_b=getnode_atx(head,(total-k)+1);
    data1=node_a->data;
    node_a->data=node_b->data;
    node_b->data=data1;
    return p;



}