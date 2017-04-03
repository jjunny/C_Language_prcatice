#include <stdio.h>

int main(void){
  int time, goal, i;
  scanf("%d %d", &time, &goal);
  for(i=time;i<90;i+=5){
    goal+=1;
  }
  printf("%d", goal);
}
