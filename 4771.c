#include <stdio.h>
#include <stdlib.h>
//40 (, 41 )
int main()
{
    int result=0;
    int tmp;
    char ch[51];
    scanf("%s", ch);
    if (ch[0] == 40){
        tmp = 1;
        result = 10;
    }
    else if (ch[0] == 41){
        tmp = -1;
        result = 10;
    }
    int k = 1;
    while (ch[k] != NULL){
        char dish = ch[k];
        int ttmp;
        if (dish == 40){
          ttmp = 1;
        }
        else{
          ttmp = -1;
        }
        int tttmp = tmp*ttmp;
        if (tttmp == 1){
          result += 5;
        }
        else{
          result += 10;
        }
        tmp = ttmp;
        k++;
    }
    printf("%d", result);
    return 0;
}
