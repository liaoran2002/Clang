/*
交换输出
输入n(n<100)个数，
找出其中最小的数，
将它与最前面的数交换后输出这些数。
(如果这个第一个数就是最小的数，
则保持原样输出，
如果最小的数有相同的按照前面的交换)

输入
n个整数，用空格隔开，数值范围为-1000到1000。
输出
输出交换后的数列
*/
#include <stdio.h>

int main() {
    int a[10], n = 0, i, temp, min = 0;
    for (i = 0; i < 10; i++) {
        printf("请输入第%d个数:", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
        if (a[i] < a[n]) {
            min = a[i];
            n = i;
        }
    temp = a[0];
    a[0] = min;
    a[n] = temp;
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}