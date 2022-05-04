#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 1;

    for (i = 1; i < 3; i++)
    {
        printf("%d回目開始\n", i);
        for (j = 1; j < 4; j++)
        {
            printf("%d\n", i * j);
        }
        printf("%d回目終了\n", i);
    }
    printf("終了\n");

    return 0; // 慣例
}