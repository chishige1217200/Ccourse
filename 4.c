#include <stdio.h>

int main(void)
{
    float a = 0.0001;
    int n = 0;

    while (a < 384400000)
    {
        a = a * 2;
        n++;
    }

    printf("%d\n", n);

    return 0; // 慣例
}