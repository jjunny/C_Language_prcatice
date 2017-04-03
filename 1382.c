#include <stdio.h>

int main(void){
  int i, j;
  for(i=1;i<10;i++){
    for(j=2;j<6;j++){
      if(j==5){
        printf("%d x %d = %2d",j,i,j*i);
      }
      else{
        printf("%d x %d = %2d\t",j,i,j*i);
      }
    }
    printf("\n");
  }
}
