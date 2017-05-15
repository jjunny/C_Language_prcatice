#include <stdio.h>

int main(void){
  int input[5], i, avg = 0;
  for(i=0;i<5;i++){
    scanf("%d\n", &input[i]);
    if(input[i]<=40) input[i] = 40;
    avg += input[i];
  }
  printf("%d", avg/5);
}
