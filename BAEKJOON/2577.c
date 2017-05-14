#include <stdio.h>

int main(void){
  int a, b, c, i, total = 1;
  int res[10] = {0,};
  scanf("%d %d %d", &a, &b, &c);
  total = a * b * c;
  while (total>0) {
    a = total % 10;
    res[a]++;
    total /= 10;
  }
  for(i=0;i<10;i++) printf("%d\n", res[i]);
}
