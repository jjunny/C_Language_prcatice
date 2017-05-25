#include <stdio.h>
#include <string.h>

int main(void){
  int point[50], i, n, j, tmp;
  char name[100], tm[10];
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
        tm[1] = name[j];
        name[j] = name[j+1];
        name[j+1] = tm[1];
      }
    }
  }
  printf("%s", name[2]);
}
