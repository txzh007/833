//
// Created by Tan on 2018/5/5.
//

#include "stdio.h"

/***
 *
 * �Ӽ��������ַ�������Сд��ĸȫ��ת��Ϊ��д��ĸ��Ȼ�����뵽����text.txt�ļ��б��棬���룡Ϊ������ʶ
 *
 * ֪ʶ�㣺1.�ַ������� 2.�ļ�IO
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
    fp = fopen("text.txt", "w");   // ����text.txt  ������ xxx.exe�ļ���ǰĿ¼
    if (fp == NULL) {
        return 0;
    }
//    fputs(str, fp);
    fprintf(fp, "%s", str);
    fclose(fp);

    return 1;
}