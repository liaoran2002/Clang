#include <stdio.h>
void fun(int a[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] > a[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

int main() {
    int a[6] = {8, 5, 9, 1, 0, 6}, i;
    fun(a, 6);
    for (i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}