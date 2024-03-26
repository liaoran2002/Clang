#include <stdio.h>

int main() {
    // 打开文件f.png和p.png
    FILE *fp1 = fopen("f.png", "rb+");
    FILE *fp2 = fopen("p.png", "wb+");
    if (fp1 == NULL || fp2 == NULL) {
        // 如果文件打开失败，输出错误信息并返回1
        printf("Error: unable to open file\n");
        return 1;
    }
    // 定位文件f.png的末尾
    fseek(fp1, 0, SEEK_END);
    // 获取文件f.png的大小
    long size = ftell(fp1);
    // 重新定位文件f.png的开头
    fseek(fp1, 0, SEEK_SET);
    // 分配内存buffer，大小为文件f.png的大小
    char *buffer = malloc(size);
    // 从文件f.png读取数据到buffer
    fread(buffer, 1, size, fp1);
    // 将buffer中的数据写入文件p.png
    fwrite(buffer, 1, size, fp2);
    // 释放buffer
    free(buffer);
    // 关闭文件f.png和p.png
    fclose(fp1);
    fclose(fp2);
    // 返回0表示程序成功执行
    return 0;
}