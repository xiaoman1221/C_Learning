// Copyright (c) 2025.
// Created By xiaoman1221
//

//
// Created by xiaoman1221 on 2025/9/25.
//

#include <stdio.h>

void main()
{
    int xiaoming;
    printf("输入成绩（0-100）: ");
    scanf("%d", &xiaoming);
    getchar();
    if (xiaoming >= 90 && xiaoming <= 100){
        printf("等级A\n");
    }else if (xiaoming >= 80 && xiaoming < 90)
    {
        printf("等级B\n");
    }else if (xiaoming >=70 && xiaoming < 80)
    {
        printf("等级C\n");
    }else if (xiaoming >=60 && xiaoming < 70)
    {
        printf("等级D\n");
    }else if (xiaoming <=59 && xiaoming >= 0)
    {
        printf("等级F\n");
    }
    else{
        printf("错误数字");
    }

}