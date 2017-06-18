#include <stdio.h>

int main(void){
  int input[10000], i, j, n, tmp;
  scanf("%d", &n);
  for(i=0;i<n;i++) scanf("%d\n", &input[i]);
  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      if(input[j]>input[j+1]){
        tmp = input[j];
        input[j] = input[j+1];
        input[j+1] = tmp;
      }
    }
  }
  for(i=0;i<n;i++) printf("%d\n", input[i]);
}
