// Copyright (c) 2025.
// Created By xiaoman1221
//

#include <stdio.h>
//
// Created by xiaoman1221 on 2025/9/18.
//
void  main()
{
    int num;
    char c;
    float f;
    // ------
    printf("Enter a number: \n");
    scanf("%d", &num);
    getchar();
    printf("Enter a floating-point number: \n");
    scanf("%f", &f);
    getchar();
    printf("Enter a character: \n");
    scanf("%c", &c);
    getchar();

    // ------
    printf("The number is: %d\n", num);
    printf("The character is: %c\n",c);
    printf("The floating-point number is: %f\n",f);

}