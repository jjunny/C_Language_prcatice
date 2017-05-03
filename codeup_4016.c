#include <stdio.h>

int main(void){
	int a, b, c, result;
	int i = 1;
	scanf("%d %d %d", &a, &b, &c);
	for(i ; i <= c ; i++){
		if(a % i == 0 && b % i == 0 && c % i == 0){
			result = i;
		}
	}
	printf("%d", result);
	return 0;
}
