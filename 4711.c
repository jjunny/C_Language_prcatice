#include<stdio.h>
int r, s;
int main() {
    for (int i = 0, x, y; i < 4; i++) {
        scanf("%d %d", &x, &y);
        s += y - x;
        r = r > s ? r : s;
    }
    printf("%d", r);
    return 0;
}
