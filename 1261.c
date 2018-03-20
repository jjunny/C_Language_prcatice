#include <stdio.h>

int main(vdoi){
  int i, arr[10], count = 0;
  for(i=0;i<10;i++){
    scanf("%d ", &arr[i]);
  }
  for(i=0;i<10;i++){
    if(arr[i]%5==0){
      printf("%d", arr[i]);
      break;
    }
    count++;
  }
  if(count == 10) printf("0");
  return 0;
}
