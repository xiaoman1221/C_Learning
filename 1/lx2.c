// Copyright (c) 2025.
// Created By xiaoman1221
//

#include <limits.h>
#include <stdio.h>

int main()
{
    printf("short: %d,%d\n",SHRT_MIN,SHRT_MAX);
    printf("int: %d,%d\n",INT_MIN,INT_MAX);
    printf("long: %ld,%ld\n",LONG_MIN,LONG_MAX);
    printf("long long: %lld,%lld\n",LLONG_MIN,LLONG_MAX);

    printf("unsigned short: %u\n",USHRT_MAX);
    printf("unsigned int: %u\n",UINT_MAX);
    printf("unsigned long: %lu\n",ULONG_MAX);
    return 0;
}