#include <stdio.h>
#include <math.h>

int main(void){
  int m, n, i, j, sum = 0, min = -1;
  double max;
  scanf("%d %d", &m, &n);
  for(i=m;i<=n;i++){
    if((i%2==0&&i!=2)||i==1) continue;
    max = sqrt(i);
    for(j=3;j<max;j++){
      if(i%j==0) break;
    }
    if(j>max){
      if(min==-1){
        min = i;
      }
      sum+=i;
    }
  }
  if(sum==0) printf("%d", -1);
  else printf("%d\n%d", sum, min);
}
