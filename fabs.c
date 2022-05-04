#include <stdio.h>

float my_fabs(float num)
{
    if (num < 0)
        return num * -1;
    else
        return num;
}

int main(void)
{
    float a = 0;
    scanf("%f", &a);

    printf("%f\n", my_fabs(a));

    return 0; // 慣例
}