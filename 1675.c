#include <stdio.h>
#include <string.h>

int main(void){
  char a;
  while(scanf("%c", &a) != EOF){
    if(a>='d'&&a<='z') printf("%c", a-3);
    if(a>='a'&&a<='c') printf("%c", a+23);
    if(a==32) printf(" ");
  }
}
