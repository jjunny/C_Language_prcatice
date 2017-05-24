#include <stdio.h>

int main(void){
  int a, b, i, tmp;
  double res;
  scanf("%d\n%d", &a, &b);
  res = a;
  for(i=0;i<b;i++){
    scanf("%d ", &tmp);
    res = res + (res * tmp / 100);
  }
  if(a>res) printf("%0.f\nbad", res - a);
  else if(a<res) printf("%0.f\ngood", res - a);
  else if(a==res) printf("%d\nsame", 0);
}
