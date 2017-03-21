#include<stdio.h>

int main(void){
  int n, i, result, r;
  int input[100], sum[100];
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d", &input[i]);
  }
  r = 0;
  for(i=0;i<n;i++){
    if(input[i] == 1){
      if(r>0){
        r += 1;
        sum[i] = r;
      }
      else{
        sum[i] = 1;
        r += 1;
      }
    }
    else{
      sum[i] = 0;
      r = 0;
    }
  }
  for(i=0;i<n;i++){
    result += sum[i];
  }
  printf("%d", result);
  return 0;
}
