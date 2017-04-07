#include <stdio.h>

int main(void){
  long long n, m, k;
  scanf("%lld %lld %lld", &n, &m, &k);
  int sum = n + m + k;
  printf("%lld\n%.1f", sum, (float)sum/3 );
}
