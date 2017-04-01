#include <stdio.h>

int main(void){
  int n, c, i, j, tmp, array[100];
  scanf("%d %d", &n, &c);
  for(i=0;i<n;i++){
    scanf("%d ", &array[i]);
  }
  if(n==1){
    printf("%d ", array[0]);
  }
  else{
    for(i=0;i<n;i++){
      for(j=0;j<n-1;j++){
        if(array[j]>array[j+1]){
          tmp = array[j];
          array[j] = array[j+1];
          array[j+1] = tmp;
        }
      }
    }
    for(i=1;i<=n;i++){
      printf("%d ", array[i-1]);
      if(i%c==0){
        printf("\n");
      }
    }
  }
}
