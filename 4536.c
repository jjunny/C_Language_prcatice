#include <stdio.h>

int main(void){
  int i, N = 0, avr = 0, frq[100] = {0}, max = 0, frq_num = 0;
  for(i=0;i<10;i++){
    scanf("%d\n", &N);
    avr += N;
    frq[N/10]++;
  }
  for(i=0;i<100;i++){
    if(max<frq[i]){
      max = frq[i];
      frq_num = i * 10;
    }
  }
  printf("%d\n%d", avr / 10, frq_num);
  return 0;
}
