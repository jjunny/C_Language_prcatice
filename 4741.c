#include <stdio.h>

int main(void){
  int hour, min, sec = 0, time;
  scanf("%d %d\n%d", &hour, &min, &time);
  sec += hour * 60 * 60 + min * 60 + time * 60;
  hour = sec / 60 / 60 % 24;
  min = sec / 60 % 60;
  printf("%d %d", hour, min);
  return 0;
}
