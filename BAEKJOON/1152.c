#include <stdio.h>
#include <string.h>

int main(void){
  int i, res = 1, length = 0;
  char input[1000003];
  gets(input);
  length = strlen(input);
  for(i=0;i<length;i++){
    if(input[i]==' ') res++;
  }
  if(input[0]==' ') res--;
  if(input[length-1]==' ') res--;
  printf("%d", res);
}
