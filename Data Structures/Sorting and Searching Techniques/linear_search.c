#include <stdio.h>
#include <stdlib.h>

int linear_search(int *arr, int length, int n) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == n) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

void input_array(int *arr1, int length) {
    for (int k = 0; k < length; k++) {
        printf("Enter the %dth element: ", k + 1);
        scanf("%d", &arr1[k]);
    }
}

int main(void) {
    int m, n;

    printf("Enter the size of the array: ");
    scanf("%d", &m);

    int *p = (int *)malloc(m * sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    input_array(p, m);

    printf("Enter the number to be searched in the array: ");
    scanf("%d", &n);

    linear_search(p, m, n);

    free(p);

    return 0;
}







#include <stdio.h>
#include <stdlib.h>

int linear_search(int *arr, int length, int n) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == n) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

void read_array_from_file(int *arr, int length, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    for (int i = 0; i < length; i++) {
        if (fscanf(file, "%d", &arr[i]) != 1) {
            printf("Error reading from file.\n");
            fclose(file);
            exit(1);
        }
    }

    fclose(file);
}

int main(void) {
    int m, n;

    printf("Enter the size of the array: ");
    scanf("%d", &m);

    int *p = (int *)malloc(m * sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    read_array_from_file(p, m, "ascendingnumbers_1L.txt"); // File name as provided

    printf("Enter the number to be searched in the array: ");
    scanf("%d", &n);

    linear_search(p, m, n);

    free(p);

    return 0;
}

