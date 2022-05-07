#include <stdio.h>

int main(void)
{
    int i = 0;

    printf("iを入力してください．\n");
    scanf("%d", i); // 0番地に書き込み!?

    printf("i:%d\n", i);

    return 0; // 慣例
}