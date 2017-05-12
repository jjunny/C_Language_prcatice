#include <stdio.h>

int main(void){
  int n, i, tmp, res = 0;
  scanf("%d\n", &n);
  for(i=1;i<=n;i++){
    scanf("%1d", &tmp);
    res += tmp;
  }
  printf("%d", res);
}
