#include <stdio.h>

int main(void)
{
    long number, binary, sum=0, i=1, tmp;
    scanf("%ld", &number);
    tmp = number;
    while(number>0)
    {
        binary=number%2;
        sum+=binary*i;
        number=number/2;
        i*=10;
    }
    printf("2 %ld\n8 %o\n16 %X", sum, tmp, tmp);
    return 0;
}
