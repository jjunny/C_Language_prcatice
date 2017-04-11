#include<stdio.h>

int max(int a, int b){return a>b ? a : b;}

int main(){
	int input[100000];
	int N, K, i, sum = 0, answer;
	scanf("%d %d", &N, &K);
	for(i=0;i<N;i++){
		scanf("%d ", &input[i]);
	}
	answer = -32768;
	for(i=0;i<K;i++){
		sum += input[i];
	}
	answer = max(answer, sum);
	for(i=K;i<N;i++){
		sum += input[i] - input[i-K];
		answer = max(answer, sum);
	}
	printf("%d", answer);
}
