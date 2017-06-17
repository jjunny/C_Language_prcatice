#include <stdio.h>

int main(void){
  int n, i, tmp, s = 0;
  scanf("%d", &n);
  for(i=1;i<=n/2;i++){
    tmp = ((n - (2 * i)) / 2) * i;
    if(tmp > s) s = tmp;
  }
  printf("%d", s);
}
