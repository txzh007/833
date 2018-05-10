//
// Created by Tan on 2018/5/9.
//
/**
 * 有一篇文章，共有3行文字，每行有60个字符，要求分别求出其中的因为大写字母，数组及其他字符的个数；
 *
 * 测试用例：
 *  j!BO0g&hA6HPL9if73Kh
 *  DHGds3ccXB6@9ZlJzSWs
 *  Frs7ww0n0bYfEN@mc1*%
 *
 *  大写字母 18  数字 7  其他字符 35  总计60
 *
 */
#include "stdio.h"

int main() {
    FILE *fp = fopen("test.txt", "r");
    char string[100] = "";
    int uppercaseCount = 0, numCount = 0, otherCount = 0;
    while (fgets(string, 100, fp)) {
        for (int i = 0; i < strlen(string); i++) {
            if (string[i] < 'Z' && string[i] > 'A')
                uppercaseCount++;
            else if (string[i] > '0' && string[i] < '9')
                numCount++;
            else if (string[i] != '\n')
                otherCount++;
        }
    }


    printf("大写字母：%d个,数字：%d个，其他字符%d个", uppercaseCount, numCount, otherCount);
    fclose(fp);
    return 1;
}