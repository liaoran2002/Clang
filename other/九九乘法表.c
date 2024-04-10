#include <stdio.h>

// 九九乘法表
void right() {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j < i; j++) {
            printf("\t");
        }
        for (j = i; j <= 9; j++) {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
}

int main() {

    return 0;
}