#include <stdio.h>
int ass(int a[4][5]) {
    int i, j, sum;

    return sum;
}
void main() {
    int a[4][5];
    int sum, i, j;
    scanf("%d", &a[0][0]);
    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++) {
            if (i == 0 && j == 0)
                continue;
            else if (j == 0)
                a[i][j] = a[i - 1][4] + 1;
            else
                a[i][j] = a[i][j - 1] + 1;
        }
    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++) {
            printf("%5d", a[i][j]);
            if (j == 4)
                printf("\n");
        }
    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++) {
            if (i == 0 || i == 3 || i == 1 && j == 0 || i == 2 && j == 0 || i == 1 && j == 4 || i == 2 && j == 4)
                sum = sum + a[i][j];
        }
    printf("%d\n", sum);
}