//
// Created by Tan on 2018/5/5.
//

#include "stdio.h"

/***
 *
 * 从键盘输入字符串，将小写字母全部转化为大写字母，然后输入到磁盘text.txt文件中保存，输入！为结束标识
 *
 * 知识点：1.字符串操作 2.文件IO
 *
 * */


int main() {
    char str[100] = "";
    int index = 0;
    int ch;
    while ((ch = getchar()) != '!') {
        if (ch >= 'a' && ch <= 'z') {
            ch -= 32;
        }
        str[index] = (char) ch;

        index++;
    }


    printf("%s\n", str);

    FILE *fp = NULL;
    fp = fopen("text.txt", "w");   // 产生text.txt  在生成 xxx.exe文件当前目录
    if (fp == NULL) {
        return 0;
    }
//    fputs(str, fp);
    fprintf(fp, "%s", str);
    fclose(fp);

    return 1;
}