#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int *insert_in_bst(int *array, int data_to_insert, int index) {
    if (array[index] == -1) {
        array[index] = data_to_insert;
        return array;
    } else {
        if (data_to_insert < array[index]) {
            array[2 * index + 1] = *insert_in_bst(&array[2 * index + 1], data_to_insert, 2 * index + 1);
        } else if (data_to_insert > array[index]) {
            array[2 * index + 2] = *insert_in_bst(&array[2 * index + 2], data_to_insert, 2 * index + 2);
        }
    }
    return array;
}
// Function to delete a node with a given key from the BST represented as an array
int* deleteNode(int arr[], int size, int key, int index) {
    if (index >= size || arr[index] == -1) return arr;

    if (key < arr[index]) {
        arr[index] = *deleteNode(arr, size, key, leftChild(index));
    } else if (key > arr[index]) {
        arr[index] = *deleteNode(arr, size, key, rightChild(index));
    } else {
        if (arr[leftChild(index)] == -1) {
            int* temp = &arr[rightChild(index)];
            arr[index] = -1;  // Mark the node as deleted
            return temp;
        } else if (arr[rightChild(index)] == -1) {
            int* temp = &arr[leftChild(index)];
            arr[index] = -1;  // Mark the node as deleted
            return temp;
        } else {
            int tempIndex = findMax(arr, leftChild(index), size);
            arr[index] = arr[tempIndex];
            arr[leftChild(index)] = *deleteNode(arr, size, arr[tempIndex], leftChild(index));
        }
    }
    return &arr[index];
}

// Function to print the array-based representation of the BST
void printBST(int arr[], int size, int index) {
    if (index < size && arr[index] != -1) {
        printBST(arr, size, leftChild(index));
        printf("%d ", arr[index]);
        printBST(arr, size, rightChild(index));
    }
}


void printTree(int *array, int index, int level, int size)
{

    if (index >= size || array[index] == 0)
    {
        return;
    }

    printTree(array, 2 * index + 2, level + 1, size); // Right child

    for (int i = 0; i < level; i++)
    {
        printf("    ");
    }
    printf("%d\n", array[index]); // Current node

    printTree(array, 2 * index + 1, level + 1, size); // Left child
}

int main(void)
{
    int *Array,Maxlevels,Datatoinsert,Index,Numberofelementstoinsert,Size;
    Index=0;
    printf("Enter the maximum number of levels in the binary tree");
    scanf("%d",&Maxlevels);
    Size=(pow(2,Maxlevels)-1);
    Array=(int *)calloc(Size,sizeof(int));
    printf("Enter the number of elements to insert in the binary tree");
    scanf("%d",&Numberofelementstoinsert);
    if(Numberofelementstoinsert>(pow(2,Maxlevels)-1))
    {
        printf("The number of elements to insert is greater than the maximum number of elements that can be inserted in the binary tree");
        return 0;
    }
    else
    {

        for(int i=0;i<Numberofelementstoinsert;i++)
        {
            printf("Enter the element to insert in the binary tree");
            scanf("%d",&Datatoinsert);
            Array=insert_in_bst(Array,Datatoinsert,Index);
        }
    }
    printTree(Array,0,0,Size);
    return 0;
}