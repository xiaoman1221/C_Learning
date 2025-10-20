// Copyright (c) 2025.
// Created By xiaoman1221
//

#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number is: %d\n", --num);
    printf("The number is: %d\n", (++num) + (num++) * (num--));
}