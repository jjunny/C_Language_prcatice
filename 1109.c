#include <stdio.h>

int main(void){
  int age;
  char name[100], dep;
  double key;
  scanf("%s\n%d\n%c\n%lf", &name, &age, &dep, &key);
  printf("%s\n%d\n%c\n%.10g", name, age, dep, key);
}
