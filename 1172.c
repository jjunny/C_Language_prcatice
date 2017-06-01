#include <stdio.h>

int main(void){
  int arr[3], i, j, tmp;
  for(i=0;i<3;i++) scanf("%d ", &arr[i]);
  for(i=0;i<3;i++){
    for(j=0;j<2;j++){
      if(arr[j]>arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
  for(i=0;i<3;i++) printf("%d ", arr[i]);
}
