#include <stdio.h>

int factorial(int n); // 関数プロトタイプ宣言

int main(void)
{
    int a = 0;
    scanf("%d", &a);

    printf("%d\n", factorial(a));

    return 0;
}

int factorial(int n) // main関数より後に登場
{
    int ans = 1;
    int i = 1;
    if (n >= 13)
        fprintf(stderr, "オーバーフローが発生しています．\n");
    for (i = 1; i <= n; i++)
    {
        ans = ans * i;
    }

    return ans;
}