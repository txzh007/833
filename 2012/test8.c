//
// Created by Tan on 2018/5/10.
//
/**
 * ʵ��һ��ѧ����Student����ѧ�š����������ſγ̽��й���
 * 1����Ӧ���ܹ��������úͻ�ȡ���ſεĳɼ�
 * 2�����Լ���ƽ���ɼ�
 */
#include "stdio.h"

struct Student {
    char studentNo[16];
    char name[8];
    double score[3];

    double avg;
};

void setAvg(struct Student *stu) {
    double sum = 0.0;
    int size = sizeof(stu->score) / sizeof(double);
    for (int i = 0; i < size; i++) {
        sum += stu->score[i];
    }
    stu->avg = sum / size;
}

void initStudent(struct Student *stu) {
    printf("������ѧ�ţ�����\n");
    scanf("%s %s", &stu->studentNo, &stu->name);
    for (int i = 0; i < sizeof(stu->score) / sizeof(double); ++i) {
        printf("�������%d�ſγɼ�\n", i + 1);
        scanf("%lf", &stu->score[i]);
    }

}

int main() {

    struct Student test;
    initStudent(&test);
    setAvg(&test);
    printf("ѧ��:%s\n", test.studentNo);
    printf("����:%s\n", test.name);

    printf("����:%.2lf\n", test.avg);
    return 1;
}