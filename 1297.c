#include <stdio.h>

int main(void){
  int n, i, s=0, tmp, tmp_i;
  scanf("%d", &n);
  for(i=0;i<=n/2;i++){
    tmp = (n - (2 * i)) * i;
    if(tmp>s){
      s = tmp;
      tmp_i = i;
    }
  }
  printf("%d", tmp_i);
}
