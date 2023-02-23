// Make a 2D array using dynamic memory allocation and initialize each element with 1, 2, 3,..., etc.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, count = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // allocate memory for the 2D array
    int** arr = (int**) malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int*) malloc(cols * sizeof(int));
    }

    // initialize the array with consecutive integers
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = count++;
        }
    }

    // print the array
    printf("The 2D array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("%d",count);

    // free the allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

