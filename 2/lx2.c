// Copyright (c) 2025.
// Created By xiaoman1221
//

#include <stdio.h>

void main()
{
    int num = 0;
    printf("输入一个数字：");
    scanf("%d",&num);
    if (num<=100)
    {
        const int a = num / 10;
        const int b = num % 10;
        printf("%d的十位上是：%d,个位数字是：%d",num,a,b);
    }else if (num>=100 && num<=999)
    {
        const int a = num / 100;
        const int b = (num - a*100) / 10;
        const int c= num%10;
        printf("数字%d的百位是：%d十位是：%d个位是：%d",num,a,b,c);
    }else
    {
        printf("整这老大不过了?");
    }
}