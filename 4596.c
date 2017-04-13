#include <stdio.h>

int main(void){
  int array[9][9], i, j, max = 0;
  int n, m;
  for(i=0;i<9;i++){
    for(j=0;j<9;j++){
      scanf("%d", &array[i][j]);
    }
    scanf("\n");
  }
  for(i=0;i<9;i++){
    for(j=0;j<9;j++){
      if(array[i][j]>max) max = array[i][j];
    }
  }
  for(i=0;i<9;i++){
    for(j=0;j<9;j++){
      if(array[i][j]==max){
        n = i + 1;
        m = j + 1;
      }
    }
  }
  printf("%d\n%d %d", max, n, m);
}
