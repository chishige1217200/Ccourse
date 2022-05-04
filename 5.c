#include <stdio.h>

int main(void)
{
    int ans = 1;
    int i = 0; // forループ用

    for (i = 1; i <= 10; i++)
    {
        ans = ans * i;
    }

    printf("%d\n", ans);

    return 0; // 慣例
}