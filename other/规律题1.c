/*
根据下列公式，编写函数fun，参数为n,返回函数的结果s

s = (1*3)/(2*2)+(3*5)/(4*4)+(5*7)/(6*6)+...+((2n-1)(2n+1))/((2*n)*(2*n))

提示：
1. 利用for循环计算s
2. 注意除法的精度问题，可以用double类型
3. 注意括号的位置
4. 注意除数要是double类型!!!
*/
#include <stdio.h>

double fun(int n) {
    double s = 0;
    for (int i = 1; i <= n; i++) {
        s += (double)((2 * i - 1) * (2 * i + 1)) / ((2 * i) * (2 * i));
    }
    return s;
}

int main() {
    int n;
    double s;
    printf("请输入n:");
    scanf("%d", &n);
    s = fun(n);
    printf("函数的结果s=%f", s);
    return 0;
}