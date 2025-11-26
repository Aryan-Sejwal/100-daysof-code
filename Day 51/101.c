//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.//
#include <stdio.h>

int first_occurrence(int arr[], int n, int target) {
    for(int i=0; i<n; i++) {
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int last_occurrence(int arr[], int n, int target) {
    for(int i=n-1; i>=0; i--) {
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &target);

    int first = first_occurrence(arr, n, target);
    int last = last_occurrence(arr, n, target);

    if(first == -1)
        printf("-1 -1");
    else
        printf("%d %d", first, last);

    return 0; 
    
}
