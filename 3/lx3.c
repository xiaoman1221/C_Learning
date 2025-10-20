// Copyright (c) 2025.
// Created By xiaoman1221
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
//
// Created by xiaoman1221 on 2025/9/18.
//
void main()
{
    int studentNumber = 0;
    float studentSource = 0;
    char studentLevel;
    _Bool pass;
    printf("欢迎来到考试信息录入系统，请开始您的工作\n");
    printf("祝您工作愉快\n");;
    printf("-----------------------------------\n\n");
    printf("请输入学号：");
    scanf("%d",&studentNumber);
    getchar();
    printf("请输入学生分数:");
    scanf("%f",&studentSource);
    getchar();

    if (studentSource < 60)
    {
        studentLevel = 'C';
        pass = 0;

    }else if (studentSource >= 60 && studentSource < 80)
    {
        studentLevel = 'B';
        pass = 1;
    }else if (studentSource >= 80 && studentSource <= 100)
    {
        studentLevel = 'A';
        pass = 1;
    }else
    {
        printf("数据不合法！！");
        exit(0);
    }
    if (pass)
    {
        printf("您的学号是%d,您的成绩是%.2f，您的等级是%c,您通过考核，恭喜",studentNumber,studentSource,studentLevel);
        exit(0);
    }else
    {
        printf("您的学号是%d,您的成绩是%.2f，您的等级是%c,您未能通过考核，再接再厉",studentNumber,studentSource,studentLevel);
        exit(0);

    }

}