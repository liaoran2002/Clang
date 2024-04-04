#include <stdio.h>
struct date {
    int year;
    int mouth;
    int day;
};
int main() {
    struct date dat;
    int count = 0;
    printf("请输入年份:");
    scanf("%d", &dat.year);
    printf("请输入月份:");
    scanf("%d", &dat.mouth);
    printf("请输入日期:");
    scanf("%d", &dat.day);
    count += dat.day;
    switch (dat.mouth - 1) {
    case 11:
        count += 30;
    case 10:
        count += 31;
    case 9:
        count += 30;
    case 8:
        count += 31;
    case 7:
        count += 31;
    case 6:
        count += 30;
    case 5:
        count += 31;
    case 4:
        count += 30;
    case 3:
        count += 31;
    case 2:
        count += 28;
    case 1:
        count += 31;
    default:
        break;
    }
    if (dat.mouth > 2 && ((dat.year % 4 == 0 && dat.year % 100 != 0) || dat.year % 400 == 0))
        count++;
    printf("%d-%d-%d是%d年的第%d天", dat.year, dat.mouth, dat.day, dat.year, count);
    return 0;
}