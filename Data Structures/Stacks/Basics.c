// //STACK OPERATIONS USING ARRAYS


// //PUSH OPERATION

// #include <stdio.h>
// #include <stdlib.h>

// int push(int *array, int top, int numberOfElements, int data) {
//     if (top == numberOfElements - 1) {
//         printf("Stack Overflow\n");
//         return top;
//     } else {
//         top++;
//         array[top] = data;
//         return top;
//     }
// }

// void print_final(int *arr,int top) {
//     for (int i = 0; i <=top; i++) {
//         printf("%d ", arr[i]); // Added a space here to separate elements.
//     }
//     printf("\n"); // Add a newline at the end for better formatting.
// }

// int main(void) {
//     int *arr;
//     int max, n, top = -1, np;
//     int value;
//     printf("Enter the number of elements for the array to hold:");
//     scanf("%d", &max);
//     arr = (int *)malloc(max * sizeof(int));
//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     printf("Enter the number of elements you want to be inserted in the array:");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         printf("Enter the element at index %d: ", i); // Added a colon and space.
//         scanf("%d", &arr[i]);
//         top++;
//     }
//     printf("Enter the number of elements you want to be pushed into the stack:");
//     scanf("%d", &np);
//     for (int j = 0; j < np; j++) {
//         printf("Enter the value to be inserted: ");
//         scanf("%d", &value);
//         top = push(arr, top, max, value); // Changed n to max to pass the correct size of the array.
//         if (top == max - 1) {
//             printf("Stack is full. Cannot push more elements.\n");
//             break; // Exit the loop if the stack is full.
//         }
//     }

//     printf("Elements in the array: ");
//     print_final(arr,top); // Print the entire array including pushed elements.
//     free(arr); // Free the allocated memory at the end of the program.
//     return 0;
// }



// POP OPERATION

#include <stdio.h>
#include <stdlib.h>

int top = -1; // Initialize top to -1

int pop(int *arr, int numberofelements) {
    int value = -1; // Initialize value to -1
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        value = arr[top];
        top--;
    }
    return value; // Return value, which is either the popped value or -1 for underflow
}

void print_final(int *arr, int top) {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = 0; i <= top; i++) {
        printf("%d ", arr[i]); // Added a space here to separate elements.
    }
    printf("\n"); // Add a newline at the end for better formatting.
}

int main(void) {
    int *arr;
    int max, n, n_pop;
    int value;
    printf("Enter the number of elements for the array to hold:");
    scanf("%d", &max);
    arr = (int *)malloc(max * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the number of elements you want to be inserted in the array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr[i]);
        top++;
    }
    printf("Enter the number of elements you want to be popped from the stack:");
    scanf("%d", &n_pop);
    for (int j = 0; j < n_pop; j++) {
        value = pop(arr, max);
        if (value != -1) {
            printf("The value popped is %d\n", value);
        } else {
            printf("Pop cannot be performed\n");
            break;
        }
    }

    printf("Elements in the array after pop operation: ");
    print_final(arr, top);
    free(arr);
    return 0;
}
