#include<stdio.h>

int main()
{
 int n;
 scanf("%d", &n);
 if(n>=90&&n<=100){
  printf("A");
 }
 else if(n<90&&n>=70){
  printf("B");
 }
 else if(n<70&&n>=40){
  printf("C");
 }
 else if(n<40&&n>=0){
  printf("D");
 }
}
