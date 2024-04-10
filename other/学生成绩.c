/*
输入学生语文成绩信息,
输入为负数结束输入,
要求用函数统计学生人数,
求学生平均成绩,
降序排序学生成绩
*/
#include <stdio.h>
int renshu(int *a) {
    int i = 0;
    while (a[i] >= 0 && i < 50) {
        i++;
    }
    return i;
}

int main() {
    int i, j, a[50], avg = 0, sum = 0, shu, temp;
    for (i = 0; i < 50; i++) {
        printf("请输入第%d名学生成绩:", i + 1);
        scanf("%d", &j);
        a[i] = j;
        if (j < 0)
            break;
    }
    shu = renshu(a);
    printf("一共有%d名学生\n", shu);
    for (i = 0; i < shu; i++)
        sum += a[i];
    avg = sum / shu;
    printf("学生平均成绩为:%d\n", avg);
    for (i = 0; i < shu; i++) {
        for (j = 0; j < shu; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("降序学生成绩如下:\n");
    for (i = 0; i < shu; i++)
        printf("第%d名:%d分\n", i + 1, a[i]);
    return 0;
}