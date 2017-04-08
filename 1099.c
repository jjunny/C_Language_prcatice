#include <stdio.h>

int main(void){
  int array[10][10], i, j, n = 1, m = 1;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      scanf("%d", &array[i][j]);
    }
  }
  while(array[n][m]!=2){
    array[n][m]=9;
    if(array[n][m+1]!=1) m+=1;
    else if(array[n+1][m]!=1) n+=1;
    else break;
  }
  array[n][m] = 9;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }
}
