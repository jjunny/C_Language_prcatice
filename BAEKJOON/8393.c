#include <stdio.h>

int main(void){
  int n, i, res = 0;
  scanf("%d", &n);
  for(i=0;i<=n;i++) res += i;
  printf("%d", res);
}
