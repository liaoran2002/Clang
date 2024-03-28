/*
数值统计
> 统计字符串中字母、数字、空格、其他字符出现的次数。
--输入
  输入字符串
--输出
  输出各个字符出现的次数
提示：
  利用字符类型函数判断字符是否为字母、数字、空格、其他字符。
  isalpha()函数判断字符是否为字母。
  isdigit()函数判断字符是否为数字。
  isspace()函数判断字符是否为空格。
*/
#include <ctype.h>
#include <stdio.h>
int main() {
    char str[100];
    int letter = 0, digit = 0, space = 0, other = 0;
    printf("请输入字符串：");
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letter++;
        } else if (isdigit(str[i])) {
            digit++;
        } else if (isspace(str[i])) {
            space++;
        } else {
            other++;
        }
    }
    printf("字母出现的次数：%d\n", letter);
    printf("数字出现的次数：%d\n", digit);
    printf("空格出现的次数：%d\n", space);
    printf("其他字符出现的次数：%d\n", other);
    return 0;
}