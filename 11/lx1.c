// Copyright (c) 2025.
// Created By xiaoman1221
//
#include <stdio.h>
int main()
{
    float var[20];
    printf("Enter number of variables: ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%f", &var[i]);
        getchar();
    }
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19-i; j++)
        {
            if (var[j] < var[j+1])
            {
                float tmp = var[j];
                var[j] = var[j+1];
                var[j+1] = tmp;
            }
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if (i != 0 && i % 9 == 0)
        {
            printf("\n");
        }
        printf("%.2f  ", var[i]);
    }
}

