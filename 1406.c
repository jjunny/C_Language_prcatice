#include <stdio.h>
#include <string.h>

int main(void){
  char input[100];
  char *s = "love";
  scanf("%s", &input);
  if(strcmp(s, input)==0) printf("I love you.");
  return 0;
}
