#include <stdio.h>

int main(void){
  int a, b, i, j, result=0;
  scanf("%d %d", &a, &b);
  j = (a<b)?b:a;
  for(i=1;i<=j;i++){
    if(a%i==0&&b%i==0){
      result = i;
    }
  }
  printf("%d", result);
  return 0;
}
