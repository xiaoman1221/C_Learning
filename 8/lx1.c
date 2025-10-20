// Copyright (c) 2025.
// Created By xiaoman1221
//

//
// Created by xiaoman1221 on 2025/10/13.
//
#include <stdio.h>
int main()
{
   float a[5] = {12.5,15.8,20.3,18.6,22.1};
    float b = 0.0;
    for (int i = 0; i < 5; i++)
    {
        b += a[i];
    }
    printf("数组元素的平均值是：%f\n", b/5);
    return 0;
}