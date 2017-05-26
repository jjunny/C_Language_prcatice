#include <stdio.h>
#include <string.h>

int main(void){
  int i, n, j;
  char arr[51][3], tmp[100];
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%s %d", &arr[i][0], &arr[i][1]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      if(arr[j][1]>arr[j+1][1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
  printf("%s", arr[2][0]);
}
