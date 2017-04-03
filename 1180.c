#include <stdio.h>

int main(void){
  int input, f, s, tmp;
  scanf("%d", &input);
  f = input/10;
  s = input%10;
  tmp = (s * 10 + f) * 2;
  if(tmp<=50){
    printf("%d\nGOOD", tmp);
  }
  else if(tmp<100){
    printf("%d\nOH MY GOD", tmp);
  }
  else if(100<=tmp){
    tmp%=100;
    if(tmp<=50){
      printf("%d\nGOOD", tmp);
    }
    else{
      printf("%d\nOH MY GOD", tmp);
    }
  }
}
