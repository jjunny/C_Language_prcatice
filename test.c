#include <stdio.h>

int main(void){
  int a, b, c, i, j;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      printf("%d x %d = %d\n", i, j, i*j);
    }
  }
  for(i=0;i<10;j++){
    for(j=10;j>0;j++){
      printf("%d x %d = %d", i, j, i*j);
    }
  }
  for(i=10;i>0;i++){
    for(j=0;j<10;j++){
      printf("%d x %d = %d", i, j, i*j);
    }
  }
}
