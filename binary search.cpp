#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  

        
        if (arr[mid] == key) {
            return mid; 
        }
        
       
        if (arr[mid] < key) {
            low = mid + 1;
        } 
       
        else {
            high = mid - 1;
        }
    }

    return -1;  
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int result = binarySearch(arr, size, key);
    
    if (result != -1) {
        printf("Element %d is present at index %d.\n", key, result);
    } else {
        printf("Element %d is not present in the array.\n", key);
    }

    return 0;
}
