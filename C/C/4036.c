#include <stdio.h>

int main2(void) {
	int m, n;
	int a, b;
	scanf("%d", &n);
	scanf("%d", &m);
	a = (m + n) / 2;
	b = (n - m) / 2;
	printf("%d\%d", a, b);
	return 0;
}