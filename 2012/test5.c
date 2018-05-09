//
// Created by Tan on 2018/5/7.
//
/**
 * 设在文件a.txt和文件b.txt中分别存有两个字符串，设计一个程序将这2个字符串按依序交叉的方式合并成一个字符串
 * （如“aaaaa”与"bbb”的合并结果为“abababaa”;而“bbb”与“aaaaa”的合并结果为“bababaaa”）,并将结果存入文件a.txt中。
 */

#include <mem.h>
#include "stdio.h"


int main() {
    FILE *filea = fopen("a.txt", "r");  // a.txt  b.txt 自行创建
    FILE *fileb = fopen("b.txt", "r");

    if (filea == NULL || fileb == NULL) {
        fclose(filea);
        fclose(fileb);
        return 0;
    }
    int index = 0;
    char ch[40] = "";

    while (1) {
        ch[index++] = (char) fgetc(filea);
        ch[index++] = (char) fgetc(fileb);
        if (ch[index - 1] == -1 && ch[index - 2] == -1)
            break;
    }
    FILE *fp = fopen("a.txt", "w");
    for (int i = 0; i < strlen(ch); i++) {
        if (ch[i] > 0)
            fputc(ch[i], fp);
    }


    fclose(fp);
    fclose(filea);
    fclose(fileb);

    return 1;
}
