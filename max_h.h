#pragma once
#include <stdio.h>
float max(float a, float b)
{
    float c = 0;
    c = a > b ? a : b;
    printf("%f\n", &c);
}
