#include <stdio.h>
#include <stdlib.h>

int data[107][3];
int res[3][2], rc;

int comp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main(void)
{
    int i, j, n, cnt;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) scanf("%d %d %d", &data[i][1], &data[i][2], &data[i][0]);
    qsort(data+1, n, sizeof(data[0]), comp);
    for(i = n; i >= 1 && rc < 3; i--){
        cnt = 0;
        for(j = 0; j < rc; j++){
            if(data[i][1] == res[j][0])
                cnt++;
        }
        if(cnt < 2){
            res[rc][0] = data[i][1];
            res[rc++][1] = data[i][2];
        }
    }
    printf("%d %d\n", res[0][0], res[0][1]);
    printf("%d %d\n", res[1][0], res[1][1]);
    printf("%d %d\n", res[2][0], res[2][1]);
}
