#include <stdio.h>

int main(void)
{
    int i = 1; // 段
    int j = 1;

    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {
            if (i * j < 10)
                printf(" ");
            printf("%d", i * j);
            if (j < 9)
                printf(" ");
        }
        printf("\n");
    }

    return 0; // 慣例
}