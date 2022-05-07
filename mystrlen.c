#include <stdio.h>

int mystrlen(char *p)
{
    return 0; // 正しい結果をreturnするように変更
}

int main(void)
{
    char a[100] = "MYSTRLEN";

    printf("len: %d\n", mystrlen(a));

    return 0; // 慣例
}