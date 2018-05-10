//
// Created by Tan on 2018/5/10.
//
/**
 * 实现一个学生类Student，对学号、姓名、三门课程进行管理。
 * 1）类应该能够单独设置和获取三门课的成绩
 * 2）可以计算平均成绩
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
    printf("请输入学号，姓名\n");
    scanf("%s %s", &stu->studentNo, &stu->name);
    for (int i = 0; i < sizeof(stu->score) / sizeof(double); ++i) {
        printf("请输入第%d门课成绩\n", i + 1);
        scanf("%lf", &stu->score[i]);
    }

}

int main() {

    struct Student test;
    initStudent(&test);
    setAvg(&test);
    printf("学号:%s\n", test.studentNo);
    printf("姓名:%s\n", test.name);

    printf("均分:%.2lf\n", test.avg);
    return 1;
}