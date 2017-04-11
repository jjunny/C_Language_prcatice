#include <stdio.h>

int main(void){
  int n, i, first[1000], second[1000], third[1000];
  int three_first = 0, three_second = 0, three_third = 0, two_first = 0, two_second = 0, two_third = 0;
  int res_1 = 0, res_2 = 0, res_3 = 0;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d %d %d\n", &first[i], &second[i], &third[i]);
  }
  for(i=0;i<n;i++){
    res_1 += first[i];
    if(first[i]==3) three_first++;
    else if(first[i]==2) two_first++;
    res_2 += second[i];
    if(second[i]==3) three_second++;
    else if(second[i]==2) two_second++;
    res_3 += third[i];
    if(third[i]==3) three_third++;
    else if(third[i]==2) two_third++;
  }
  if(res_1>res_2&&res_1>res_3) printf("%d %d", 1, res_1);
  else if(res_2>res_1&&res_2>res_3) printf("%d %d", 2, res_2);
  else if(res_3>res_1&&res_3>res_2) printf("%d %d", 3, res_3);
  else{
    if(res_1==res_2){
      if(three_first>three_second) printf("%d %d", 1, res_1);
      else if(three_second>three_first) printf("%d %d", 2, res_2);
      else if(three_first==three_second){
        if(two_first>two_second) printf("%d %d", 1, res_1);
        else if(two_second>two_first) printf("%d %d", 2, res_2);
        else printf("%d %d",0, res_1);
      }
    }
    else if(res_2==res_3){
      if(three_second>three_third) printf("%d %d", 2, res_2);
      else if(three_third>three_second) printf("%d %d", 3, res_3);
      else if(three_second==three_third){
        if(two_second>two_third) printf("%d %d", 2, res_2);
        else if(two_third>two_second) printf("%d %d", 3, res_3);
        else printf("%d %d",0, res_2);
      }
    }
    else if(res_3==res_1){
      if(three_first>three_third) printf("%d %d", 1, res_1);
      else if(three_third>three_first) printf("%d %d", 3, res_3);
      else if(three_first==three_third){
        if(two_first>two_third) printf("%d %d", 1, res_1);
        else if(two_third>two_first) printf("%d %d", 3, res_3);
        else printf("%d %d",0, res_1);
      }
    }
  }
}
