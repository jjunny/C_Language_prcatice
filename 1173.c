#include <stdio.h>

int main(void){
  int hr, min;
  scanf("%d %d", &hr, &min);
  if(hr==0&&min<=29){
    hr = 23;
    min += 30;
  }
  else if(min<=29){
    hr -= 1;
    min += 30;
  }
  else{
    min -= 30;
  }
  printf("%d %d", hr, min);
}
