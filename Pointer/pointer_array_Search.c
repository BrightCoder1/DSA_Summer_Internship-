#include <stdio.h>

int search(int *arr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    int arr[] = {10, 50, 30, 20, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    
    int index = search(arr, size, key);
    
    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }
    
    return 0;
}
