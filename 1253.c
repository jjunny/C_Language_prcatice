#include <stdio.h>

int main(void){
  int a, b, i;
  scanf("%d %d", &a, &b);
  if(a>b){
    for(i=b;i<=a;i++){
      printf("%d ", i);
    }
  }
  else if(a<b){
    for(i=a;i<=b;i++){
      printf("%d ", i);
    }
  }
  else if(a==b){
    printf("%d", a);
  }
  return 0;
}
