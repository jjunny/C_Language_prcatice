#include <stdio.h>

int main(void){
  int i, n, x, input[10000];
  scanf("%d %d", &n, &x);
  for(i=0;i<n;i++) scanf("%d ", &input[i]);
  for(i=0;i<n;i++){
    if(x>input[i]) printf("%d ", input[i]);
  }
}
