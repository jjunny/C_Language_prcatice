#include <stdio.h>

int main(void){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if(a<=170||b<=170||c<=170) printf("CRASH");
  else printf("PASS");
}
