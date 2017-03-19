#include <stdio.h>

int main(void){
  int min = 101, result = 0, i;
  int N[7];
  for(i=0;i<7;i++){
    scanf("%d\n", &N[i]);
  }
  for(i=0;i<7;i++){
    if(N[i]%2==1){
      result += N[i];
      if(min >= N[i]){
        min = N[i];
      }
    }
  }
  if(min == 101){
    printf("-1");
  }
  else{
    printf("%d\n%d", result, min);
  }
}
