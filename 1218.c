#include <stdio.h>
#include <stdlib.h>

int main(void){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if((abs(a-b)<c&&c<a+b)||(abs(a-c)<b&&c<a+c)||(abs(b-c)<a&&a<b+c)){
    if(a==b&&b==c&&c==a){
      printf("정삼각형\n");
    }
    else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
      printf("직각삼각형\n");
    }
    else if(a==b&&a!=c){
      printf("이등변삼각형\n");
    }
    else if(a==c&&a!=b){
      printf("이등변삼각형\n");
    }
    else if(b==c&&b!=a){
      printf("이등변삼각형\n");
    }
    else{
      printf("삼각형\n");
    }
  }
  else{
    printf("삼각형아님\n");
  }
}
