#include <stdio.h>
#include <math.h>

int main(void){
  double n;
  int i = 1, k, t, input;
  scanf("%lf", &n);
  input = (int)n;
  n = sqrt(n);
  while(i<=n-1){
    i++;
  }
  k = input - i*i;
  t = i;
  printf("%d %d", k, t);
}
