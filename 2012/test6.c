//
// Created by Tan on 2018/5/9.
//
/**
 * ��һƪ���£�����3�����֣�ÿ����60���ַ���Ҫ��ֱ�������е���Ϊ��д��ĸ�����鼰�����ַ��ĸ�����
 *
 * ����������
 *  j!BO0g&hA6HPL9if73Kh
 *  DHGds3ccXB6@9ZlJzSWs
 *  Frs7ww0n0bYfEN@mc1*%
 *
 *  ��д��ĸ 18  ���� 7  �����ַ� 35  �ܼ�60
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


    printf("��д��ĸ��%d��,���֣�%d���������ַ�%d��", uppercaseCount, numCount, otherCount);
    fclose(fp);
    return 1;
}