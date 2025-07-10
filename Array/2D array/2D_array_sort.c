#include <stdio.h>

int main() {
    int rows = 3, cols = 3;

    int a[3][3] = {
        {9, 2, 7},
        {4, 5, 6},
        {3, 1, 8}
    };

    int temp[100];  // for flattening

    // Flatten the 2D array into 1D array
    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp[k++] = a[i][j];
        }
    }

    // Sort the 1D array using simple bubble sort
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                int swap = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = swap;
            }
        }
    }

    // Put back sorted elements into 2D array
    k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][j] = temp[k++];
        }
    }

    // Print sorted 2D array
    printf("Sorted matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
