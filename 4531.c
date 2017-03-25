#include<stdio.h>

int main(void){
  int input[5], i, j, tmp, avr = 0;
  for(i=0;i<5;i++){
    scanf("%d\n", &input[i]);
  }
  for(i=0;i<5;i++){
    for(j=0;j<4;j++){
      if(input[j]>input[j+1]){
        tmp = input[j];
        input[j] = input[j+1];
        input[j+1] = tmp;
      }
    }
  }
  for(i=0;i<5;i++){
    avr += input[i];
  }
  avr = avr / 5;
  printf("%d\n%d", avr, input[2]);
  return 0;
}
