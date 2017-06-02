#include <stdio.h>

int main(void){
  int i, n, j, point[100], tmp;
  char *name[101], temp;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%s %d", &name[i], &point[i]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      if(point[j]>point[j+1]){
        tmp = point[j];
        point[j] = point[j+1];
        point[j+1] = tmp;
        temp = *name[j];
        *name[j] = *name[j+1];
        name[j+1] = temp;
      }
    }
  }
  printf("%s", name[0]);
}
