#include <stdio.h>

int main(void){
 char n,m='a';
 scanf("%c",&n);
 do{
  printf("%c ", m);
  m++;
 }while(m<=n);
 return 0;
}
