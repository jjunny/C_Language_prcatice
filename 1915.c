#include <stdio.h>

int fibonacci(int n);

int main(void){
  int i, n=0;
  scanf("%d", &i);
  printf("%d\n", fibonacci(i));
}

int fibonacci(int n){
  if(n==1||n==2) return 1;
  else return fibonacci(n-1) + fibonacci(n-2);
}
