//
// Created by Tan on 2018/5/5.
//

#include "stdio.h"

int main() {
    FILE *fp = NULL;
    fp = fopen("text.txt", "w");   // ����text.txt  ������ xxx.exe�ļ���ǰĿ¼
    if (fp == NULL) {
        return 0;
    }

    fprintf(fp, "hello");
    fclose(fp);

    return 1;
}