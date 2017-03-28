#include <stdio.h>

void triangle(int start, int flag, int count);

int main(void){
  int n;
  scanf("%d", &n);
  triangle(1, 1, n);
}

void triangle(int start, int flag, int count){
  printf("*");
  if(start<count){
    if(start==flag){
      puts("");
      triangle(1, flag+1, count);
    }
    else{
      triangle(start+1, flag, count);
    }
  }
}
