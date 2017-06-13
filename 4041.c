#include <stdio.h>
#include <string.h>

char input[8], swap[8];

void delete(int idx);

int main(void){
  int sum, i;
  for(i=0;i<7;i++){
    scanf("%d", &input[i]);
    sum += input[i];
  }
  for(i=6;i>=0;i--){
    swap[6-i] = input[i];
  }
  while(swap[0]==0){
    delete(1);
  }
  for(i=0;swap[i]!='\0';i++){
    printf("%d", swap[i]);
  }
  printf("\n%d", sum);
}

void delete(int idx){
   memmove(swap+idx,swap+idx+1,strlen(swap)-idx);
}
