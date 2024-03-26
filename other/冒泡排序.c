#include <stdio.h>

int main() {
    int a[10] = {318, 37, 156, 186, 34, 15, 94, 23, 45, 0}, t;
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (int j = 0; j < 10; j++)
        printf("%d\t", a[j]);
    printf("\n");
    return 0;
}