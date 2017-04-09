#include <stdio.h>

int main(void){
  int won_number[6], own_number[6], bounus, bns, i, j, res = 0;
  for(i=0;i<6;i++) scanf("%d ", &won_number[i]);
  scanf("%d", &bounus);
  for(i=0;i<6;i++) scanf("%d ", &own_number[i]);
  for(i=0;i<6;i++){
    for(j=0;j<6;j++){
      if(own_number[i]==won_number[j]) res++;
    }
  }
  for(i=0;i<6;i++){
    if(own_number[i]==bounus) bns++;
  }
  if(res==6) printf("%d", 1);
  else if(res==5&&bns==1) printf("%d", 2);
  else if(res==5) printf("%d", 3);
  else if(res==4) printf("%d", 4);
  else if(res==3) printf("%d", 5);
  else printf("%d", 0);
}
