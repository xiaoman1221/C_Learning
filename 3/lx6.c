// Copyright (c) 2025.
// Created By xiaoman1221
//

#include <stdio.h>
//
// Created by xiaoman1221 on 2025/9/18.
//
void main()
{
    int a;
    float b;
    char c;
    printf("输入整数：");
    scanf("%d",&a);
    getchar();
    printf("输入Float数：");
    scanf("%f",&b);
    getchar();
    printf("请输入字符：");
    scanf("%c",&c);
    getchar();
    printf("等于：%f\n",a+b+c);
}