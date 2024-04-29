/*
利用泰勒级数e=1+1/1!+1/2!+1/3!+...+1/n!
计算e的近似值
当最后一项的绝对值小于10的-5次方时认为达到了精度要求，
要求统计总共累计了多少项
*/
#include <math.h>

int main() {
    double e = 1, t = 1;
    int count = 1;
    while (1 / t > (1e-5)) {
        t *= count++;
        e += 1 / t;
    }
    printf("第%d项\ne=%lf\nt=%lf\n", count, e, 1 / t);
    return 0;
}