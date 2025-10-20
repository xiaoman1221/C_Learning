// Copyright (c) 2025.
// Created By xiaoman1221
//

//
// Created by xiaoman1221 on 2025/9/29.
//

#include <stdio.h>

void main()
{
    int sec;
    printf("输入星期（1-7）: ");
    scanf("%d", &sec);
    getchar();
    switch(sec)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Bro,工作日，Go Work!!");
            break;
        case 6:
        case 7:
            printf("Bro,休息日，那也Go Work!!");
            break;
        default:
            printf("超耐磨傻逼吧");
            break;
    }
}
