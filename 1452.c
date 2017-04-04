#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *arr, int left, int right){
  int i, j;
  int temp;
  int pivot = arr[left];
  if(left<right){
    i = left;
    j = right+1;
    while(i<=j){
      do
      i++;
      while(arr[i] < pivot);
      do
      j--;
      while(arr[j] > pivot);
      if(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
      else
        break;
    }
    temp = arr[j];
    arr[j] = arr[left];
    arr[left] = temp;
    quick_sort(arr, left, j-1);
    quick_sort(arr, j+1, right);
  }
}

void main(){
  int arr[100000];
  int i=0, n;
  scanf("%d\n", &n);
  for(i=0;i<n;i++){
    scanf("%d\n", &arr[i]);
  }
  quick_sort(arr, 0, n-1);
  for(i=0;i<n;i++){
    printf("%d\n", arr[i]);
  }
}
