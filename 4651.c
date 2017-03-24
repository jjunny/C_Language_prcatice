#include<stdio.h>

int main(void){
  int i, count[3];
  int a1, a2, a3, a4;
  for(i=0;i<3;i++){
    scanf("%d %d %d %d\n", &a1, &a2, &a3, &a4);
    count[i] = a1 + a2 +a3 + a4;
  }
  for(i=0;i<3;i++){
    if(count[i] == 0) printf("D\n");
    if(count[i] == 1) printf("C\n");
    if(count[i] == 2) printf("B\n");
    if(count[i] == 3) printf("A\n");
    if(count[i] == 4) printf("E\n");
  }
  return 0;
}
