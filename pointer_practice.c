#include <stdio.h>

int main(void)
{
    char c[100];
    char *p;

    printf("英文字列を入力してください．\n");
    scanf("%s", c);

    printf("Before: %s\n", c);

    // 開始アドレスを代入
    p = c;

    // 小文字を大文字に変換
    while (*p != 0)
    {
        if (*p >= 97 && *p <= 122)
            *p = *p - 32;
        p++;
    }

    printf(" After: %s\n", c);

    return 0; // 慣例
}