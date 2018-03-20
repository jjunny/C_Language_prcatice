#include<stdio.h>
//Prosto
void QuickSort(int arr[], int left, int right){
  int L = left, R = right;
  int temp;
  int pivot = arr[(left + right) / 2];
  while(L <= R){
    while(arr[L] < pivot)
      L++;
    while(arr[R] > pivot)
      R--;
    if(L <= R){
      if(L != R){
        temp = arr[L];
        arr[L] = arr[R];
        arr[R] = temp;
      }
      L++; R--;
  }
  if(left<R)
    QuickSort(arr, left, R);
  if(L<right)
    QuickSort(arr, L, right);
  }
}

int main(void) {
  int N, data[100];
  scanf("%d\n", &N);
  for(int i=0;i<N;i++){
    scanf("%d ", &data[i]);
  }
  QuickSort(data, 0, N-1);
  for(int i=N;i>=0;i--){
    printf("%d ", data[i]);//내림차순출력
  }
  return 0;
}
