#include <mysql.h>
#include <stdio.h>
int main() {
    int i, j, a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, b[4][3];
    for (i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            b[j][i] = a[i][j];
        }
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
}