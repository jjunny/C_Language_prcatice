#include <stdio.h>

int main(void){
  int a, b, i, result=0;
  scanf("%d %d", &a, &b);
  if(a%2==0){
    printf("-%d", a);
    result-=a;
  }
  else if(a%2==1){
    printf("%d", a);
    result+=a;
  }
  for(i=a+1;i<=b;i++){
    if(i%2==0){
      printf("-%d", i);
      result-=i;
    }
    else if(i%2==1){
      printf("+%d", i);
      result+=i;
    }
  }
  if(result>0){
    printf("=+%d", result);
  }
  else if(result<0){
    printf("=%d", result);
  }
  else if(result==0){
    printf("=%d", result);
  }
}
