#include <stdio.h>

int main(void)
{
    char c[100];
    char *p;

    printf("英文字列を入力してください．\n");
    scanf("%s", c);

    printf("Before: %s\n", c);

    // 小文字を大文字に変換

    printf(" After: %s\n\n", c);

    return 0; // 慣例
}