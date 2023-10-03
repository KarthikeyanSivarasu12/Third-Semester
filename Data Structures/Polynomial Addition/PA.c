//POLYNOMIAL ADDITION

#include<stdio.h>
#include<stdlib.h>

struct node
{
    float coeffecient;
    float exponent;
    struct node *next;
};

struct node *getnode(float c, float e)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->coeffecient = c;
    p->exponent = e;
    p->next = NULL;
    return p;
}

struct node *createpolynomial(int n)
{
    struct node *new, *start, *temp;
    float a, b;
    for (int i = 0; i < n; i++)
    {

        printf("Enter the coefficient of %d term:", i + 1);
        scanf("%f", &a);
        printf("Enter the exponent of %d term:", i + 1);
        scanf("%f", &b);
        new = getnode(a, b);
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

int nodecount(struct node *start)
{
    struct node *temp;
    int count = 0;
    temp = start;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("The number of nodes in the list is %d\n", count);
    return count;
}

struct node *bubblesort(struct node *start)
{

    struct node *p;
    float *arr, temp;
    int length;
    p = start;
    length = nodecount(p);
    arr = (float *)malloc(length * sizeof(float));
    for (int i = 0; i < length; i++)
    {
        arr[i] = p->exponent;
        p = p->next;
    }
    p = start;

    for (int j = 0; j < length; j++)
    {
        for (int k = 0; k < length - 1 - j; k++)
        {
            if (arr[k] < arr[k + 1])
            {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    for (int l = 0; l < length; l++)
    {
        p->exponent= arr[l];
        p = p->next;
    }

    free(arr); // Free the allocated memory for the array

    return start;
}

struct node *polynomial_addition(struct node *start1, struct node *start2)
{
    struct node *newLL, *p1, *p2, *temp, *start;
    p1 = start1;
    p2 = start2;
    float sum;
    float exponent1;
    int i = 0;
    while (p1 != NULL || p2 != NULL)
    {
        if (p1->exponent == p2->exponent)
        {
            sum = (p1->coeffecient) + (p2->coeffecient);
            exponent1 = p1->exponent;
            newLL = getnode(sum, exponent1);
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->exponent > p2->exponent)
        {
            sum = p1->coeffecient;
            exponent1 = p1->exponent;
            newLL = getnode(sum, exponent1);
            p1 = p1->next;
        }
        else if (p2->exponent > p1->exponent)
        {
            sum = p2->coeffecient;
            exponent1 = p2->exponent;
            newLL = getnode(sum, exponent1);
            p2 = p2->next;
        }

        if (i == 0)
        {
            start = newLL;
            temp = start;
        }
        else
        {
            temp->next = newLL;
            temp = newLL;
        }

        i++;
    }

    if (p1 == NULL)
    {
        temp->next = p2;
    }
    else if (p2 == NULL)
    {
        temp->next = p1;
    }

    return start;
}

void display(struct node *start)
{
    struct node *temp;
    temp = start;
    while (temp != NULL)
    {
        printf("%fX^%f +", temp->coeffecient, temp->exponent);
        temp = temp->next;
    }
    printf("\n");
}

int main(void)
{
    struct node *start1, *start2, *start3;
    int n1, n2;
    printf("Enter the number of terms in the 1st polynomial:");
    scanf("%d", &n1);
    printf("Enter the number of terms in the 2nd polynomial:");
    scanf("%d", &n2);
    start1 = createpolynomial(n1);
    start2 = createpolynomial(n2);
    start1 = bubblesort(start1);
    start2 = bubblesort(start2);
    start3 = polynomial_addition(start1, start2);
    printf("Resultant Polynomial: ");
    display(start3);

    // Free allocated memory
    free(start1);
    free(start2);
    free(start3);

    return 0;
}
