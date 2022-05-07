#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[10] = "Hello.";
    char b[10] = "Hello.";

    if (a == b) // アドレス比較してしまっている
    {
        printf("1: 2つの文字列は同じです！\n");
    }

    if (strcmp(a, b) == 0)
    {
        printf("2: 2つの文字列は同じです！\n");
    }

    return 0; // 慣例
}