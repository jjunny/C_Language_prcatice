#include <stdio.h>

int main(){
 int n, m, k;
 scanf("%d %d %d", &n, &m, &k);
 if(n%2==0){
   if(n>0) printf("%s\n", "plus");
   else printf("%s\n", "minus");
   printf("%s\n", "even");
 }
 else{
   if(n>0) printf("%s\n", "plus");
   else printf("%s\n", "minus");
   printf("%s\n","odd");
  }
}
