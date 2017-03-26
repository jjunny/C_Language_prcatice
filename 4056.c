#include <stdio.h>
#include <math.h>

int main(void){
  double input, result = 0;
  scanf("%lf", &input);
  if(input<=500){
    result = input * 7 / 10;
  }
  else if(500<input && input<=1500){
    result = 350 + (input - 500) * 2 / 5;
  }
  else if(1500<input && input<=4500){
    result = 750 + (input - 1500) * 3 / 20;
  }
  else if(4500<input && input<=10000){
    result = 1200 + (input - 4500) / 20;
  }
  else{
    result = 1475 + (input - 10000) / 50;
  }
  result = floor(result);
  printf("%d", (int)result);
  return 0;
}
