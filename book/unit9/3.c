#include <stdio.h>
#include <stdlib.h>
char metachar[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
struct student {
    int id;
    char name[10];
    double score[3];
};
int main() {
    struct student stus[10];
    int i, j, k = 0;
    float sum = 0, max = 0;
    for (i = 0; i < 10; i++) {
        stus[i].id = i + 1;
        stus[i].name[0] = metachar[rand() % 62];
        stus[i].name[1] = metachar[rand() % 62];
        for (j = 0; j < 3; j++)
            stus[i].score[j] = (rand() % 500 + 500) / 10.0;
    }

    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 10; j++)
            sum += stus[j].score[i];
        printf("第%d门课的平均成绩是:%.1lf\n", i + 1, sum / 10);
    }

    for (i = 0; i < 10; i++) {
        sum = 0;
        for (int j = 0; j < 3; j++)
            sum += stus[i].score[j];
        if (sum > max) {
            k = i;
            max = sum;
        }
    }
    printf("\n最高分的学生学号是:%d\n姓名是:%s\n", stus[k].id, stus[k].name);
    printf("成绩是：%.1lf %.1lf %.1lf\n", stus[k].score[0], stus[k].score[1], stus[k].score[2]);
    printf("平均成绩是：%.1lf", max / 3);
    return 0;
}