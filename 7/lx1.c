// Copyright (c) 2025.
// Created By xiaoman1221
//

//
// Created by xiaoman1221 on 2025/10/9.
//
#include <stdio.h>
void main()
{
    int a,b,c;
    for(a=0;a<=20;a++)
    {
        for(b=0;b<=33;b++)
        {
            for(c=0;c<=100;c++)
            {
                if(a+b+c==100 && a*5 + b * 3  + c/3.0 == 100)
                {
                    printf("汉堡=%2d,鸡腿=%2d,翅根=%2d\n",a,b,c);
                }
            }
        }
    }
}


