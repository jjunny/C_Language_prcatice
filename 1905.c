#include <stdio.h>

int sum(int n){
  if(n==0){
    return;
  }
  return n+sum(n-1);
}
int main(void){
  int n;
  scanf("%d", &n);
  printf("%d", sum(n));
}
