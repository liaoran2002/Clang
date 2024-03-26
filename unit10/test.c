#include <stdio.h>

int main() {
    FILE *fp;
    char ch1;
    if ((fp = fopen("test.txt", "w")) == NULL) {
        printf("open file error");
        return 0;
    }
    while ((ch1 = getchar()) != '\n') {
        fputc(ch1, fp);
        if (ch1 == '.')
            fputc('\n', fp);
    }
    fclose(fp);
    if ((fp = fopen("test.txt", "r")) == NULL) {
        printf("open file error");
        return 0;
    }
    ch1 = fgetc(fp);
    while (ch1 != EOF) {
        printf("%c", ch1);
        ch1 = fgetc(fp);
    }
    fclose(fp);
    return 0;
}