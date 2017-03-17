#include <stdio.h>

int main(void){
	int M, N;
	int i, j, result = 0;
	int flag = 0, min = -1;
	scanf("%d", &M);
	scanf("%d", &N);
	for(i = M ; i <= N ; i++){
		for(j = 1 ; j <= 100 ; j++){
			if((j * j) == i && flag == 0){
				result += i;
				min = i;
				flag = 1;
			}
			else if((j *j) == i && flag == 1){
				result += i;
			}
		}
	}
	if(min == -1)
		printf("-1\n");
	else
		printf("%d\n%d", result, min);
	return 0;
}
