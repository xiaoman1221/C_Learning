// Copyright (c) 2025.
// Created By xiaoman1221
//

//
// Created by xiaoman1221 on 2025/10/17.
//
#include <stdio.h>

int main()
{
    // int var-name = 0;
    // int _varname = 0;
    // int 2var = 1;
    // int var name = 0;

    // a^2 + b^2 = c^2
    int a = 0,b = 0,c = 0;
    printf("输入三个边：");
    scanf("%d",&a);
    getchar();
    scanf("%d",&b);
    getchar();
    scanf("%d",&c);
    getchar();
    //=========
    if(a*a + b*b == c*c )
    {
        printf("ABC可以组成");
    }else
    {
        printf("GUN");
    }
    for (int i = 0;i < a;i = i + 2)
    {

    }
    return 0;
}