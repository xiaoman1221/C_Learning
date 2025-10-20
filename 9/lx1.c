// Copyright (c) 2025.
// Created By xiaoman1221
//

//
// Created by xiaoman1221 on 2025/10/16.
//
#include <stdio.h>

int main()
{
    int zzy[10];
    printf("输入10个数: \n");
    for (int i = 0;i<10;i++)
    {
        scanf("%d",&zzy[i]);
        getchar();
    }
    int max = zzy[0];
    int min = zzy[0];
    for (int i = 1;i<10;i++)
    {
        if (max<zzy[i])
        {
            max = zzy[i];
        }
        if (min>zzy[i])
        {
            min = zzy[i];
        }
    }
    printf("最大是：%d\n",max);
    printf("最小是：%d\n",min);
    return 0;
    /*
     */
}