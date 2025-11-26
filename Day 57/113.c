//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>
void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}
int partition(int arr[], int left, int right) {
    int pivot = arr[right], i = left;
    for(int j=left; j<right; j++)
        if(arr[j]<=pivot) swap(&arr[i++], &arr[j]);
    swap(&arr[i], &arr[right]);
    return i;
}
int quickSelect(int arr[], int left, int right, int k) {
    if(left==right) return arr[left];
    int pi = partition(arr,left,right);
    int len = pi-left+1;
    if(len==k) return arr[pi];
    if(k<len) return quickSelect(arr,left,pi-1,k);
    else return quickSelect(arr,pi+1,right,k-len);
}

int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("%d\n",quickSelect(arr,0,n-1,k));
    return 0;
}
