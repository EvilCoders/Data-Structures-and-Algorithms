// C program for binary search

#include <stdio.h>

int binary_search(int arr[], int start, int end, int x) {
    if (end >= start){
        int mid = (start + end) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        else if (x < arr[mid]) {
            return binary_search(arr, start, mid-1, x);
        }
        else {
            return binary_search(arr, mid+1, end, x);
        }
    }
    return 0;
}


int main(void){
    // sorted array
    int arr[] = {1,2,4,6,21,23,55,66};
    // length of array
    int n = sizeof arr / sizeof arr[0];
    // element to find
    int x = 22;
    int result = binary_search(arr, 0, n-1, x);
    if (result == 0) {
        printf("%d not found in array", x);
    }
    else {
        printf("%d found at index %d", x, result);
    }
}