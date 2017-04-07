#include <stdio.h>

int main(void){
  int n;
  scanf("%d", &n);
  if(n==0) printf("%d", !0);
  else if(n==1) printf("%d", !1); 
}
