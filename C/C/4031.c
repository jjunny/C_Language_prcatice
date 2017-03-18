#include <stdio.h>

int main(void) {
	int input[7], i;
	int two = 0, three = 0, result = 0;
	for (i = 0; i < 7; i++) {
		scanf("%d ", &input[i]);
	}
	for (i = 0; i < 7; i++) {
		if (input[i] % 2 == 0 && two < input[i]) {
			two = input[i];
		}
		else if (input[i] % 2 == 1 && three < input[i]) {
			three = input[i];
		}
	}
	result = two + three;
	printf("%d", result);
	return 0;
}