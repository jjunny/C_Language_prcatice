#include <stdio.h>

int main()
{
    int paper[111][111];
    int sx, sy, x, y, i, j, n, res = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
      scanf("%d%d", &sx, &sy);
      for (x=sx;x<sx+10;++x){
        for (y=sy;y<sy+10;++y){
          paper[x][y] = 1;
        }
      }
    }
    for (i=1;i<=100;++i){
      for (j=1;j<=100;++j){
        if (paper[i][j] == 1){
          res++;
        }
      }
    }
    printf("%d", res);
    return 0;
}
