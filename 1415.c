#include <stdio.h>

int main(void){
  int input[10], i, even_max = 0, odd_max = 0;
  for(i=0;i<10;i++){
    scanf("%d ", &input[i]);
  }
  for(i=0;i<10;i++){
    if(input[i]%2==0&&input[i]>even_max){
      even_max = input[i];
    }
    else if(input[i]%2==1&&input[i]>odd_max){
      odd_max = input[i];
    }
  }
  if(even_max == 0){
    printf("%d", odd_max);
  }
  else if(odd_max == 0){
    printf("%d", even_max);
  }
  else{
    printf("%d %d", odd_max, even_max);
  }
}
