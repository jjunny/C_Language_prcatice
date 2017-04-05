#include <stdio.h>

int main(void){
  int input[3], i, j, tmp;
  scanf("%d %d %d", &input[0], &input[1], &input[2]);
  for(i=0;i<3;i++){
    for(j=0;j<2;j++){
      if(input[j]>input[j+1]){
        tmp = input[j];
        input[j] = input[j+1];
        input[j+1] = tmp;
      }
    }
  }
  printf("%d", input[1]);
}
