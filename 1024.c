#include <stdio.h>

int main(void){
  int i;
  char input[21];
  scanf("%s", &input);
  for(i=0;input[i]!='\0';i++){
    printf("\'%c\'\n", input[i]);
  }
}
