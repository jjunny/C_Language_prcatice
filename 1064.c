#include <stdio.h>

int main(){
 int n, m, k;
 scanf("%d %d %d", &n, &m, &k);
 printf("%d", (n<m ? n:m)<k?(n<m?n:m):k);
}
