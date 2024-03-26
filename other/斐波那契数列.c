/*
斐波那契数列
前20项 每5项换行
1 1 2 3 5
8 13 21 34 55
89 144 233 377 610
987 1597 2584 4181 6765
*/
#include <stdio.h>

int main() {
    int i, x = 1, y = 0, temp;
    for (i = 1; i <= 20; i++) {
        temp = y;
        y = x + temp;
        x = temp;
        printf("%-5d", y);
        if (i % 5 == 0)
            printf("\n");
    }
    return 0;
}