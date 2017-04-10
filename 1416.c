#include <stdio.h>

int main(void){
    int number, binary, count, i = 0;
    int bin[100];
    scanf("%d", &number);
    if(number>0){
      while(number>0){
          binary = number % 2;
          bin[i] = binary;
          number = number/2;
          i += 1;
      }
      count = i - 1;
      for(i=count; i>=0; i--) printf("%d", bin[i]);
    }
    else if(number==0) printf("%d", 0);
}
