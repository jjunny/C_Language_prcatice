#include <stdio.h>

int main(void){
  int i, j, tmp, input[3], min = 101;
  scanf("%d %d %d", &input[0], &input[1], &input[2]);
  for(i=0;i<3;i++){
    if(min>input[i]) min = input[i];
  }
  printf("%d", min);
}
