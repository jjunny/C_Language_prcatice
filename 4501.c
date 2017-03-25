#include<stdio.h>

int main(void){
  int input[7], i, j, tmp;
  for(i=0;i<7;i++){
    scanf("%d\n", &input[i]);
  }
  for(i=0;i<7;i++){
    for(j=0;j<6;j++){
      if(input[j]>input[j+1]){
        tmp = input[j];
        input[j] = input[j+1];
        input[j+1] = tmp;
      }
    }
  }
  printf("%d\n%d", input[6], input[5]);
}
