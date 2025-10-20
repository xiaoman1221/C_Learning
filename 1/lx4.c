// Copyright (c) 2025.
// Created By xiaoman1221
//

#include <stdio.h>

enum months
{
    JAN=1,EFB=2,MAR=3,APR=4,MAY=5,JUN=6,
    JUL=7,AUG=8,SEP=9,OCT=10,NOV=11,DEC=12
};

int main()
{
    int thismouth;
    printf("请输入月份: ");
    scanf("%d",&thismouth);
    printf("%d 1月",thismouth);
    printf("\n");
    return 0;

}