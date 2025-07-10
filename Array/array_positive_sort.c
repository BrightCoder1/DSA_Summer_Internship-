#include <stdio.h>

int main() {
    int arr[] = {3, -2, 5, -1, 4};
    int n = 5;
    int i, j;

    int positives[5], posIndex = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positives[posIndex] = arr[i];
            posIndex++;
        }
    }

    for (i = 0; i < posIndex - 1; i++) {
        for (j = i + 1; j < posIndex; j++) {
            if (positives[i] > positives[j]) {
                int temp = positives[i];
                positives[i] = positives[j];
                positives[j] = temp;
            }
        }
    }

    posIndex = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            arr[i] = positives[posIndex];
            posIndex++;
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }

    return 0;
}
