// Copyright (c) 2025.
// Created By xiaoman1221
//

//
// Created by xiaoman1221 on 2025/9/22.
//

#include <stdio.h>

int main()
{
    // printf("1到100的和为5050");
    int a = 100,i = 0,num = 0;
    for (i=1;i<=a/2;i++){
        num = num + a + 1;
    }
    printf("%d到%d的和为%d",1,a,num);
    return 0;
}
