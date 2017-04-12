#include <stdio.h>

int main(void){
  int N[5];
  int i, result = 0;
  for(i=0;i<5;i++){
    scanf("%d ", &N[i]);
  }
  for(i=0;i<5;i++){
    result += (N[i] * N[i]);
  }
  result %= 10;
  printf("%d", result);
  return 0;
}
