//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.//
#include <stdio.h>

int first_ceil(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if(arr[i] >= x)
            return i;
    }
    return -1;
}

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);

    int idx = first_ceil(arr, n, x);
    printf("%d", idx);

    return 0;
    
}
