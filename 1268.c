#include <stdio.h>

int main(void){
  int i, n, tmp, cnt=0;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d ", &tmp);
    if(tmp%2==0) cnt++;
  }
  printf("%d", cnt);
}
