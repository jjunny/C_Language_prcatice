#include <stdio.h>

void swap(char **p, int j, int i);
int main(void){
  int i, n, j, point[100], tmp;
  char *name[101];
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%s %d", &*name[i], &point[i]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      if(point[j]<point[j+1]){
        tmp = point[j];
        point[j] = point[j+1];
        point[j+1] = tmp;
        swap(&name, j, j+1);
      }
    }
  }
  printf("%s", name[n-3]);
}
void swap(char **p, int j, int i)
{
  char *temp = p[j];
  p[j] = p[i];
  p[i] = temp;
}
