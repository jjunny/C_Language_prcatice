#include <stdio.h>

int main(void){
  int n, a, b, c, d, i, pt, pt_max;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a == b && b == c && c == d)
      pt = 50000 + a * 5000;
    else if ((a == b && b == c) || (a == b && b == d) || (a == c && c == d))
      pt = 10000 + a * 1000;
    else if ((a == b && c == d) || (a == c && b == d))
      pt = 2000 + a * 500 + d * 500;
    else if (a == d && b == c)
      pt = 2000 + a * 500 + b * 500;
    else if (a == b || a == c || a == d)
      pt = 1000 + a * 100;
    else if (b == c || b == d)
      pt = 1000 + b * 100;
    else if (c == d)
      pt = 1000 + c * 100;
    else if (a > b && a > c && a > d)
      pt = a * 100;
    else if (b > c && b > d)
      pt = b * 100;
    else if (c > d)
      pt = c * 100;
    else
      pt = d * 100;
    if (pt > pt_max) 
      pt_max = pt;
  }
  printf("%d", pt_max);
}
