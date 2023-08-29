//INSERTION SORT

#include<stdio.h>
#include<stdlib.h>

void input_array(int *arr, int length)
{
    for (int j = 0; j < length; j++)
    {
        printf("Enter the %dth element:", j + 1);
        scanf("%d", &arr[j]);
    }
}

void insertion_sort(int *arr, int length)
{
    for (int i = 1; i < length; i++)
    {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--)
        {
            // Swap elements using arithmetic operations
            arr[j] = arr[j] + arr[j - 1];
            arr[j - 1] = arr[j] - arr[j - 1];
            arr[j] = arr[j] - arr[j - 1];
        }
    }
}

void print_sorted_array(int *arr, int length)
{
    for (int l = 0; l < length; l++)
    {
        printf("%d ", arr[l]);
    }
    printf("\n");
}

int main(void)
{
    int m;
    printf("Enter the size of the array:");
    scanf("%d", &m);
    int *p = (int *)malloc(m * sizeof(int));
    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    input_array(p, m);
    insertion_sort(p, m);
    print_sorted_array(p, m);
    free(p);
    return 0;
}
