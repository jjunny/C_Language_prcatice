#include <stdio.h>

int print(int n){
  if(n==0){
    return;
  }
  printf("%d\n", n);
  return print(n-1);
}

int main(void){
  int n;
  scanf("%d", &n);
  print(n);
}
