#include <stdio.h>

int main(void)
{
    int a = 2;

    while (a < 1024)
    {
        printf("%d\n", a);
        a = a * a;
    }

    return 0; // 慣例
}