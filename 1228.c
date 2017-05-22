#include <stdio.h>

int main(void){
  double weight, height, fat, standard;
  scanf("%lf %lf", &height, &weight);
  standard = (height - 100) * 0.9;
  fat = (weight - standard) * 100 / standard;
  if(fat<=10) printf("정상");
  else if(fat<=20)  printf("과체중");
  else printf("비만");
}
