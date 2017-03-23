#include <stdio.h>

int main(void){
  int first, second, i, j;
  int result_1, result_2;
  scanf("%d %d", &first, &second);
  j = (first<second)?first:second;
  for(i=1;i<=j;i++){
    if(first % i == 0 && second % i == 0){
      result_1 = i;
    }
  }
  j = (first>second)?first:second;
  for(i=j;;i++){
    if(i % first == 0 && i % second == 0){
      result_2 = i;
      break;
    }
  }
  printf("%d\n%d", result_1, result_2);
  return 0;
}
