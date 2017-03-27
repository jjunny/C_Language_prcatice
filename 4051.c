#include <stdio.h>
#include <stdlib.h>

int main(void){
  double a[5],b[5],c=0;
  int i;
  for(i=0;i<5;i++){
    scanf("%lf %lf",&a[i],&b[i]);
  }
	for(i=0;i<5;i++){
		c+=(b[i]-a[i]-1.0>0) ? ((b[i]-a[i]-1.0>4) ? 4.0 : b[i]-a[i]-1.0): 0;//계산결과가 0보다 작으면 0반환
  }

	c/=0.5;
	c*=5000;
	if(c>=150000){
		c*=0.95;
  }
	else if(c<=50000){
		c*=1.05;
  }
	printf("%.0f",c);
  return 0;
}
