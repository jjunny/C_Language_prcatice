#include <stdio.h>

int main(void){
  int N, M, i, tmp;
  int array[10000000];
  scanf("%d", &N);
  for(i=0;i<N;i++){
    scanf("%d ", &tmp);
    array[tmp] = 1;
  }
  scanf("%d", &M);
  for(i=0;i<M;i++){
    scanf("%d ", &tmp);
    if(array[tmp]==1) printf("%d ", 1);
    else printf("%d ", 0);
  }
}
