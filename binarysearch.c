#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int mid = (low + (high - low)) / 2; // Calculate mid 
        
        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Target found at mid
        }
        
        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }
    
    return -1; // Target not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    
    int result = binarySearch(arr, size, target);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
