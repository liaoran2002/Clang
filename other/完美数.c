/*
输出1000以内的完美数及其个数,
完美数是所有真因子相加等于自身的数，

例如6=1+2+3,
输出格式:6 1 2 3

*/
#include <stdio.h>

int main() {
    int i, j, sum = 0, count = 0;
    for (i = 1; i <= 1000; i++) {
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            count++;
            printf("%d ", i);
            for (j = 1; j < i; j++)
                if (i % j == 0)
                    printf("%d ", j);
            printf("\n");
        }
        sum = 0;
    }
    printf("1000以内有%d个完美数\n", count);
    return 0;
}