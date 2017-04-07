#include<stdio.h>

int main(){
 int n;
 reload:
 scanf("%d", &n);
 if(n==0){
   printf("%d\n", 0);
   goto end;
 }
 printf("%d\n", n);
 if(n!=0) goto reload;
 end:
 return 0;
}
