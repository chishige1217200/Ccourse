#include <stdio.h>

float array_fabs(float *p, int count)
{
    int i = 0;

    for (i = 0; i < count; i++)
    {
        if (*p < 0)
            *p = *p * -1;
        p++;
    }
}

int main(void)
{
    float a[5] = {-4.0, 3.0, 12.0, -55.0, 0};
    int i = 0;

    array_fabs(a, 5); // &a[0]に同じ

    for (i = 0; i < 5; i++)
        printf("%f\n", a[i]);

    return 0; // 慣例
}