//
// Created by Tan on 2018/5/5.
//

#include "stdio.h"

int main() {
    FILE *fp = NULL;
    fp = fopen("text.txt", "w");   // 产生text.txt  在生成 xxx.exe文件当前目录
    if (fp == NULL) {
        return 0;
    }

    fprintf(fp, "hello");
    fclose(fp);

    return 1;
}