#include <stdio.h>

int main(void){
  char input[101];
  int i, cnt = 1;
  scanf("%s", &input);
  for(i=0;input[i]!='\0';i++){
    printf("%c", input[i]);
    if(cnt%10==0) puts("");
    cnt++;
  }
}
