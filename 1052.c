#include <stdio.h>

int main(void){
  int n, m;
  scanf("%d %d", &n, &m);
  if(n!=m) printf("%d", 1);
  else if(n==m) printf("%d", 0);
}
