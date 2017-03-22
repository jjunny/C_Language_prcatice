#include<stdio.h>

int main(void){
  int input[5];
  int temp, i, j;
  for(i=0;i<5;i++){
    scanf("%d ", &input[i]);
  }
  for(i=0;i<5;i++){
    for(j=0;j<4;j++){
      if(input[j] > input[j+1]){
        temp = input[j];
        input[j] = input[j+1];
        input[j+1] = temp;
      }
    }
  }
  printf("%d", input[2]);
  return 0;
}
