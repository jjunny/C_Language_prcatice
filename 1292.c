#include <stdio.h>

int main(void){
  int i, tmp, sum = 0;
  scanf("%d", &tmp);
  for(i=0;i<10;i++){
    sum += tmp % 10;
    tmp /= 10;
  }
  if(sum%7==4) printf("suspect");
  else printf("citizen");
}
