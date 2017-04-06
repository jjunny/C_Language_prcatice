#include <stdio.h>

int main(void){
  int w, h, b;
  double res = 0;
  scanf("%d %d %d", &w, &h, &b);
  res = w * h * b;
  printf("%.2lf MB", res / 8 / 1024 / 1024);
}
