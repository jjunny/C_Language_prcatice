#include <stdio.h>
#include <string.h>

int main(void){
  char str[101];
  int i, len, count = 0;
  scanf("%s", str);
  len = strlen(str);
  for(i=0;i<len;i++){
    if(count == 10){
      printf("\n");
      count = 0;
    }
    printf("%c", str[i]);
    count++;
  }
  return 0;
}
