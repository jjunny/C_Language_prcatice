#include <stdio.h>

int main(void){
  int hour, min, sec, time;
  scanf("%d %d %d\n%d", &hour, &min, &sec, &time);
  sec += hour * 60 * 60 + min * 60 + time;
  hour = sec / 60 / 60 % 24;
  min = sec / 60 % 60;
  sec %= 60;
  printf("%d %d %d", hour, min, sec);
  return 0;
}
